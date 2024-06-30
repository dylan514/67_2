/********************************************************************************
** Form generated from reading UI file 'intropage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTROPAGE_H
#define UI_INTROPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IntroPage
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *IntroPage)
    {
        if (IntroPage->objectName().isEmpty())
            IntroPage->setObjectName("IntroPage");
        IntroPage->resize(1050, 725);
        IntroPage->setMinimumSize(QSize(1050, 725));
        IntroPage->setMaximumSize(QSize(1050, 725));
        pushButton = new QPushButton(IntroPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 640, 80, 61));
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        retranslateUi(IntroPage);

        QMetaObject::connectSlotsByName(IntroPage);
    } // setupUi

    void retranslateUi(QWidget *IntroPage)
    {
        IntroPage->setWindowTitle(QCoreApplication::translate("IntroPage", "\344\273\213\347\273\215", nullptr));
        pushButton->setText(QCoreApplication::translate("IntroPage", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IntroPage: public Ui_IntroPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTROPAGE_H
