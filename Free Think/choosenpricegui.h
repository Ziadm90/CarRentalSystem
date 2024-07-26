#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <QMainWindow>
#include "ui_choosenpricegui.h"
#include<qlistwidget.h>
#include<qlist.h>
#include"signingui.h"
using namespace std;

class chosenprice {



public:
    string line;
    string h;
    string filename;
    
    string hh;
    vector<int> lineNumbers;
    
    
   
    
    
    void readLines(int price ) {
        
        
        switch (price) {
        case 500000:
            lineNumbers = { 2 };
            
            break;
        case 600000:
            lineNumbers = { 2, 5 };
            
            break;
        case 700000:
            lineNumbers = { 2, 5, 8 };
            break;
        case 800000:
            lineNumbers = { 2, 5, 8, 11 };
            break;
        case 900000:
            lineNumbers = { 2, 5, 8, 11, 14 };
            break;
        case 1000000:
            lineNumbers = { 2, 5, 8, 11, 14, 17 };
            break;
        case 1100000:
            lineNumbers = { 2, 5, 8, 11, 14, 17, 20 };
            break;
        case 1200000:
            lineNumbers = { 2, 5, 8, 11, 14, 17, 20, 23 };
            break;
        case 1300000:
            lineNumbers = { 2, 5, 8, 11, 14, 17, 20, 23, 26 };
            break;
        case 1400000:
            lineNumbers = { 2, 5, 8, 11, 14, 17, 20, 23, 26, 29 };
            break;
        case 1500000:
            lineNumbers = { 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32 };
            break;
        case 1600000:
            lineNumbers = { 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35 };
            break;
        case 1700000:
            lineNumbers = { 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38 };
            break;
        case 1800000:
            lineNumbers = { 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41 };
            break;
        case 1900000:
            lineNumbers = { 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44 };
            break;
        case 2000000:
            lineNumbers = { 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47 };
            break;
        case 2500000:
            lineNumbers = { 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47, 50 };
            break;
        case 2900000:
            lineNumbers = { 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47, 50, 53 };
            break;
        case 3200000:
            lineNumbers = { 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47, 50, 53, 56 };
            break;
        case 3600000:
            lineNumbers = { 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47, 50, 53, 56, 59 };
            break;
        case 4000000:
            lineNumbers = { 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47, 50, 53, 56, 59, 62 };
            break;
        case 4800000:
            lineNumbers = { 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47, 50, 53, 56, 59, 62, 65 };
            break;
        default:
            cout << "Invalid price ";
            
        }
        
        ifstream file("Random Cars.txt");
        
        int lineNumber = 1;

        while (getline(file, line)) {
             if (find(lineNumbers.begin(), lineNumbers.end(), lineNumber) != lineNumbers.end()) {


                    
                 hh = hh + line;
                    
                    
                }
             lineNumber = lineNumber + 1;
             

            }
        
            
            
        
            }
            
};





class choosenpricegui : public QMainWindow
{
	Q_OBJECT

public:
	choosenpricegui(QWidget *parent = nullptr);
	~choosenpricegui();
    
private slots:
   

   void on_selectprice_sliderMoved(int position);

   void on_resultsbutton_clicked();
   void on_listWidget_itemDoubleClicked(QListWidgetItem* item);
private:
    Ui::choosenpriceguiClass ui;
	
};
