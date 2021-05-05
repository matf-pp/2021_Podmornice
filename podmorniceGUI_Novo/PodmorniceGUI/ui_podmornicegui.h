/********************************************************************************
** Form generated from reading UI file 'podmornicegui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PODMORNICEGUI_H
#define UI_PODMORNICEGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PodmorniceGUI
{
public:
    QWidget *centralWidget;
    QPushButton *postavi;
    QLabel *label;
    QLabel *label_2;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *PodmorniceGUI)
    {
        if (PodmorniceGUI->objectName().isEmpty())
            PodmorniceGUI->setObjectName(QString::fromUtf8("PodmorniceGUI"));
        PodmorniceGUI->resize(459, 337);
        PodmorniceGUI->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        centralWidget = new QWidget(PodmorniceGUI);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        postavi = new QPushButton(centralWidget);
        postavi->setObjectName(QString::fromUtf8("postavi"));
        postavi->setGeometry(QRect(170, 260, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Tibetan Machine Uni"));
        postavi->setFont(font);
        postavi->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 218, 218);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 431, 61));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 218, 218, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(233, 235, 231, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(105, 107, 103, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(141, 143, 138, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush7(QColor(211, 215, 207, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        label->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Tibetan Machine Uni"));
        font1.setPointSize(17);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);\n"
"background-color: rgb(255, 218, 218);\n"
""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 170, 361, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Tibetan Machine Uni"));
        font2.setPointSize(13);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 218, 218);"));
        PodmorniceGUI->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(PodmorniceGUI);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        PodmorniceGUI->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(PodmorniceGUI);

        QMetaObject::connectSlotsByName(PodmorniceGUI);
    } // setupUi

    void retranslateUi(QMainWindow *PodmorniceGUI)
    {
        PodmorniceGUI->setWindowTitle(QString());
        postavi->setText(QApplication::translate("PodmorniceGUI", "Zapo\304\215ni igru!", nullptr));
        label->setText(QApplication::translate("PodmorniceGUI", "Dobrodo\305\241li u  potapanje podmornica!", nullptr));
        label_2->setText(QApplication::translate("PodmorniceGUI", "Pritisnite dugme kako biste zapo\304\215eli igru:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PodmorniceGUI: public Ui_PodmorniceGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PODMORNICEGUI_H
