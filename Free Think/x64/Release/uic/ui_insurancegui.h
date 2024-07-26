/********************************************************************************
** Form generated from reading UI file 'insurancegui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSURANCEGUI_H
#define UI_INSURANCEGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_insuranceguiClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *insuranceguiClass)
    {
        if (insuranceguiClass->objectName().isEmpty())
            insuranceguiClass->setObjectName("insuranceguiClass");
        insuranceguiClass->resize(600, 400);
        menuBar = new QMenuBar(insuranceguiClass);
        menuBar->setObjectName("menuBar");
        insuranceguiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(insuranceguiClass);
        mainToolBar->setObjectName("mainToolBar");
        insuranceguiClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(insuranceguiClass);
        centralWidget->setObjectName("centralWidget");
        insuranceguiClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(insuranceguiClass);
        statusBar->setObjectName("statusBar");
        insuranceguiClass->setStatusBar(statusBar);

        retranslateUi(insuranceguiClass);

        QMetaObject::connectSlotsByName(insuranceguiClass);
    } // setupUi

    void retranslateUi(QMainWindow *insuranceguiClass)
    {
        insuranceguiClass->setWindowTitle(QCoreApplication::translate("insuranceguiClass", "insurancegui", nullptr));
    } // retranslateUi

};

namespace Ui {
    class insuranceguiClass: public Ui_insuranceguiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSURANCEGUI_H
