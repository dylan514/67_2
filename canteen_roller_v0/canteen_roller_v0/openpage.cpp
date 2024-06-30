#include "openpage.h"
#include "startpage.h"
#include "setpage.h"
#include "recordpage.h"
#include "intropage.h"
#include "ui_openpage.h"
#include "distance.h"
#include <QString>
#include <QFile>


OpenPage::OpenPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OpenPage)
{
    ui->setupUi(this);

}

OpenPage::~OpenPage()
{
    delete ui;
}

void OpenPage::reshow(){
    this->show();
}

void OpenPage::on_begin_button_clicked()
{
    this->hide();
    //distance *distg=new distance;
    StartPage *startg = new StartPage;
    connect(startg, &StartPage::homed, this, &OpenPage::reshow);
    startg->show();
}


void OpenPage::on_set_button_clicked()
{
    this->hide();
    SetPage *setg = new SetPage;
    connect(setg, &SetPage::homed, this, &OpenPage::reshow);
    setg->show();
}


void OpenPage::on_record_button_clicked()
{
    this->hide();
    RecordPage *recordg = new RecordPage;
    connect(recordg, &RecordPage::homed, this, &OpenPage::reshow);
    recordg->show();
}


void OpenPage::on_intro_button_clicked()
{
    this->hide();
    IntroPage *introg = new IntroPage;
    connect(introg, &IntroPage::homed, this, &OpenPage::reshow);
    introg->show();
}

