/********************************************************************************
** Form generated from reading UI file 'searchgui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHGUI_H
#define UI_SEARCHGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searchguiClass
{
public:
    QWidget *centralWidget;
    QPushButton *searchbutton;
    QLineEdit *searchbox;
    QListWidget *listWidget;
    QLabel *resultbox;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *searchguiClass)
    {
        if (searchguiClass->objectName().isEmpty())
            searchguiClass->setObjectName("searchguiClass");
        searchguiClass->resize(600, 400);
        centralWidget = new QWidget(searchguiClass);
        centralWidget->setObjectName("centralWidget");
        searchbutton = new QPushButton(centralWidget);
        searchbutton->setObjectName("searchbutton");
        searchbutton->setGeometry(QRect(340, 190, 75, 24));
        searchbox = new QLineEdit(centralWidget);
        searchbox->setObjectName("searchbox");
        searchbox->setGeometry(QRect(120, 50, 113, 21));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 120, 256, 192));
        resultbox = new QLabel(centralWidget);
        resultbox->setObjectName("resultbox");
        resultbox->setGeometry(QRect(360, 70, 151, 16));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 50, 49, 16));
        searchguiClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(searchguiClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        searchguiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(searchguiClass);
        mainToolBar->setObjectName("mainToolBar");
        searchguiClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(searchguiClass);
        statusBar->setObjectName("statusBar");
        searchguiClass->setStatusBar(statusBar);

        retranslateUi(searchguiClass);

        QMetaObject::connectSlotsByName(searchguiClass);
    } // setupUi

    void retranslateUi(QMainWindow *searchguiClass)
    {
        searchguiClass->setWindowTitle(QCoreApplication::translate("searchguiClass", "searchgui", nullptr));
        searchbutton->setText(QCoreApplication::translate("searchguiClass", "search", nullptr));
        resultbox->setText(QString());
        label->setText(QCoreApplication::translate("searchguiClass", "Car", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searchguiClass: public Ui_searchguiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHGUI_H
