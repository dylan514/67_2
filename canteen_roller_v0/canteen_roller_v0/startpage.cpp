#include "startpage.h"
#include "openpage.h"
#include "models.h"
#include "ui_startpage.h"
#include "meals.h"
#include <QApplication>
#include <QComboBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "distance.h"
#include<QRandomGenerator>
#include "boom.h"

std::vector<Models> model_group;
std::vector<Meals> meal_group;

StartPage::StartPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StartPage)
{
    ui->setupUi(this);
    ui->roller->setStyleSheet(
                               "QPushButton {"
                               "background-color: #E57B70;" // 浅红色
                               "border-radius: 70px;" // 设置圆形按钮，半径为按钮宽度的一半
                               "color: #000000;"
                               "border: 2px solid #A6A6A6" // 边框及颜色
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #B85151;" // 深红色
                               "color: #B8B8B8;"
                               "}"
                               "QPushButton:hover {"
                               "background-color: #DC143C;" // 鼠标悬停时的颜色
                               "}"
    );
    //distance weight处理部分
    ui->distance_slider->setRange(0,10);
    connect(ui->distance_slider,&QSlider::valueChanged,[&](int value){
        ui->distance_line->setText(QString::number(value));
        distance_weight=value;
    });
    connect(ui->distance_line,&QLineEdit::returnPressed,[&](){
        bool ok;
        int value = ui->distance_line->text().toInt(&ok);
        if(value>=10) value=10;
        distance_weight=value;
        if(ok) ui->distance_slider->setValue(distance_weight);
    });

    //price weight处理部分
    ui->price_slider->setRange(0,10);
    connect(ui->price_slider,&QSlider::valueChanged,[&](int value){
        ui->price_line->setText(QString::number(value));
        price_weight=value;
    });
    connect(ui->price_line,&QLineEdit::returnPressed,[&](){
        bool ok;
        int value = ui->price_line->text().toInt(&ok);
        if(value>=10) value=10;
        price_weight=value;
        if(ok) ui->price_slider->setValue(price_weight);
    });

    //protein weight处理部分
    ui->protein_slider->setRange(0,10);
    connect(ui->protein_slider,&QSlider::valueChanged,[&](int value){
        ui->protein_line->setText(QString::number(value));
        protein_weight=value;
    });
    connect(ui->protein_line,&QLineEdit::returnPressed,[&](){
        bool ok;
        int value = ui->protein_line->text().toInt(&ok);
        if(value>=10) value=10;
        protein_weight=value;
        if(ok) ui->protein_slider->setValue(protein_weight);
    });

    //carbo weight处理部分
    ui->carbo_slider->setRange(0,10);
    connect(ui->carbo_slider,&QSlider::valueChanged,[&](int value){
        ui->carbo_line->setText(QString::number(value));
        carbo_weight=value;
    });
    connect(ui->carbo_line,&QLineEdit::returnPressed,[&](){
        bool ok;
        int value = ui->carbo_line->text().toInt(&ok);
        if(value>=10) value=10;
        carbo_weight=value;
        if(ok) ui->carbo_slider->setValue(carbo_weight);
    });

    //fat weight处理部分
    ui->fat_slider->setRange(0,10);
    connect(ui->fat_slider,&QSlider::valueChanged,[&](int value){
        ui->fat_line->setText(QString::number(value));
        fat_weight=value;
    });
    connect(ui->fat_line,&QLineEdit::returnPressed,[&](){
        bool ok;
        int value = ui->fat_line->text().toInt(&ok);
        if(value>=10) value=10;
        fat_weight=value;
        if(ok) ui->carbo_slider->setValue(fat_weight);
    });

    //hot 处理部分
    ui->hot_slider->setRange(0,5);
    connect(ui->hot_slider,&QSlider::valueChanged,[&](int value){
        ui->hot_line->setText(QString::number(value));
        hot_weight=value;
    });
    connect(ui->hot_line,&QLineEdit::returnPressed,[&](){
        bool ok;
        int value = ui->hot_line->text().toInt(&ok);
        if(value>=5) value=5;
        if(value<=0) value=0;
        hot_weight=value;
        if(ok) ui->hot_slider->setValue(hot_weight);
    });

    //读取openpage的meals_group和models_group
    meal_group.clear();
    model_group.clear();
    QFile file("models.txt");
    if (file.open(QIODevice::ReadOnly)) {
        QTextStream stream(&file);
        while (!stream.atEnd()) {
            QString line = stream.readLine();
            QStringList parts = line.split(",");
            if (parts.size() >= 8) {
                //读入数据部分
                QString name = parts[0].trimmed();
                int distance = parts[1].toInt();
                int price = parts[2].toInt();
                int protein = parts[3].toInt();
                int carbo = parts[4].toInt();
                int fat = parts[5].toInt();
                int hot = parts[6].toInt();
                QString coriander = parts[7].trimmed();
                bool coriander_ac=true;
                if(coriander=="No") coriander_ac=false;
                //新建一个Models对象加入model_group的vector中，并将这个model加入premodel_box中
                Models mp(distance,price,protein,carbo,fat,hot,coriander_ac,name);
                model_group.push_back(mp);
                //qDebug()<<model_group.size();
            }
        }
        file.close();
    } else {
        qDebug() << "Failed to open file for reading";
    }

    //将文件中的meals读取出来，存到meal_group里
    QFile file_meal("meals.txt");
    if (file_meal.open(QIODevice::ReadOnly)) {
        QTextStream stream(&file_meal);
        while (!stream.atEnd()) {
            QString line = stream.readLine();
            QStringList parts = line.split(",");
            if (parts.size() >= 9) {
                //读入数据部分
                int ho = parts[0].toInt();
                int prot = parts[1].toInt();
                int car = parts[2].toInt();
                int fa = parts[3].toInt();
                int pri = parts[4].toInt();
                QString cant = parts[5].trimmed();
                QString coriand = parts[6].trimmed();
                bool coriander_ac=true;
                if(coriand=="No") coriander_ac=false;
                QString na = parts[7].trimmed();
                QString pat = parts[8].trimmed();
                //新建一个Meals对象，存放到meal_group里
                Meals ml = Meals(ho,prot,car,fa,pri,cant,coriander_ac,na,pat,0);
                meal_group.push_back(ml);
                //qDebug()<<meals_group.size();
            }
        }
        file_meal.close();
    } else {
        qDebug() << "Failed to open file for reading";
    }
    qDebug()<<meal_group.size();
    qDebug()<<model_group.size();

    //把model_group的东西加载出来
    for(int i=0;i<model_group.size();i++){
        ui->premodel_box->addItem(model_group[i].model_name,QVariant::fromValue(model_group[i]));
    }
}

