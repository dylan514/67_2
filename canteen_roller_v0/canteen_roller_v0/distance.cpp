#include "distance.h"
#include "ui_distance.h"
#include "startpage.h"
#include "QDebug"
#include "QPixmap"
#include "ui_startpage.h"
#include "meals.h""
distance::distance(std::vector<Meals>& meal_group,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::distance)

{
    ui->setupUi(this);
    QPixmap px;
    px.load(":/new/prefix1/pic/yuantu.jpg");
    ui->label->setPixmap(px);
    X_me=0;
    Y_me=0;
    MMMeal = &meal_group;
}

distance::~distance()
{
    delete ui;
}
void distance::reshow(){
    this->show();
}
void distance::on_pushButton_clicked()
{
    this->homeEvent();
}


void distance::on_pushButton_2_clicked()
{
    this->homeEvent();
}


void distance::on_comboBox_activated(int index)
{
    qDebug()<<index;
    QPixmap px;
    QString path=":/new/prefix1/pic/";
    if(index==0){path+="yijiao.jpg";X_me=5;Y_me=9;}
    else if(index==1){path+="erjiao.jpg";X_me=7;Y_me=5;}
    else if(index==2){path+="sanjiao.jpg";X_me=8;Y_me=4;}
    else if(index==3){path+="library.jpg";X_me=5;Y_me=8;}
    else if(index==4){path+="lijiao.jpg";X_me=8;Y_me=7;}
    else if(index==5){path+="wusi.jpg";X_me=7;Y_me=2;}
    else if(index==6){path+="39lou.jpg";X_me=3;Y_me=1;}
    else if(index==7){path+="liyi.jpg";X_me=8;Y_me=6;}
    else if(index==8){path+="lier.jpg";X_me=9;Y_me=6;}
    px.load(path);
    if(!px.isNull())
    {ui->label->setPixmap(px);}
    else{
        qDebug() << "Failed to load image at:" << path;
    }
    for(auto it=0;it<MMMeal->size();++it){
        (*MMMeal)[it].distance_to_u=sqrt((X_me-(*MMMeal)[it].x)*(X_me-(*MMMeal)[it].x)+(Y_me-(*MMMeal)[it].y)*(Y_me-(*MMMeal)[it].y));
    }}
