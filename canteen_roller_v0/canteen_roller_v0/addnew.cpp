#include "addnew.h"
#include "ui_addnew.h"
#include "setpage.h"
#include "startpage.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QFile>

Addnew::Addnew(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Addnew)
{
    ui->setupUi(this);
    ui->in_hot_slider->setRange(0,5);
    connect(ui->in_hot_line,&QLineEdit::returnPressed,[&](){
        bool ok;
        int value = ui->in_hot_line->text().toInt(&ok);
        if(value>=5) value=5;
        if(value<=0) value=0;
        hot=value;
        if(ok) ui->in_hot_slider->setValue(hot);
    });
}

Addnew::~Addnew()
{
    delete ui;
}

void Addnew::on_ok_button_clicked()
{
    //数据保存部分，也是存储中的格式
    QString ho = ui->in_hot_line->text().trimmed();
    QString prot = ui->in_protein_line->text().trimmed();
    QString car = ui->in_carbo_line->text().trimmed();
    QString fa = ui->in_fat_line->text().trimmed();
    QString pric = ui->in_price_line->text().trimmed();
    QString cant = ui->canteen_box->currentText();
    QString cor = ui->checkBox->isChecked()?"Yes":"No";
    QString nam = ui->name_line->text().trimmed();
    QString path = imagepath;

    if (!prot.isEmpty()&&!ho.isEmpty()&&!cor.isEmpty()&&!car.isEmpty()&&!fa.isEmpty()&&!pric.isEmpty()&&!cant.isEmpty()&&!nam.isEmpty()) {
        if (currentpic.save(imagepath)) {
            qDebug() << "图片保存成功：" << imagepath;
            QString relativepath = QDir(QDir::currentPath()).relativeFilePath(imagepath);
            imagepath=relativepath;
        } else {
            qDebug() << "保存图片失败.";
        }
        path = imagepath;

        QFile file("meals.txt");
        if (file.open(QIODevice::Append | QIODevice::Text)) {
            QTextStream out(&file);
            out.setEncoding(QStringConverter::Utf8);
            out << ho<<","<<prot<<","<<car<<","<<fa<<","<<pric<<","<<cant<<","<<cor<<","<<nam<<","<<path<<"\n";
            file.close();
            QMessageBox::information(this, "保存成功", "数据已保存。");
        } else {
            QMessageBox::warning(this, "保存失败", "无法打开文件来保存数据。");
        }
    } else {
        QMessageBox::warning(this, "保存失败", "请确保所有字段都已填写和选择图片。");
    }
}


void Addnew::on_cancel_button_clicked()
{
    this->homeEvent();
}


void Addnew::on_checkBox_stateChanged(int arg1)
{
    coriander=!coriander;
}


void Addnew::on_in_hot_slider_valueChanged(int value)
{
    ui->in_hot_line->setText(QString::number(value));
    hot=value;
}


void Addnew::on_selectpic_button_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this,tr("选择图片"), QDir::currentPath(), tr("Images (*.png *.jpg *.jpeg *.bmp *.gif)"));

    if (!imagePath.isEmpty()) {

        QString saveDir=QDir::currentPath()+"/pics";
        QDir().mkpath(saveDir);

        // 加载图片文件到 QPixmap 对象
        currentpic = QPixmap(imagePath);
        QString imageName = QFileInfo(imagePath).fileName();
        qDebug()<<imageName;

        QString destinationPath = saveDir + "/" + imageName; // 指定保存到pics这个文件夹中
        imagepath=destinationPath;
        // 显示 QPixmap 对象到 QLabel 中
        ui->image_label->setPixmap(currentpic.scaled(ui->image_label->size(),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    }
}