StartPage::~StartPage()
{
    delete ui;
}



void StartPage::on_home_clicked()
{
    this->homeEvent();
}




void StartPage::on_premodel_box_currentIndexChanged(int index)
{
    Models selected = ui->premodel_box->itemData(index).value<Models>();
    ui->distance_slider->setValue(selected.distance_weight);
    ui->price_slider->setValue(selected.price_weight);
    ui->protein_slider->setValue(selected.protein_weight);
    ui->carbo_slider->setValue(selected.carbo_weight);
    ui->fat_slider->setValue(selected.fat_weight);
    ui->hot_slider->setValue(selected.hot_limit);
    ui->coriander_box->setChecked(selected.coriander_acc);
    ui->distance_line->setText(QString::number(selected.distance_weight));
    ui->price_line->setText(QString::number(selected.price_weight));
    ui->protein_line->setText(QString::number(selected.protein_weight));
    ui->carbo_line->setText(QString::number(selected.carbo_weight));
    ui->fat_line->setText(QString::number(selected.fat_weight));
    ui->hot_line->setText(QString::number(selected.hot_limit));
}





void StartPage::on_savemodel_button_clicked()
{
    //信息预处理
    QString names=ui->newmodel_line->text();
    QString distance=ui->distance_line->text();
    QString price=ui->price_line->text();
    QString protein=ui->protein_line->text();
    QString carbo=ui->carbo_line->text();
    QString fat=ui->fat_line->text();
    QString hot=ui->hot_line->text();
    QString coriander=ui->coriander_box->isChecked()?"Yes":"No";
    bool coriander_ac=true;
    if(coriander=="No")coriander_ac=false;

    if(names==""){
        QMessageBox::information(this, "提示", "名字不能为空！", QMessageBox::Ok);
        return;
    }

    Models m(distance.toInt(),price.toInt(),protein.toInt(),carbo.toInt(),fat.toInt(),hot.toInt(),coriander_ac,names);


    //重复的话要不要更新名称
    bool repeat=0;
    int index=-1;
    auto it=std::find(model_group.begin(),model_group.end(),m);
    for(int i=0;i<model_group.size();i++){
        if(names==ui->premodel_box->itemText(i)){
            repeat=1;
            index=i;
            break;
        }
    }
    qDebug()<<index;
    if(repeat){
        QMessageBox::StandardButton reply = QMessageBox::question(this, "提示", "模式已存在，是否要覆盖？",QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            ui->premodel_box->removeItem(index);
            ui->premodel_box->insertItem(index,names,QVariant::fromValue(m));
            QFile file("models.txt");

            if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
                qDebug() << "Failed to open file:" << file.errorString();
                return;
            }
            QTextStream in(&file);
            QStringList lines;
            QString newData = names+","+distance+","+price+","+protein+","+carbo+","+fat+","+hot+","+coriander;
            // 读取文件内容
            while (!in.atEnd()) {
                QString line = in.readLine();
                lines.append(line);
            }
            file.resize(0); // 清空文件内容
            // 修改指定行
            lines[index] = newData;
            // 写入修改后的数据
            QTextStream out(&file);
            for (const QString &line : lines) {
                out << line << "\n";
            }
            file.close();
        }
    }
    else{
        QMessageBox::StandardButton reply = QMessageBox::question(this, "提示", "创建一个新的模式？",QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            ui->premodel_box->addItem(names,QVariant::fromValue(m));
            QFile file("models.txt");
            if (file.open(QIODevice::WriteOnly | QIODevice::Append)) {
                QTextStream stream(&file);
                stream <<names<<","<<distance<<","<<price<<","<<protein<<","<<carbo<<","<<fat<<","<<hot<<","<<coriander<<"\n";
                file.close();
            } else {
                qDebug() << "Failed to open file for writing";
            }
        }
    }
}


