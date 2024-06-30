/********************************************************************************
** Form generated from reading UI file 'recordpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDPAGE_H
#define UI_RECORDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecordPage
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *RecordPage)
    {
        if (RecordPage->objectName().isEmpty())
            RecordPage->setObjectName("RecordPage");
        RecordPage->resize(1050, 725);
        RecordPage->setMinimumSize(QSize(1050, 725));
        RecordPage->setMaximumSize(QSize(1050, 725));
        pushButton = new QPushButton(RecordPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 640, 80, 61));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(RecordPage);

        QMetaObject::connectSlotsByName(RecordPage);
    } // setupUi

    void retranslateUi(QWidget *RecordPage)
    {
        RecordPage->setWindowTitle(QCoreApplication::translate("RecordPage", "\350\256\260\345\275\225", nullptr));
        pushButton->setText(QCoreApplication::translate("RecordPage", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecordPage: public Ui_RecordPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDPAGE_H
