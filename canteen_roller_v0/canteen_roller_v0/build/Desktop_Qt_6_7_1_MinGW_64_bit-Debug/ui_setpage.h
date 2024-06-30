/********************************************************************************
** Form generated from reading UI file 'setpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPAGE_H
#define UI_SETPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetPage
{
public:
    QPushButton *pushButton;
    QPushButton *addnew_button;

    void setupUi(QWidget *SetPage)
    {
        if (SetPage->objectName().isEmpty())
            SetPage->setObjectName("SetPage");
        SetPage->resize(600, 400);
        SetPage->setMinimumSize(QSize(600, 400));
        SetPage->setMaximumSize(QSize(600, 400));
        pushButton = new QPushButton(SetPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 320, 80, 61));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        addnew_button = new QPushButton(SetPage);
        addnew_button->setObjectName("addnew_button");
        addnew_button->setGeometry(QRect(40, 40, 120, 40));
        addnew_button->setMinimumSize(QSize(120, 40));
        addnew_button->setMaximumSize(QSize(120, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(12);
        addnew_button->setFont(font);
        addnew_button->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(SetPage);

        QMetaObject::connectSlotsByName(SetPage);
    } // setupUi

    void retranslateUi(QWidget *SetPage)
    {
        SetPage->setWindowTitle(QCoreApplication::translate("SetPage", "\350\256\276\347\275\256", nullptr));
        pushButton->setText(QCoreApplication::translate("SetPage", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
        addnew_button->setText(QCoreApplication::translate("SetPage", "\346\267\273\345\212\240\350\217\234\345\223\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetPage: public Ui_SetPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPAGE_H
