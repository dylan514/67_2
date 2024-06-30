/********************************************************************************
** Form generated from reading UI file 'distance.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISTANCE_H
#define UI_DISTANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_distance
{
public:
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *distance)
    {
        if (distance->objectName().isEmpty())
            distance->setObjectName("distance");
        distance->resize(1050, 725);
        distance->setMinimumSize(QSize(1050, 725));
        distance->setMaximumSize(QSize(1050, 725));
        comboBox = new QComboBox(distance);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(80, 160, 400, 50));
        comboBox->setMinimumSize(QSize(400, 50));
        comboBox->setMaximumSize(QSize(400, 50));
        comboBox->setStyleSheet(QString::fromUtf8("font: 28pt \"\345\276\256\350\275\257\351\233\205\351\273\221\""));
        pushButton = new QPushButton(distance);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 470, 151, 111));
        pushButton->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_2 = new QPushButton(distance);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(320, 470, 151, 111));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(distance);

        QMetaObject::connectSlotsByName(distance);
    } // setupUi

    void retranslateUi(QWidget *distance)
    {
        distance->setWindowTitle(QCoreApplication::translate("distance", "Form", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("distance", "             \344\270\200\346\225\231", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("distance", "             \344\272\214\346\225\231", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("distance", "             \344\270\211\346\225\231", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("distance", "             \345\233\276\344\271\246\351\246\206", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("distance", "             \347\220\206\346\225\231", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("distance", "             \344\272\224\345\233\233\346\223\215\345\234\272", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("distance", "             39\346\245\274", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("distance", "             \347\220\206\344\270\200", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("distance", "             \347\220\206\344\272\214", nullptr));

        pushButton->setText(QCoreApplication::translate("distance", "\347\273\247  \347\273\255", nullptr));
        pushButton_2->setText(QCoreApplication::translate("distance", "\350\277\224  \345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class distance: public Ui_distance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISTANCE_H
