/********************************************************************************
** Form generated from reading UI file 'choosenpricegui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSENPRICEGUI_H
#define UI_CHOOSENPRICEGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choosenpriceguiClass
{
public:
    QWidget *centralWidget;
    QPushButton *resultsbutton;
    QLabel *current;
    QSlider *selectprice;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *choosenpriceguiClass)
    {
        if (choosenpriceguiClass->objectName().isEmpty())
            choosenpriceguiClass->setObjectName("choosenpriceguiClass");
        choosenpriceguiClass->resize(883, 400);
        centralWidget = new QWidget(choosenpriceguiClass);
        centralWidget->setObjectName("centralWidget");
        resultsbutton = new QPushButton(centralWidget);
        resultsbutton->setObjectName("resultsbutton");
        resultsbutton->setGeometry(QRect(280, 240, 81, 24));
        current = new QLabel(centralWidget);
        current->setObjectName("current");
        current->setGeometry(QRect(290, 80, 141, 41));
        selectprice = new QSlider(centralWidget);
        selectprice->setObjectName("selectprice");
        selectprice->setGeometry(QRect(150, 50, 160, 18));
        selectprice->setOrientation(Qt::Horizontal);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 140, 256, 192));
        choosenpriceguiClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(choosenpriceguiClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 883, 22));
        choosenpriceguiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(choosenpriceguiClass);
        mainToolBar->setObjectName("mainToolBar");
        choosenpriceguiClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(choosenpriceguiClass);
        statusBar->setObjectName("statusBar");
        choosenpriceguiClass->setStatusBar(statusBar);

        retranslateUi(choosenpriceguiClass);

        QMetaObject::connectSlotsByName(choosenpriceguiClass);
    } // setupUi

    void retranslateUi(QMainWindow *choosenpriceguiClass)
    {
        choosenpriceguiClass->setWindowTitle(QCoreApplication::translate("choosenpriceguiClass", "choosenpricegui", nullptr));
        resultsbutton->setText(QCoreApplication::translate("choosenpriceguiClass", "Show Results", nullptr));
        current->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class choosenpriceguiClass: public Ui_choosenpriceguiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSENPRICEGUI_H
