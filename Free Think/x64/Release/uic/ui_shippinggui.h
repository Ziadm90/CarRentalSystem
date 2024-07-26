/********************************************************************************
** Form generated from reading UI file 'shippinggui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHIPPINGGUI_H
#define UI_SHIPPINGGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shippingguiClass
{
public:
    QWidget *centralWidget;
    QPushButton *savebutton;
    QLineEdit *locationbox;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *shippingguiClass)
    {
        if (shippingguiClass->objectName().isEmpty())
            shippingguiClass->setObjectName("shippingguiClass");
        shippingguiClass->resize(600, 400);
        centralWidget = new QWidget(shippingguiClass);
        centralWidget->setObjectName("centralWidget");
        savebutton = new QPushButton(centralWidget);
        savebutton->setObjectName("savebutton");
        savebutton->setGeometry(QRect(340, 190, 101, 24));
        locationbox = new QLineEdit(centralWidget);
        locationbox->setObjectName("locationbox");
        locationbox->setGeometry(QRect(120, 100, 113, 21));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 100, 49, 16));
        shippingguiClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(shippingguiClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        shippingguiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(shippingguiClass);
        mainToolBar->setObjectName("mainToolBar");
        shippingguiClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(shippingguiClass);
        statusBar->setObjectName("statusBar");
        shippingguiClass->setStatusBar(statusBar);

        retranslateUi(shippingguiClass);

        QMetaObject::connectSlotsByName(shippingguiClass);
    } // setupUi

    void retranslateUi(QMainWindow *shippingguiClass)
    {
        shippingguiClass->setWindowTitle(QCoreApplication::translate("shippingguiClass", "shippinggui", nullptr));
        savebutton->setText(QCoreApplication::translate("shippingguiClass", "Save Location", nullptr));
        label->setText(QCoreApplication::translate("shippingguiClass", "Location", nullptr));
    } // retranslateUi

};

namespace Ui {
    class shippingguiClass: public Ui_shippingguiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHIPPINGGUI_H
