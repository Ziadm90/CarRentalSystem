/********************************************************************************
** Form generated from reading UI file 'addremovecarsgui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDREMOVECARSGUI_H
#define UI_ADDREMOVECARSGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addremovecarsguiClass
{
public:
    QWidget *centralWidget;
    QPushButton *gobutton;
    QRadioButton *addbutton;
    QRadioButton *removebutton;
    QLineEdit *carbox;
    QLineEdit *pricebox;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *addremovecarsguiClass)
    {
        if (addremovecarsguiClass->objectName().isEmpty())
            addremovecarsguiClass->setObjectName("addremovecarsguiClass");
        addremovecarsguiClass->resize(600, 400);
        centralWidget = new QWidget(addremovecarsguiClass);
        centralWidget->setObjectName("centralWidget");
        gobutton = new QPushButton(centralWidget);
        gobutton->setObjectName("gobutton");
        gobutton->setGeometry(QRect(230, 260, 75, 24));
        addbutton = new QRadioButton(centralWidget);
        addbutton->setObjectName("addbutton");
        addbutton->setGeometry(QRect(40, 50, 89, 20));
        removebutton = new QRadioButton(centralWidget);
        removebutton->setObjectName("removebutton");
        removebutton->setGeometry(QRect(40, 100, 89, 20));
        carbox = new QLineEdit(centralWidget);
        carbox->setObjectName("carbox");
        carbox->setGeometry(QRect(380, 50, 113, 21));
        pricebox = new QLineEdit(centralWidget);
        pricebox->setObjectName("pricebox");
        pricebox->setGeometry(QRect(380, 110, 113, 21));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 50, 61, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 110, 49, 16));
        addremovecarsguiClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(addremovecarsguiClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        addremovecarsguiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(addremovecarsguiClass);
        mainToolBar->setObjectName("mainToolBar");
        addremovecarsguiClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(addremovecarsguiClass);
        statusBar->setObjectName("statusBar");
        addremovecarsguiClass->setStatusBar(statusBar);

        retranslateUi(addremovecarsguiClass);

        QMetaObject::connectSlotsByName(addremovecarsguiClass);
    } // setupUi

    void retranslateUi(QMainWindow *addremovecarsguiClass)
    {
        addremovecarsguiClass->setWindowTitle(QCoreApplication::translate("addremovecarsguiClass", "addremovecarsgui", nullptr));
        gobutton->setText(QCoreApplication::translate("addremovecarsguiClass", "GO!", nullptr));
        addbutton->setText(QCoreApplication::translate("addremovecarsguiClass", "\331\220Add Car", nullptr));
        removebutton->setText(QCoreApplication::translate("addremovecarsguiClass", "Remove Car", nullptr));
        label->setText(QCoreApplication::translate("addremovecarsguiClass", "Car name", nullptr));
        label_2->setText(QCoreApplication::translate("addremovecarsguiClass", "price", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addremovecarsguiClass: public Ui_addremovecarsguiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDREMOVECARSGUI_H
