#pragma once
#include<iostream>
#include<fstream>
#include<sstream>
#include"qmessagebox.h"
using namespace std;

class addremovecars
{
public:
    
    void addcar(string car, string price)
    {
        
        cout << "Enter model: ";
        cin >> car;
        cout << "Enter price: ";
        cin >> price;

        fstream file("models cars(random).csv", ios::app);

        

        
        if (car=="")
        {
            QMessageBox::information(nullptr, "Error!", "Enter valid car model", QMessageBox::Ok);
        }
        else if(price=="")
        {
            QMessageBox::information(nullptr, "Error!", "Enter valid price", QMessageBox::Ok);
        }
        else {

            cout << "Car added successfully!" << endl;
            QMessageBox::information(nullptr, "Done!", QString::fromStdString(car) + " Car added successfully for " + QString::fromStdString(price) + "\nThank You!", QMessageBox::Ok);
            file << car << "," << price << "," << endl;
            file.close();
        }
    }


    void removecar(string car) {
        string model;
        string price, line;
        cout << "Enter model: ";
        cin >> car;

        ifstream fileread("models cars(random).csv");
        ofstream filewrite("temp.csv");

        bool carFound = false;
        
        while (std::getline(fileread, line))
        {
            stringstream ss(line);
            getline(ss, model, ',');
            if (model == car)
            {
                QMessageBox::information(nullptr, "Done!", QString::fromStdString(car) + " Car removed successfully\nThank You!", QMessageBox::Ok);
                cout << "Car removed successfully!" << endl;
                carFound = true;
                continue;
            }
            filewrite << line << std::endl;
        }

        fileread.close();
        filewrite.close();

        if (carFound)
        {
            remove("models cars(random).csv");
            rename("temp.csv", "models cars(random).csv");
        }
        else if(car==""){
        
            QMessageBox::information(nullptr, "Error!", "Enter valid car model", QMessageBox::Ok);
        }
        else{
            QMessageBox::information(nullptr, "Error!", QString::fromStdString(car) + " Car not found \nplease try again", QMessageBox::Ok);
            cout << "Car not found!" << endl;
            remove("temp.csv");
        }
    }


};

#include <QMainWindow>
#include "ui_addremovecarsgui.h"

class addremovecarsgui : public QMainWindow
{
	Q_OBJECT

public:
	addremovecarsgui(QWidget *parent = nullptr);
	~addremovecarsgui();
private slots:
	void on_addbutton_clicked();
	void on_removebutton_clicked();
	void on_gobutton_clicked();
private:
	Ui::addremovecarsguiClass ui;
};
