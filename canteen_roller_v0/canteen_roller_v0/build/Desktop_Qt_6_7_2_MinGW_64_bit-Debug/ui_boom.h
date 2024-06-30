/********************************************************************************
** Form generated from reading UI file 'boom.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOM_H
#define UI_BOOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BOOM
{
public:
    QLineEdit *mealname;
    QLabel *picture;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *egg;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *fat;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *c;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *hot;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *money;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *can;

    void setupUi(QWidget *BOOM)
    {
        if (BOOM->objectName().isEmpty())
            BOOM->setObjectName("BOOM");
        BOOM->resize(674, 313);
        mealname = new QLineEdit(BOOM);
        mealname->setObjectName("mealname");
        mealname->setGeometry(QRect(50, 240, 251, 31));
        picture = new QLabel(BOOM);
        picture->setObjectName("picture");
        picture->setGeometry(QRect(10, 0, 301, 211));
        layoutWidget = new QWidget(BOOM);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(390, 40, 251, 251));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_5->addWidget(label_6);

        egg = new QLineEdit(layoutWidget);
        egg->setObjectName("egg");

        horizontalLayout_5->addWidget(egg);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_6->addWidget(label_5);

        fat = new QLineEdit(layoutWidget);
        fat->setObjectName("fat");

        horizontalLayout_6->addWidget(fat);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        c = new QLineEdit(layoutWidget);
        c->setObjectName("c");

        horizontalLayout_4->addWidget(c);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        hot = new QLineEdit(layoutWidget);
        hot->setObjectName("hot");

        horizontalLayout_3->addWidget(hot);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        money = new QLineEdit(layoutWidget);
        money->setObjectName("money");

        horizontalLayout_2->addWidget(money);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        can = new QLineEdit(layoutWidget);
        can->setObjectName("can");

        horizontalLayout->addWidget(can);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(BOOM);

        QMetaObject::connectSlotsByName(BOOM);
    } // setupUi

    void retranslateUi(QWidget *BOOM)
    {
        BOOM->setWindowTitle(QCoreApplication::translate("BOOM", "Form", nullptr));
        picture->setText(QCoreApplication::translate("BOOM", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("BOOM", "\350\233\213\347\231\275\350\264\250\345\220\253\351\207\217\357\274\210g\357\274\211", nullptr));
        label_5->setText(QCoreApplication::translate("BOOM", "\350\204\202\350\202\252\345\220\253\351\207\217\357\274\210g\357\274\211", nullptr));
        label_4->setText(QCoreApplication::translate("BOOM", "\347\242\263\346\260\264\345\220\253\351\207\217\357\274\210g\357\274\211", nullptr));
        label_3->setText(QCoreApplication::translate("BOOM", "\350\276\243\345\272\246", nullptr));
        label_2->setText(QCoreApplication::translate("BOOM", "\344\273\267\346\240\274\357\274\210\345\205\203\357\274\211", nullptr));
        label->setText(QCoreApplication::translate("BOOM", "\351\243\237\345\240\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BOOM: public Ui_BOOM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOM_H
