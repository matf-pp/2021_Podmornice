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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PodmorniceGUI
{
public:
    QWidget *centralWidget;
    QPushButton *postavi;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PodmorniceGUI)
    {
        if (PodmorniceGUI->objectName().isEmpty())
            PodmorniceGUI->setObjectName(QString::fromUtf8("PodmorniceGUI"));
        PodmorniceGUI->resize(655, 375);
        centralWidget = new QWidget(PodmorniceGUI);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        postavi = new QPushButton(centralWidget);
        postavi->setObjectName(QString::fromUtf8("postavi"));
        postavi->setGeometry(QRect(240, 170, 101, 31));
        PodmorniceGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PodmorniceGUI);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 655, 22));
        PodmorniceGUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PodmorniceGUI);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        PodmorniceGUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PodmorniceGUI);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PodmorniceGUI->setStatusBar(statusBar);

        retranslateUi(PodmorniceGUI);

        QMetaObject::connectSlotsByName(PodmorniceGUI);
    } // setupUi

    void retranslateUi(QMainWindow *PodmorniceGUI)
    {
        PodmorniceGUI->setWindowTitle(QApplication::translate("PodmorniceGUI", "PodmorniceGUI", nullptr));
        postavi->setText(QApplication::translate("PodmorniceGUI", "zapocni", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PodmorniceGUI: public Ui_PodmorniceGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PODMORNICEGUI_H