void StartPage::on_coriander_box_stateChanged(int arg1)
{
    coriander=!coriander;
}


//开始模拟按钮实现函数，实现模拟之后出结果：于其含要做的东西

void StartPage::on_roller_clicked()
{
    int index=-1;
    std::vector<int> values;
    int totalweight = 0;
    for(int i=0;i<int(meal_group.size());i++)
    {
        int value=750;
        value-=20*distance_weight*meal_group[i].distance_to_u;//这个没写完呢，等shark接收用餐人的位置后就可以写完了
        value-=2*price_weight*meal_group[i].price;
        value+=10*protein_weight*meal_group[i].protein;
        value+=10*carbo_weight*meal_group[i].carbo;
        value+=100*hot_weight*meal_group[i].hot;
        if(!(ui->coriander_box->isChecked())&&meal_group[i].coriander)
        {
            value=0;
        }
        totalweight+=value;
        values.push_back(value);
    }
    int randomValue = QRandomGenerator::global()->bounded(totalweight);
    int cnt=0;
    for(int i=0;i<int(meal_group.size());i++)
    {
        cnt+=values[i];
        if(cnt>=randomValue)
        {
            index=i;
            break;
        }
    }
    qDebug()<<index;
    BOOM *bo=new BOOM(meal_group[index]);
    bo->show();

}
void StartPage::on_pushButton_clicked()
{
    this->hide();
    distance *distg=new distance(meal_group);
    connect(distg,&distance::homed,this,&StartPage::show);
    distg->show();
}

