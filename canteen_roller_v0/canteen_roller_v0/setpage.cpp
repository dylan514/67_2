#include "setpage.h"
#include "ui_setpage.h"
#include "addnew.h"
#include "openpage.h"

SetPage::SetPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SetPage)
{
    ui->setupUi(this);

}

SetPage::~SetPage()
{
    delete ui;
}

void SetPage::on_pushButton_clicked()
{
    this->homeEvent();
}


void SetPage::on_addnew_button_clicked()
{
    this->hide();
    Addnew* newm= new Addnew;
    connect(newm, &Addnew::homed, this, &SetPage::homeEvent);
    newm->show();
}

