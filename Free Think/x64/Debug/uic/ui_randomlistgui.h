/********************************************************************************
** Form generated from reading UI file 'randomlistgui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANDOMLISTGUI_H
#define UI_RANDOMLISTGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_randomlistguiClass
{
public:
    QWidget *centralWidget;
    QListWidget *randomlist;
    QPushButton *searchmodelbutton;
    QPushButton *filterbutton;
    QPushButton *searchpricebutton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *randomlistguiClass)
    {
        if (randomlistguiClass->objectName().isEmpty())
            randomlistguiClass->setObjectName("randomlistguiClass");
        randomlistguiClass->resize(705, 559);
        centralWidget = new QWidget(randomlistguiClass);
        centralWidget->setObjectName("centralWidget");
        randomlist = new QListWidget(centralWidget);
        randomlist->setObjectName("randomlist");
        randomlist->setGeometry(QRect(5, 1, 701, 321));
        randomlist->setMaximumSize(QSize(701, 321));
        searchmodelbutton = new QPushButton(centralWidget);
        searchmodelbutton->setObjectName("searchmodelbutton");
        searchmodelbutton->setGeometry(QRect(40, 410, 111, 24));
        filterbutton = new QPushButton(centralWidget);
        filterbutton->setObjectName("filterbutton");
        filterbutton->setGeometry(QRect(480, 410, 75, 24));
        searchpricebutton = new QPushButton(centralWidget);
        searchpricebutton->setObjectName("searchpricebutton");
        searchpricebutton->setGeometry(QRect(250, 410, 131, 24));
        randomlistguiClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(randomlistguiClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 705, 22));
        randomlistguiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(randomlistguiClass);
        mainToolBar->setObjectName("mainToolBar");
        randomlistguiClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(randomlistguiClass);
        statusBar->setObjectName("statusBar");
        randomlistguiClass->setStatusBar(statusBar);

        retranslateUi(randomlistguiClass);

        QMetaObject::connectSlotsByName(randomlistguiClass);
    } // setupUi

    void retranslateUi(QMainWindow *randomlistguiClass)
    {
        randomlistguiClass->setWindowTitle(QCoreApplication::translate("randomlistguiClass", "randomlistgui", nullptr));
        searchmodelbutton->setText(QCoreApplication::translate("randomlistguiClass", "Search By Model", nullptr));
        filterbutton->setText(QCoreApplication::translate("randomlistguiClass", "Filter", nullptr));
        searchpricebutton->setText(QCoreApplication::translate("randomlistguiClass", "Search By Price", nullptr));
    } // retranslateUi

};

namespace Ui {
    class randomlistguiClass: public Ui_randomlistguiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDOMLISTGUI_H
