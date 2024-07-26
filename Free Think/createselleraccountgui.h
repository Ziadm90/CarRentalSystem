#include <QMainWindow>
#include "ui_createselleraccountgui.h"
#include<qmessagebox.h>
#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include"visagui.h"
#include"signingui.h"

using namespace std;

class createselleraccount {


public:

    
    void setData(string name, string Number,  string userEmail, string p, string National_ID,string passconf) {
        fstream csvFileRead("Customer Accounts.csv");
        bool cass = false;
        bool casspass = false;
        string mailcheck, passcheck;
        bool exists = false;
        string lineinfile;


        if (userEmail.length() < 11 || userEmail.substr(userEmail.length() - 10) != "@gmail.com" && userEmail.substr(userEmail.length() - 12) != "@hotmail.com" && userEmail.substr(userEmail.length() - 9) != "@live.com" && userEmail.substr(userEmail.length() - 12) != "@outlook.com" && userEmail.substr(userEmail.length() - 10) != "@yahoo.com" && userEmail.substr(userEmail.length() - 9) != "@mail.com" && userEmail.substr(userEmail.length() - 11) != "@icloud.com" && userEmail.substr(userEmail.length() - 18) != "@zewailcity.edu.eg" && userEmail.substr(userEmail.length() - 8) != "@aol.com") {

            cass = true;
            QMessageBox::information(nullptr, "Error!", "Enter Valid Mail !", QMessageBox::Ok);


        }


        fstream myfile("Customer Accounts.csv");
        while (getline(myfile, lineinfile)) {

            std::stringstream ss(lineinfile);
            std::getline(ss, mailcheck, ',');

            if (userEmail == mailcheck) {
                exists = true;
                QMessageBox::information(nullptr, "Error !", "Aleady Exists !", QMessageBox::Ok);
                break;



            }
        }






        if (p.length() < 6 || p.length() > 16) {
            cass = true;
            QMessageBox::information(nullptr, "Error!", "Try another Password !", QMessageBox::Ok);
        }

        while (getline(myfile, lineinfile)) {

            std::stringstream ss(lineinfile);
            std::getline(ss, passcheck, ',');


        }

        if (Number.length() != 11 || (Number.substr(0, 3) != "011" && Number.substr(0, 3) != "010" && Number.substr(0, 3) != "012" && Number.substr(0, 3) != "015")) {
            QMessageBox::information(nullptr, "error!", "Enter Valid Number", QMessageBox::Ok);
            cass = true;
            
        }
        if (name.length() < 7 || name.length() > 16) {
            QMessageBox::information(nullptr, "error!", "Enter Valid Name", QMessageBox::Ok);
            cass = true;
        }
        if (passconf != p) {
            QMessageBox::information(nullptr, "error!", "Password does not match", QMessageBox::Ok);
            cass = true;
        }
        if (National_ID.length() != 14 || !all_of(National_ID.begin(), National_ID.end(), ::isdigit)) {
            QMessageBox::information(nullptr, "error!", "Enter Valid National ID", QMessageBox::Ok);
            cass = true;
        }
        if (cass == false && exists == false) {
            fstream csvwrite("Seller Accounts.csv", ios::app);
            csvwrite << userEmail << ",";
            csvwrite << p << ",";
            csvwrite << Number << ",";
            csvwrite << name << ",";
            csvwrite << National_ID << ","<<endl;


            QMessageBox::information(nullptr, "Saved!", "Done", QMessageBox::Ok);
        }







    }
    };


class createselleraccountgui : public QMainWindow
{
	Q_OBJECT

public:
	createselleraccountgui(QWidget *parent = nullptr);
	~createselleraccountgui();
private slots:
    void on_createaccountbutton_clicked();
    void on_signinbutton_clicked();
private:
	Ui::createselleraccountguiClass ui;
};
