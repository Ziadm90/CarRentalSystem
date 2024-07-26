#pragma once
#include <string>
#include <cmath>
#include <fstream>
#include<sstream>
#include<vector>
#include<iostream>
#include"signingui.h"
using namespace std;
class SortedList {

public:
    string result;
    string model,model1;
    string ratee;
    string price;
    string choose;
    string Y_OR_N;
    

    void setmodel(string car_name) {
        
        
        
        fstream file("models cars(random).csv"); 
        string line,line1;

        while (getline(file, line)) { 
            stringstream ss(line);
           

            getline(ss, model, ' '); 
            getline(ss, model1, ',');
            getline(ss, price, ',');
            
            if (model == car_name) { 
                
                result = result+car_name + " " + model1 + " : " + price+"\n";
                
                
            }
        }

    }

    void setrate(string rate) {
       
        ;
        fstream file("models cars(random).csv"); 
        string line;

        while (getline(file, line)) { 
            stringstream ss(line);
           

            getline(ss, model, ' '); 
            getline(ss, model1, ',');
            getline(ss, price, ',');
            getline(ss, ratee, ',');
            if (rate == ratee) { 
                result =  result+model + " " + model1 + " : " + price + " is for " + ratee + "stars"+"\n";
            }
        }
    }

    

    void setprice(string cost) {
        
        

        ifstream file("models cars(random).csv");
        string line;

        while (getline(file, line)) {
            stringstream ss(line);
            string model, price;

            getline(ss, model, ',');
            getline(ss, price, ',');

            if (price == cost) {
                cout << price << " " << model << endl;
                result = result+price + " " + model + "\n";

            }
        }
    }

    
};
#include <QMainWindow>
#include "ui_sortedbygui.h"

class sortedbygui : public QMainWindow
{
	Q_OBJECT

public:
	sortedbygui(QWidget *parent = nullptr);
	~sortedbygui();
private slots:
    void on_resultsbutton_clicked();

    void on_ratecheckbox_stateChanged();
    void on_pricecheckbox_stateChanged();
    void on_modelcheckbox_stateChanged();

    void on_rateselect_valueChanged();
    void on_listWidget_itemDoubleClicked(QListWidgetItem* item);

private:
	Ui::sortedbyguiClass ui;
};
