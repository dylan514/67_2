/********************************************************************************
** Form generated from reading UI file 'openpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENPAGE_H
#define UI_OPENPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenPage
{
public:
    QLabel *label;
    QPushButton *intro_button;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *begin_button;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *set_button;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *record_button;

    void setupUi(QWidget *OpenPage)
    {
        if (OpenPage->objectName().isEmpty())
            OpenPage->setObjectName("OpenPage");
        OpenPage->resize(1050, 725);
        OpenPage->setMinimumSize(QSize(1050, 725));
        OpenPage->setMaximumSize(QSize(1050, 725));
        OpenPage->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label = new QLabel(OpenPage);
        label->setObjectName("label");
        label->setGeometry(QRect(420, 240, 221, 61));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(50);
        sizePolicy.setVerticalStretch(50);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 0));
        label->setBaseSize(QSize(0, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267")});
        font.setPointSize(40);
        label->setFont(font);
        intro_button = new QPushButton(OpenPage);
        intro_button->setObjectName("intro_button");
        intro_button->setGeometry(QRect(890, 60, 80, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        intro_button->setFont(font1);
        intro_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        widget = new QWidget(OpenPage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(190, 360, 664, 104));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(30);
        horizontalLayout->setObjectName("horizontalLayout");
        begin_button = new QPushButton(widget);
        begin_button->setObjectName("begin_button");
        begin_button->setMinimumSize(QSize(160, 100));
        begin_button->setMaximumSize(QSize(160, 100));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font2.setPointSize(20);
        begin_button->setFont(font2);
        begin_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout->addWidget(begin_button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalSpacer = new QSpacerItem(8000, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        set_button = new QPushButton(widget);
        set_button->setObjectName("set_button");
        set_button->setMinimumSize(QSize(160, 100));
        set_button->setMaximumSize(QSize(160, 100));
        set_button->setFont(font2);
        set_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout->addWidget(set_button);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        horizontalSpacer_2 = new QSpacerItem(8000, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        record_button = new QPushButton(widget);
        record_button->setObjectName("record_button");
        record_button->setMinimumSize(QSize(160, 100));
        record_button->setMaximumSize(QSize(160, 100));
        record_button->setFont(font2);
        record_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout->addWidget(record_button);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(OpenPage);

        QMetaObject::connectSlotsByName(OpenPage);
    } // setupUi

    void retranslateUi(QWidget *OpenPage)
    {
        OpenPage->setWindowTitle(QCoreApplication::translate("OpenPage", "\351\243\237\345\240\202\346\250\241\346\213\237\345\231\250  Ver 0", nullptr));
        label->setText(QCoreApplication::translate("OpenPage", "\351\232\217\346\234\272\351\243\237\345\240\202", nullptr));
        intro_button->setText(QCoreApplication::translate("OpenPage", "\345\212\237\350\203\275\344\273\213\347\273\215", nullptr));
        begin_button->setText(QCoreApplication::translate("OpenPage", "\345\274\200\345\247\213", nullptr));
        set_button->setText(QCoreApplication::translate("OpenPage", "\350\256\276\347\275\256", nullptr));
        record_button->setText(QCoreApplication::translate("OpenPage", "\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenPage: public Ui_OpenPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENPAGE_H
