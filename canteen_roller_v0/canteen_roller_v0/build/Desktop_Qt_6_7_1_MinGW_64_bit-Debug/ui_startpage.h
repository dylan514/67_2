/********************************************************************************
** Form generated from reading UI file 'startpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTPAGE_H
#define UI_STARTPAGE_H

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

class Ui_StartPage
{
public:
    QPushButton *home;
    QPushButton *roller;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *premodel_box;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *newmodel_line;
    QPushButton *savemodel_button;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *distance_slider;
    QLineEdit *distance_line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSlider *price_slider;
    QLineEdit *price_line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSlider *protein_slider;
    QLineEdit *protein_line;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSlider *carbo_slider;
    QLineEdit *carbo_line;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSlider *fat_slider;
    QLineEdit *fat_line;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSlider *hot_slider;
    QLineEdit *hot_line;
    QCheckBox *coriander_box;

    void setupUi(QWidget *StartPage)
    {
        if (StartPage->objectName().isEmpty())
            StartPage->setObjectName("StartPage");
        StartPage->resize(1050, 725);
        StartPage->setMinimumSize(QSize(1050, 725));
        StartPage->setMaximumSize(QSize(1050, 725));
        StartPage->setCursor(QCursor(Qt::ArrowCursor));
        home = new QPushButton(StartPage);
        home->setObjectName("home");
        home->setGeometry(QRect(30, 640, 80, 61));
        home->setCursor(QCursor(Qt::PointingHandCursor));
        roller = new QPushButton(StartPage);
        roller->setObjectName("roller");
        roller->setGeometry(QRect(660, 120, 140, 140));
        roller->setMinimumSize(QSize(140, 140));
        roller->setMaximumSize(QSize(140, 140));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(20);
        roller->setFont(font);
        roller->setCursor(QCursor(Qt::PointingHandCursor));
        roller->setStyleSheet(QString::fromUtf8("background-color: #FFC0CB; /* \350\256\276\347\275\256\346\214\211\351\222\256\351\273\230\350\256\244\347\212\266\346\200\201\344\270\213\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\346\265\205\347\272\242\350\211\262 */\n"
