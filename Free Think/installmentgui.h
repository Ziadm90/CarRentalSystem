#pragma once
#include<iostream>
#include<fstream>
#include<sstream>
#include"shippinggui.h"
//#include"insurancegui.h"
using namespace std;
class Installment
{

    
protected:
    string carr;
public:
    string Permission, insurancee;
    int ins_price;
    string c;
    int time;
    bool Y_OR_N;
    double advance_payment;
    double installment;
    string advancepay, istallmentpay;
    
    void bigorsmall(string price_str,string car)
    {
        carr = car;
        
        

        fstream file("models cars(random).csv"); 
        string line;

        while (getline(file, line))
        {   
            stringstream ss(line);
            string  model;

            getline(ss, model, ',');
            getline(ss, price_str, ',');

            if (model == car)
            {
                if (stoi(price_str) >= 1800000)
                {
                    bigprice(stoi(price_str));
                }
                else
                {
                    smallprice(stoi(price_str));
                }
            }
        }
    }

    void bigprice(int x)
    {
        
        
        if (Y_OR_N == true)
        {
            advance_payment = (x * 0.03 * time) / 2;
            installment = ((x * 0.03) / 2);
            advancepay = "The Total price is: " + to_string(advance_payment*2)+"\n"+"advance payment is"+to_string(advance_payment)+"\n"+"The Installmentt per month is : " + to_string(installment); ;
            
            
        }
        else if (Y_OR_N == false)
        {
            installment = ((x * 0.03));
            advancepay = "The Total price is: " + to_string(installment*time) + "\n" + "installment per month payment is" + to_string(installment);
            
        }


    }
    void smallprice(int x)
    {
        
        cout << "how long would you take the car?(in month) ";
        cin >> time;
        installment = ((x * 0.025));
        advancepay = "The Total price is: " + to_string(installment*time) + "\n" + "installment per month is" + to_string(installment);
        
    }
    void permission()
    {

        cout << "Would you like to pay for insurance? " << endl;
        cin >> Permission;
        if (Permission == "yes" || Permission == "y" || Permission == "Yes" || Permission == "Y")
        {
            cin.ignore();
            
            fstream file("models cars(random).csv"); 
            string line;
            while (getline(file, line))
            {   
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
        if(Y_OR_N==true){
            double l= ins_price + (advance_payment * 2);
            insurancee = to_string(l);
        }
        else {
            double l = ins_price + (installment * time);
            insurancee = to_string(l);
        }
        
        
        cout << "The insurance is: " << ins_price;
    }
    
};
#include <QMainWindow>
#include "ui_installmentgui.h"

class installmentgui : public QMainWindow
{
	Q_OBJECT

public:
	installmentgui(QWidget *parent = nullptr);
	~installmentgui();
private slots:
    void on_priceselect_valueChanged(int value);
    void on_gobutton_clicked();
private:
	Ui::installmentguiClass ui;
};
