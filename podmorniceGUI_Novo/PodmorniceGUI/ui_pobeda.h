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
    QLabel *label_2;

    void setupUi(QDialog *Pobeda)
    {
        if (Pobeda->objectName().isEmpty())
            Pobeda->setObjectName(QString::fromUtf8("Pobeda"));
        Pobeda->resize(416, 318);
        label = new QLabel(Pobeda);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 80, 191, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Tibetan Machine Uni"));
        font.setPointSize(15);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 218, 218);"));
        label_2 = new QLabel(Pobeda);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 150, 321, 51));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 218, 218);"));

        retranslateUi(Pobeda);

        QMetaObject::connectSlotsByName(Pobeda);
    } // setupUi

    void retranslateUi(QDialog *Pobeda)
    {
        Pobeda->setWindowTitle(QString());
        label->setText(QApplication::translate("Pobeda", "\304\214ESTITAMO!!!", nullptr));
        label_2->setText(QApplication::translate("Pobeda", "Sve podmornice su potopljene!!! ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pobeda: public Ui_Pobeda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POBEDA_H
