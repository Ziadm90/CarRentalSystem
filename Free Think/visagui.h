#pragma once
#include<iostream>
using namespace std;
#include<fstream>
#include<qmessagebox.h>
#include<ui_visagui.h>
class Visa
{
public:
	void visadata(string digits, string nameoncard, string cvv, string expdate) {
		bool cass=false;

		if (digits.length() != 16) {
			QMessageBox::information(nullptr, "error!", "Must be 16-digit number!", QMessageBox::Ok);
			cass = true;
		}
		
		if (nameoncard == "") {
			QMessageBox::information(nullptr, "error!", "Must Enter Valid name", QMessageBox::Ok);
			cass = true;
		}
		
		if (cvv.length() != 3)
		{
			QMessageBox::information(nullptr, "error!", "Must enter 3-digit number", QMessageBox::Ok);
			cass = true;
		}

		

		
		if (cass==false)
		{

			fstream myfile("Visa Data.txt", ios::app);

			myfile << nameoncard << "," << digits << "," << cvv << "," << expdate << endl;



			QMessageBox::information(nullptr, "Done!", "Data Saved!", QMessageBox::Ok);


			myfile.close();

		}





		


	}

};


#include <QMainWindow>
#include "ui_visagui.h"

class visagui : public QMainWindow
{
	Q_OBJECT

public:
	visagui(QWidget *parent = nullptr);
	~visagui();
private slots:
	void on_savedata_clicked();
private:
	Ui::visaguiClass ui;
};
