/********************************************************************************
** Form generated from reading UI file 'newmeal.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMEAL_H
#define UI_NEWMEAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_Newmeal
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Newmeal)
    {
        if (Newmeal->objectName().isEmpty())
            Newmeal->setObjectName("Newmeal");
        Newmeal->resize(400, 300);
        buttonBox = new QDialogButtonBox(Newmeal);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Newmeal);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Newmeal, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Newmeal, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Newmeal);
    } // setupUi

    void retranslateUi(QDialog *Newmeal)
    {
        Newmeal->setWindowTitle(QCoreApplication::translate("Newmeal", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Newmeal: public Ui_Newmeal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMEAL_H
