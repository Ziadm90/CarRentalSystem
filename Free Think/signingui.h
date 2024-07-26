#pragma once
#include <QtWidgets/QMainWindow>
#include<qmessagebox.h>
#include "ui_signingui.h"
#include<iostream>
#include<fstream>
#include<sstream>
#include"createbuyeraccount.h"
#include"createselleraccountgui.h"
#include"randomlistgui.h"
#include"addremovecarsgui.h"
#include"installmentgui.h"
//#include"reviewgui.h"
using namespace std;
class signin
{

public:
    bool signbuyer,signseller ;
    void buyersignin(string email, string password) {
        bool signedin = false;  
        string lineinfile,mailcheck,passcheck;
        fstream myfile("Customer Accounts.csv");
        while (getline(myfile, lineinfile)) {
            std::stringstream ss(lineinfile);
            std::getline(ss, mailcheck, ',');
            std::getline(ss, passcheck, ',');
            if (email == mailcheck) {
                signedin = true;
                if (password == passcheck) {

                    QMessageBox::information(nullptr, "Signed in!", "Signed in successfully !", QMessageBox::Ok);
                    signbuyer = true;
                    
                }
                  
                else
                {
                    if (password != passcheck)
                    {
                        QMessageBox::information(nullptr, "Please try again", "Password not correct !",  QMessageBox::Ok);
                        signedin = true;
                    }
                }
                    }
                }
            
        if (signedin == false) {
            QMessageBox::information(nullptr, "Error !", "Does not exist !",  QMessageBox::Ok);
        }
    }


    void sellersignin(string email, string password) {
        bool signedin = false;
        string lineinfile,mailcheck, passcheck;
        fstream myfile("Seller Accounts.csv");
        while (getline(myfile, lineinfile)) {
            stringstream ss(lineinfile);
            std::getline(ss, mailcheck, ',');
            std::getline(ss, passcheck, ',');
            if (email == mailcheck) {
                signedin = true;
                if (password == passcheck) {
                    QMessageBox::information(nullptr, "Signed in!", "Signed in successfully !", QMessageBox::Ok);
                    signseller = true;
                }
                
                else
                {
                    if (password != passcheck)
                    {
                        QMessageBox::information(nullptr, "Please try again", "Password not correct !",  QMessageBox::Ok);
                        signedin = true;
                }
                }
            }}
    if (signedin == false) {
            QMessageBox::information(nullptr, "Error !", "Does not exist !",  QMessageBox::Ok);
        }
    }
 
    
};
class signingui : public QMainWindow
{
    Q_OBJECT

public:
    signingui(QWidget *parent = nullptr);
    ~signingui();
private slots:
    void on_signinbutton_clicked();
    void on_createaccountbutton_clicked();
    void on_sellercheckbox_stateChanged(int arg1);
    void on_buyercheckbox_stateChanged(int arg1);
private:
    Ui::signinguiClass ui;
    
};
