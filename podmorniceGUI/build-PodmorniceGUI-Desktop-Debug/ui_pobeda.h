/********************************************************************************
** Form generated from reading UI file 'pobeda.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POBEDA_H
#define UI_POBEDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Pobeda
{
public:

    void setupUi(QDialog *Pobeda)
    {
        if (Pobeda->objectName().isEmpty())
            Pobeda->setObjectName(QString::fromUtf8("Pobeda"));
        Pobeda->resize(648, 410);

        retranslateUi(Pobeda);

        QMetaObject::connectSlotsByName(Pobeda);
    } // setupUi

    void retranslateUi(QDialog *Pobeda)
    {
        Pobeda->setWindowTitle(QApplication::translate("Pobeda", "Pobeda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pobeda: public Ui_Pobeda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POBEDA_H
