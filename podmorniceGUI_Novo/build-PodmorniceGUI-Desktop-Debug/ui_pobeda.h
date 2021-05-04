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
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Pobeda
{
public:
    QLabel *label;

    void setupUi(QDialog *Pobeda)
    {
        if (Pobeda->objectName().isEmpty())
            Pobeda->setObjectName(QString::fromUtf8("Pobeda"));
        Pobeda->resize(600, 700);
        label = new QLabel(Pobeda);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 600, 700));

        retranslateUi(Pobeda);

        QMetaObject::connectSlotsByName(Pobeda);
    } // setupUi

    void retranslateUi(QDialog *Pobeda)
    {
        Pobeda->setWindowTitle(QApplication::translate("Pobeda", "Pobeda", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Pobeda: public Ui_Pobeda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POBEDA_H
