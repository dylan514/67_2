/********************************************************************************
** Form generated from reading UI file 'addnew.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEW_H
#define UI_ADDNEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Addnew
{
public:
    QPushButton *ok_button;
    QPushButton *cancel_button;
    QLabel *image_label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSlider *in_hot_slider;
    QLineEdit *in_hot_line;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *in_protein_line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *in_carbo_line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *in_fat_line;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *in_price_line;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *canteen_box;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *name_line;
    QPushButton *selectpic_button;

    void setupUi(QWidget *Addnew)
    {
        if (Addnew->objectName().isEmpty())
            Addnew->setObjectName("Addnew");
        Addnew->resize(600, 400);
        Addnew->setMinimumSize(QSize(600, 400));
        Addnew->setMaximumSize(QSize(600, 400));
        ok_button = new QPushButton(Addnew);
        ok_button->setObjectName("ok_button");
        ok_button->setGeometry(QRect(40, 330, 100, 40));
        ok_button->setMinimumSize(QSize(100, 40));
        ok_button->setMaximumSize(QSize(100, 40));
        ok_button->setCursor(QCursor(Qt::PointingHandCursor));
        cancel_button = new QPushButton(Addnew);
        cancel_button->setObjectName("cancel_button");
        cancel_button->setGeometry(QRect(180, 330, 100, 40));
        cancel_button->setMinimumSize(QSize(100, 40));
        cancel_button->setMaximumSize(QSize(100, 40));
        cancel_button->setCursor(QCursor(Qt::PointingHandCursor));
        image_label = new QLabel(Addnew);
        image_label->setObjectName("image_label");
        image_label->setGeometry(QRect(40, 30, 221, 251));
        layoutWidget = new QWidget(Addnew);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(350, 20, 161, 341));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        in_hot_slider = new QSlider(layoutWidget);
        in_hot_slider->setObjectName("in_hot_slider");
        in_hot_slider->setCursor(QCursor(Qt::PointingHandCursor));
        in_hot_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(in_hot_slider);

        in_hot_line = new QLineEdit(layoutWidget);
        in_hot_line->setObjectName("in_hot_line");
        in_hot_line->setMinimumSize(QSize(25, 0));
        in_hot_line->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_6->addWidget(in_hot_line);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        in_protein_line = new QLineEdit(layoutWidget);
        in_protein_line->setObjectName("in_protein_line");

        horizontalLayout->addWidget(in_protein_line);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        in_carbo_line = new QLineEdit(layoutWidget);
        in_carbo_line->setObjectName("in_carbo_line");

        horizontalLayout_2->addWidget(in_carbo_line);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        in_fat_line = new QLineEdit(layoutWidget);
        in_fat_line->setObjectName("in_fat_line");

        horizontalLayout_3->addWidget(in_fat_line);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        in_price_line = new QLineEdit(layoutWidget);
        in_price_line->setObjectName("in_price_line");

        horizontalLayout_4->addWidget(in_price_line);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(30, 0));
        label_5->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_5->addWidget(label_5);

        canteen_box = new QComboBox(layoutWidget);
        canteen_box->addItem(QString());
        canteen_box->addItem(QString());
        canteen_box->addItem(QString());
        canteen_box->addItem(QString());
        canteen_box->addItem(QString());
        canteen_box->addItem(QString());
        canteen_box->addItem(QString());
        canteen_box->addItem(QString());
        canteen_box->addItem(QString());
        canteen_box->setObjectName("canteen_box");
        canteen_box->setMinimumSize(QSize(90, 27));
        canteen_box->setMaximumSize(QSize(90, 27));
        canteen_box->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(canteen_box);


        verticalLayout->addLayout(horizontalLayout_5);

        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName("checkBox");
        checkBox->setMinimumSize(QSize(0, 25));
        checkBox->setMaximumSize(QSize(16777215, 25));
        checkBox->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(checkBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_7->addWidget(label_7);

        name_line = new QLineEdit(layoutWidget);
        name_line->setObjectName("name_line");

        horizontalLayout_7->addWidget(name_line);


        verticalLayout->addLayout(horizontalLayout_7);

        selectpic_button = new QPushButton(layoutWidget);
        selectpic_button->setObjectName("selectpic_button");
        selectpic_button->setMinimumSize(QSize(0, 25));
        selectpic_button->setMaximumSize(QSize(16777215, 25));
        selectpic_button->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(selectpic_button);


        retranslateUi(Addnew);

        QMetaObject::connectSlotsByName(Addnew);
    } // setupUi

    void retranslateUi(QWidget *Addnew)
    {
        Addnew->setWindowTitle(QCoreApplication::translate("Addnew", "\346\267\273\345\212\240\350\217\234\345\223\201", nullptr));
        ok_button->setText(QCoreApplication::translate("Addnew", "\347\241\256\345\256\232", nullptr));
        cancel_button->setText(QCoreApplication::translate("Addnew", "\345\217\226\346\266\210", nullptr));
        image_label->setText(QString());
        label_6->setText(QCoreApplication::translate("Addnew", "\350\276\243\345\272\246\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("Addnew", "\350\233\213\347\231\275\350\264\250\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Addnew", "\347\242\263\346\260\264\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Addnew", "\350\204\202\350\202\252\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Addnew", "\344\273\267\346\240\274\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Addnew", "\351\243\237\345\240\202\357\274\232", nullptr));
        canteen_box->setItemText(0, QString());
        canteen_box->setItemText(1, QCoreApplication::translate("Addnew", "\345\256\266\345\233\255\351\243\237\345\240\202", nullptr));
        canteen_box->setItemText(2, QCoreApplication::translate("Addnew", "\345\255\246\344\270\200\351\243\237\345\240\202", nullptr));
        canteen_box->setItemText(3, QCoreApplication::translate("Addnew", "\345\206\234\345\233\255\351\243\237\345\240\202", nullptr));
        canteen_box->setItemText(4, QCoreApplication::translate("Addnew", "\345\255\246\344\272\224\351\243\237\345\240\202", nullptr));
        canteen_box->setItemText(5, QCoreApplication::translate("Addnew", "\345\213\272\345\233\255\351\243\237\345\240\202", nullptr));
        canteen_box->setItemText(6, QCoreApplication::translate("Addnew", "\344\275\237\345\233\255\351\243\237\345\240\202", nullptr));
        canteen_box->setItemText(7, QCoreApplication::translate("Addnew", "\347\207\225\345\215\227\351\243\237\345\240\202", nullptr));
        canteen_box->setItemText(8, QCoreApplication::translate("Addnew", "\345\244\226\345\215\226", nullptr));

        checkBox->setText(QCoreApplication::translate("Addnew", "\351\246\231\350\217\234", nullptr));
        label_7->setText(QCoreApplication::translate("Addnew", "\345\220\215\345\255\227\357\274\232", nullptr));
        selectpic_button->setText(QCoreApplication::translate("Addnew", "\351\200\211\346\213\251\345\233\276\347\211\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Addnew: public Ui_Addnew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEW_H
