#include <QMainWindow>
#include "ui_reviewgui.h"
#include<qmessagebox.h>
#include<iostream>
#include<fstream>

using namespace std;
class review {


public:


	void setReview(double stars) {
		ofstream file("Rate.txt", ios::app);
		file << stars << endl;
		QMessageBox::information(nullptr, "Saved", "thanks", QMessageBox::Ok);
	}

};

class reviewgui : public QMainWindow
{
	Q_OBJECT

public:
	reviewgui(QWidget *parent = nullptr);
	~reviewgui();
private slots:
	void on_submitreview_clicked();
	void on_rateslider_valueChanged(int value);



	
private:
	Ui::reviewguiClass ui;
};
