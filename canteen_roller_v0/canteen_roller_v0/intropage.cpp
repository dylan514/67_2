#include "intropage.h"
#include "ui_intropage.h"

IntroPage::IntroPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::IntroPage)
{
    ui->setupUi(this);
}

IntroPage::~IntroPage()
{
    delete ui;
}

void IntroPage::on_pushButton_clicked()
{
    this->homeEvent();
}

