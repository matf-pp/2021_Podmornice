/********************************************************************************
** Form generated from reading UI file 'gubitak.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUBITAK_H
#define UI_GUBITAK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Gubitak
{
public:
    QLabel *label;

    void setupUi(QDialog *Gubitak)
    {
        if (Gubitak->objectName().isEmpty())
            Gubitak->setObjectName(QString::fromUtf8("Gubitak"));
        Gubitak->resize(400, 300);
        Gubitak->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 0, 0);"));
        label = new QLabel(Gubitak);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 70, 211, 151));
        QFont font;
        font.setFamily(QString::fromUtf8("Tibetan Machine Uni"));
        font.setPointSize(23);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 0, 0);"));

        retranslateUi(Gubitak);

        QMetaObject::connectSlotsByName(Gubitak);
    } // setupUi

    void retranslateUi(QDialog *Gubitak)
    {
        Gubitak->setWindowTitle(QString());
        label->setText(QApplication::translate("Gubitak", "Izgubili ste!!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gubitak: public Ui_Gubitak {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUBITAK_H
