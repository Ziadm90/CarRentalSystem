#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <random>
#include"signingui.h"
#include"sortedbygui.h"
//#include"choosenpricegui.h"
#include"searchgui.h"


class File_random {
public:
    string c;
    string line;
    vector<vector<string>> csvData;
    vector<string> a_elements;

    void readElements() {
        
        ifstream file("models cars(random).csv"); 
        
            if (file.is_open()) {
                string line;
                while (std::getline(file, line)) {
                    stringstream ss(line);
                    string element;
                    while (getline(ss, element)) {
                        
                        
                        a_elements.push_back(element);
                    }
                }
                file.close();
            }
            else {
                cout << "Unable to open file." << endl;
            }
        }


    void shuffleElements() {
        random_device rd;
        mt19937 g(rd());
        shuffle(a_elements.begin(), a_elements.end(), g);
    }

    void printElements() const {
        for (const auto& element : a_elements) {
            cout << element << " ";
        }
        cout << endl;
    }

private:
    string a_filename;
    
};


#include <QMainWindow>
#include "ui_randomlistgui.h"

class randomlistgui : public QMainWindow
{
	Q_OBJECT

public:
	randomlistgui(QWidget *parent = nullptr);
	~randomlistgui();
private slots:
    void on_randomlist_itemDoubleClicked(QListWidgetItem* item);
    void on_searchmodelbutton_clicked();
    void on_searchpricebutton_clicked();
    void on_filterbutton_clicked();
private:
	Ui::randomlistguiClass ui;
};