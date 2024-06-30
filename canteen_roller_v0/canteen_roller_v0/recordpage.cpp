#include "recordpage.h"
#include "ui_recordpage.h"

RecordPage::RecordPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RecordPage)
{
    ui->setupUi(this);
}

RecordPage::~RecordPage()
{
    delete ui;
}

void RecordPage::on_pushButton_clicked()
{
    this->homeEvent();
}

