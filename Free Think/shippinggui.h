#pragma once

#include <QMainWindow>
#include "ui_shippinggui.h"
#include <iostream>
#include<fstream>
#include<qmessagebox.h>
//#include"reviewgui.h"
using namespace std;
class shippingclass
{


public:
	void setlocation(string location) {
		fstream locationfile("Location.txt", ios::app);
		QMessageBox::information(nullptr, "Saved!", "Done!", QMessageBox::Ok);
		locationfile << location << endl;
	}



};
class shippinggui : public QMainWindow
{
	Q_OBJECT

public:
	shippinggui(QWidget *parent = nullptr);
	~shippinggui();
private slots:
	void on_savebutton_clicked();

private:
	Ui::shippingguiClass ui;
};
