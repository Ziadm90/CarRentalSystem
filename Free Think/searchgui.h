#pragma once

#include <QMainWindow>
#include "ui_searchgui.h"
#include<iostream>
#include<fstream>
#include<sstream>
#include"signingui.h"
#include"qmessagebox.h"
using namespace std;
class Search {
public:
    string model, price ,list1;
    string car_name;
    string findCar(string car_name) {
        

        ifstream file("models cars(random).csv");
        string line;

        while (getline(file, line)) {
            stringstream ss(line);
            

            getline(ss, model, ',');
            getline(ss, price, ',');

            if (model == car_name) {
                list1 = model + " is available for " + price;
                QMessageBox::information(nullptr, "Done!", QString::fromStdString(list1), QMessageBox::Ok);
                
                return list1;
                break;
                

            }
            
            
        }
        QMessageBox::information(nullptr, "error!", +" Not Found!", QMessageBox::Ok);

         }

    
};
class searchgui : public QMainWindow
{
	Q_OBJECT

public:
	searchgui(QWidget *parent = nullptr);
	~searchgui();
private slots:
    void on_searchbutton_clicked();
    void on_listWidget_itemDoubleClicked(QListWidgetItem* item);
private:
	Ui::searchguiClass ui;
};
