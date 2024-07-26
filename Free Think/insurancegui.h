#pragma once
#include"installmentgui.h"
#include<iostream>
#include<sstream>
using namespace std;

class Insurance : public Installment
{
private:
    
public:
    string Permission,insurancee;
    int ins_price;
    void permission()
    {
        
        cout << "Would you like to pay for insurance? " << endl;
        cin >> Permission;
        if (Permission == "yes" || Permission == "y" || Permission == "Yes" || Permission == "Y")
        {
            cin.ignore();
            getline(cin, Installment::carr);
            fstream file("models cars(random).csv"); // Open the CSV file
            string line;
            while (getline(file, line))
            {   // Read each line of the file
                stringstream ss(line);
                string  model, price_str;
                getline(ss, model, ',');
                getline(ss, price_str, ',');
                if (model == carr)
                {
                    insurancePrice(stoi(price_str));
                }
            }
        }
    }
    void insurancePrice(int x)
    {
        ins_price = x * 0.04;
        insurancee = to_string(ins_price + (Installment::advance_payment * 2));
        cout << "The insurance is: " << ins_price;
    }
};
#include <QMainWindow>
#include "ui_insurancegui.h"

class insurancegui : public QMainWindow
{
	Q_OBJECT

public:
	insurancegui(QWidget *parent = nullptr);
	~insurancegui();

private:
	Ui::insuranceguiClass ui;
};
