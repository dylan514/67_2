#include "boom.h"
#include "ui_boom.h"
#include <QPixmap>
#include <QDir>
#include "meals.h"

Meals mmeal;
BOOM::BOOM(Meals meal,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BOOM)
{
    ui->setupUi(this);
    mmeal=meal;
    ui->egg->setText(QString::number(meal.protein));
    ui->fat->setText(QString::number(meal.fat));
    ui->hot->setText(QString::number(meal.hot));
    ui->c->setText(QString::number(meal.carbo));
    ui->money->setText(QString::number(meal.price));
    ui->mealname->setText(meal.name);
    QPixmap pic=QPixmap(QDir::currentPath()+"/"+meal.picturepath);
    ui->picture->setPixmap(pic.scaled(ui->picture->size(),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->can->setText(meal.canteen);
}

BOOM::~BOOM()
{
    delete ui;
}