"    border-radius: 70px; /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\344\275\277\345\205\266\345\221\210\347\216\260\345\234\206\345\275\242 */"));
        layoutWidget = new QWidget(StartPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(610, 410, 221, 62));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(16);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(4, 0, 4, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(80, 0));
        label_5->setMaximumSize(QSize(80, 16777215));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font1.setPointSize(12);
        label_5->setFont(font1);

        horizontalLayout_5->addWidget(label_5);

        premodel_box = new QComboBox(layoutWidget);
        premodel_box->setObjectName("premodel_box");
        premodel_box->setMinimumSize(QSize(0, 30));
        premodel_box->setMaximumSize(QSize(120, 30));
        premodel_box->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(premodel_box);

        layoutWidget1 = new QWidget(StartPage);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(650, 280, 159, 96));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(4, 4, 4, 4);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font2.setPointSize(10);
        label_6->setFont(font2);

        horizontalLayout_6->addWidget(label_6);

        newmodel_line = new QLineEdit(layoutWidget1);
        newmodel_line->setObjectName("newmodel_line");
        newmodel_line->setMinimumSize(QSize(0, 30));
        newmodel_line->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_6->addWidget(newmodel_line);


        verticalLayout->addLayout(horizontalLayout_6);

        savemodel_button = new QPushButton(layoutWidget1);
        savemodel_button->setObjectName("savemodel_button");
        savemodel_button->setMinimumSize(QSize(60, 40));
        savemodel_button->setMaximumSize(QSize(160, 40));
        savemodel_button->setFont(font1);
        savemodel_button->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(savemodel_button);

        layoutWidget2 = new QWidget(StartPage);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(40, 20, 391, 591));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(30);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(10, -1, 10, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName("label");
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        distance_slider = new QSlider(layoutWidget2);
        distance_slider->setObjectName("distance_slider");
        distance_slider->setMinimumSize(QSize(180, 40));
        distance_slider->setMaximumSize(QSize(180, 40));
        distance_slider->setCursor(QCursor(Qt::PointingHandCursor));
        distance_slider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(distance_slider);

        distance_line = new QLineEdit(layoutWidget2);
        distance_line->setObjectName("distance_line");
        distance_line->setMinimumSize(QSize(35, 30));
        distance_line->setMaximumSize(QSize(35, 30));

        horizontalLayout->addWidget(distance_line);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(30);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(10, -1, 10, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        price_slider = new QSlider(layoutWidget2);
        price_slider->setObjectName("price_slider");
        price_slider->setMinimumSize(QSize(180, 40));
        price_slider->setMaximumSize(QSize(180, 40));
        price_slider->setCursor(QCursor(Qt::PointingHandCursor));
        price_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(price_slider);

        price_line = new QLineEdit(layoutWidget2);
        price_line->setObjectName("price_line");
        price_line->setMinimumSize(QSize(35, 30));
        price_line->setMaximumSize(QSize(35, 30));

        horizontalLayout_2->addWidget(price_line);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(30);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(10, -1, 10, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        protein_slider = new QSlider(layoutWidget2);
        protein_slider->setObjectName("protein_slider");
        protein_slider->setMinimumSize(QSize(180, 40));
        protein_slider->setMaximumSize(QSize(180, 40));
        protein_slider->setCursor(QCursor(Qt::PointingHandCursor));
        protein_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(protein_slider);

        protein_line = new QLineEdit(layoutWidget2);
        protein_line->setObjectName("protein_line");
        protein_line->setMinimumSize(QSize(35, 30));
        protein_line->setMaximumSize(QSize(35, 30));

        horizontalLayout_3->addWidget(protein_line);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(30);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(10, -1, 10, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        horizontalLayout_4->addWidget(label_4);

        carbo_slider = new QSlider(layoutWidget2);
        carbo_slider->setObjectName("carbo_slider");
        carbo_slider->setMinimumSize(QSize(180, 40));
        carbo_slider->setMaximumSize(QSize(180, 40));
        carbo_slider->setCursor(QCursor(Qt::PointingHandCursor));
        carbo_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(carbo_slider);

        carbo_line = new QLineEdit(layoutWidget2);
        carbo_line->setObjectName("carbo_line");
        carbo_line->setMinimumSize(QSize(35, 30));
        carbo_line->setMaximumSize(QSize(35, 30));

        horizontalLayout_4->addWidget(carbo_line);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(30);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(10, -1, 10, 0);
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);

        horizontalLayout_7->addWidget(label_7);

        fat_slider = new QSlider(layoutWidget2);
        fat_slider->setObjectName("fat_slider");
        fat_slider->setMinimumSize(QSize(180, 40));
        fat_slider->setMaximumSize(QSize(180, 40));
        fat_slider->setCursor(QCursor(Qt::PointingHandCursor));
        fat_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(fat_slider);

        fat_line = new QLineEdit(layoutWidget2);
        fat_line->setObjectName("fat_line");
        fat_line->setMinimumSize(QSize(35, 30));
        fat_line->setMaximumSize(QSize(35, 30));

        horizontalLayout_7->addWidget(fat_line);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(30);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(10, -1, 10, 0);
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);

        horizontalLayout_8->addWidget(label_8);

        hot_slider = new QSlider(layoutWidget2);
        hot_slider->setObjectName("hot_slider");
        hot_slider->setMinimumSize(QSize(180, 40));
        hot_slider->setMaximumSize(QSize(180, 40));
        hot_slider->setCursor(QCursor(Qt::PointingHandCursor));
        hot_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(hot_slider);

        hot_line = new QLineEdit(layoutWidget2);
        hot_line->setObjectName("hot_line");
        hot_line->setMinimumSize(QSize(35, 30));
        hot_line->setMaximumSize(QSize(35, 30));

        horizontalLayout_8->addWidget(hot_line);


        verticalLayout_2->addLayout(horizontalLayout_8);

        coriander_box = new QCheckBox(layoutWidget2);
        coriander_box->setObjectName("coriander_box");
        coriander_box->setMinimumSize(QSize(80, 20));
        coriander_box->setMaximumSize(QSize(80, 16777215));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font3.setPointSize(14);
        coriander_box->setFont(font3);
        coriander_box->setCursor(QCursor(Qt::PointingHandCursor));
        coriander_box->setStyleSheet(QString::fromUtf8("QCheckBox::indicator { width: 20px; height: 20px; }"));

        verticalLayout_2->addWidget(coriander_box);


        retranslateUi(StartPage);

        QMetaObject::connectSlotsByName(StartPage);
    } // setupUi

    void retranslateUi(QWidget *StartPage)
    {
        StartPage->setWindowTitle(QCoreApplication::translate("StartPage", "\345\274\200\345\247\213", nullptr));
        home->setText(QCoreApplication::translate("StartPage", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
        roller->setText(QCoreApplication::translate("StartPage", "\346\250\241\346\213\237", nullptr));
        label_5->setText(QCoreApplication::translate("StartPage", "\351\242\204\350\256\276\346\250\241\345\274\217\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("StartPage", "\346\226\260\346\250\241\345\274\217\345\220\215\347\247\260\357\274\232", nullptr));
        savemodel_button->setText(QCoreApplication::translate("StartPage", "\344\277\235\345\255\230\351\242\204\350\256\276", nullptr));
        label->setText(QCoreApplication::translate("StartPage", "\350\267\235\347\246\273\351\207\215\350\246\201\346\200\247\357\274\232", nullptr));
        distance_line->setText(QCoreApplication::translate("StartPage", "0", nullptr));
        label_2->setText(QCoreApplication::translate("StartPage", "\344\273\267\346\240\274\351\207\215\350\246\201\346\200\247\357\274\232", nullptr));
        price_line->setText(QCoreApplication::translate("StartPage", "0", nullptr));
        label_3->setText(QCoreApplication::translate("StartPage", "\350\233\213\347\231\275\350\264\250\351\207\215\350\246\201\346\200\247\357\274\232", nullptr));
        protein_line->setText(QCoreApplication::translate("StartPage", "0", nullptr));
        label_4->setText(QCoreApplication::translate("StartPage", "\347\242\263\346\260\264\351\207\215\350\246\201\346\200\247\357\274\232", nullptr));
        carbo_line->setText(QCoreApplication::translate("StartPage", "0", nullptr));
        label_7->setText(QCoreApplication::translate("StartPage", "\350\204\202\350\202\252\351\207\215\350\246\201\346\200\247\357\274\232", nullptr));
        fat_line->setText(QCoreApplication::translate("StartPage", "0", nullptr));
        label_8->setText(QCoreApplication::translate("StartPage", "\350\276\243\346\244\222\346\216\245\345\217\227\345\272\246\357\274\232", nullptr));
        hot_line->setText(QCoreApplication::translate("StartPage", "0", nullptr));
        coriander_box->setText(QCoreApplication::translate("StartPage", "\351\246\231\350\217\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartPage: public Ui_StartPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTPAGE_H
