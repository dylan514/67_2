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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IntroPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QWidget *IntroPage)
    {
        if (IntroPage->objectName().isEmpty())
            IntroPage->setObjectName("IntroPage");
        IntroPage->resize(1050, 725);
        IntroPage->setMinimumSize(QSize(1050, 725));
        IntroPage->setMaximumSize(QSize(1050, 725));
        verticalLayout_2 = new QVBoxLayout(IntroPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        textBrowser = new QTextBrowser(IntroPage);
        textBrowser->setObjectName("textBrowser");

        verticalLayout->addWidget(textBrowser);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(IntroPage);
        pushButton->setObjectName("pushButton");
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_2->addWidget(pushButton);


        retranslateUi(IntroPage);

        QMetaObject::connectSlotsByName(IntroPage);
    } // setupUi

    void retranslateUi(QWidget *IntroPage)
    {
        IntroPage->setWindowTitle(QCoreApplication::translate("IntroPage", "\344\273\213\347\273\215", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("IntroPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700; font-style:italic;\">\344\275\277\347\224\250\350\257\264\346\230\216&amp;&amp;\345\212\237\350\203\275\344\273\213\347\273\215\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">       </span><span style=\" font-siz"
                        "e:16pt;\"> \346\234\254\347\250\213\345\272\217\346\227\250\345\234\250\345\270\256\345\212\251\345\214\227\345\244\247\345\255\246\345\255\220\350\247\243\345\206\263\345\220\203\351\245\255\351\227\256\351\242\230\357\274\214\345\260\206\342\200\234\350\277\231\351\241\277\345\220\203\344\273\200\344\271\210\342\200\235\347\232\204\351\227\256\351\242\230\346\211\274\346\235\200\345\234\250\346\221\207\347\257\256\351\207\214\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">        \350\277\220\350\241\214\346\234\254\347\250\213\345\272\217\357\274\214\350\277\233\345\205\245\344\270\273\350\217\234\345\215\225\357\274\214\347\202\271\345\207\273\345\217\263\344\276\247\342\200\234\350\256\276\347\275\256\342\200\235\346\214\211\351\222\256\357\274\214\345\274\271\345\207\272\346\226\260\347\252\227\345\217\243\357\274\214\347\202\271\345\207\273\342\200\234\346\267\273\345\212"
                        "\240\346\226\260\350\217\234\345\223\201\342\200\235\346\214\211\351\222\256\357\274\214\345\215\263\345\217\257\345\256\236\347\216\260\347\224\250\346\210\267\350\207\252\344\270\273\346\267\273\345\212\240\350\217\234\345\223\201\343\200\202\351\200\232\350\277\207\345\234\250\347\233\270\345\272\224\347\232\204\350\241\250\346\240\274\351\224\256\345\205\245\351\243\237\347\211\251\347\232\204\345\220\204\347\247\215\350\220\245\345\205\273\346\210\220\345\210\206\345\222\214\351\243\237\347\211\251\345\220\215\347\247\260\343\200\201\350\275\275\345\205\245\350\217\234\345\223\201\345\233\276\347\211\207\345\220\216\357\274\214\347\202\271\345\207\273\347\241\256\345\256\232\357\274\214\345\215\263\345\217\257\346\267\273\345\212\240\347\224\250\346\210\267\350\207\252\345\267\261\345\226\234\346\254\242\347\232\204\350\217\234\345\223\201\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-"
                        "size:16pt;\">        \347\202\271\345\207\273\345\217\263\344\276\247\347\232\204\345\274\200\345\247\213\346\214\211\351\222\256\357\274\214\347\202\271\345\207\273\345\267\246\344\270\213\350\247\222\347\232\204\342\200\235\350\256\276\347\275\256\346\210\221\347\232\204\344\275\215\347\275\256\342\200\234\357\274\214\345\215\263\345\217\257\350\277\233\345\205\245\345\256\232\344\275\215\351\241\265\351\235\242\343\200\202\351\200\211\346\213\251\345\256\214\350\207\252\345\267\261\347\232\204\344\275\215\347\275\256\344\271\213\345\220\216\357\274\214\351\200\232\350\277\207\346\213\226\345\212\250slider\346\210\226\350\200\205\351\224\256\345\205\245\344\277\241\346\201\257\357\274\214\345\217\257\344\273\245\350\260\203\350\212\202\350\207\252\345\267\261\347\232\204\345\226\234\345\245\275\357\274\214\347\202\271\345\207\273\342\200\235\346\250\241\346\213\237\342\200\234\357\274\214\345\210\231\345\274\271\345\207\272\346\216\250\350\215\220\350\217\234\345\223\201\347\252\227\345\217\243\357\274\214\350"
                        "\277\231\344\270\252\347\252\227\345\217\243\347\232\204\345\214\205\346\213\254\351\243\237\347\211\251\347\232\204\345\220\204\347\261\273\350\220\245\345\205\273\344\277\241\346\201\257\344\273\245\345\217\212\351\243\237\347\211\251\347\232\204\344\275\215\347\275\256\357\274\214\345\220\214\346\227\266\346\210\221\344\273\254\344\270\272\344\272\206\344\275\277\345\205\266\346\233\264\345\212\240\346\234\211\350\266\243\357\274\214\351\200\232\350\277\207\351\232\217\346\234\272\345\207\275\346\225\260\345\242\236\345\212\240\344\272\206\344\270\200\347\202\271\344\270\215\347\241\256\345\256\232\346\200\247\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">        \345\220\214\346\227\266\357\274\214\345\234\250\346\255\244\351\241\265\351\235\242\357\274\214\344\270\272\344\272\206\350\212\202\347\272\246\346\227\266\351\227\264\357\274\214\346\210\221\344\273\254\350\277\230"
                        "\346\267\273\345\212\240\344\272\206\342\200\235\351\242\204\345\255\230\350\256\276\347\275\256\342\200\234\347\232\204\345\212\237\350\203\275\357\274\214\351\200\232\350\277\207\346\213\226\345\212\250slider\346\235\245\346\224\271\345\217\230\345\220\204\347\261\273\351\207\215\350\246\201\346\200\247\346\225\260\345\200\274\357\274\214\347\204\266\345\220\216\351\224\256\345\205\245\346\250\241\345\274\217\347\232\204\345\220\215\347\247\260\357\274\214\350\276\276\345\210\260\351\242\204\345\255\230\345\217\202\346\225\260\347\232\204\345\212\237\350\203\275\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700; font-style:italic;\">\345\210\266\344\275\234\346\226\271\357\274\232\346\234\252\345\220\215\346\271\226\344\272\272\351\230\237\357\274\210LAKERS\344\274\240\345\245\20724\345\217\267\357\274\214\345\205\260\345\267\236shark\345\245\245\345\260\274\345\260"
                        "\224\357\274\214\346\227\240\346\225\214\346\211\243\347\257\256\347\216\213\345\206\205\347\211\271\347\275\227\345\256\276\351\200\212\357\274\211</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700; font-style:italic;\">\347\211\271\345\210\253\351\270\243\350\260\242\357\274\232JM\346\261\211\345\214\226\347\273\204</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:700; font-style:italic;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("IntroPage", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IntroPage: public Ui_IntroPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTROPAGE_H
