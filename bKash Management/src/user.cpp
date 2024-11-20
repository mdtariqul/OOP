#include "user.h"
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

user::user(char a[])
{
    strcpy(phn_no,"user/");
    strcat(phn_no,a);
    strcat(phn_no,".txt");

    ifstream in;

    in.open(phn_no);
    if(!in){
        pin = 0;
        balance = 0;
        strcpy(name,"");
        strcpy(nid,"");
    }
    else{
    in.getline(name,99);
    in >> nid;
    in >> pin;
    in >> balance;
    }
    in.close();

}

void user :: registration(){
    cout << "* REGISTRATION *"<<endl;
    if(pin != 0) {
        cout << "Already have an account."<<endl;
        cout << "Name: " << name << endl;
    }
    else{
    fflush(stdin);
    cout << "Enter name: ";
    cin.getline(name,99);
    cout << "Enter NID number: ";
    cin >> nid;

    pin_sec:{
    cout << "Enter pin: ";
    cin >> pin;
    int con_pin;
    cout << "Confirm pin: ";
    cin >> con_pin;
        if(pin == con_pin){

        veri:{
        srand(time(NULL));
        int veri_code = rand()%1000000;
        cout << "Verification code:"<<veri_code<<endl;
        cout << "Enter verification code: ";
        int con_veri;
        cin>> con_veri;
        if(con_veri == veri_code){
            cout << "Your account is created successfully."<<endl;
            cout << "Enter initial balance: ";
            cin >> balance;
        }
        else{
            cout << "Please try again..."<<endl;
            goto veri;
        }}
    }
    else{
        cout << "Pin number doesn't match. Please try again..."<<endl;
        goto pin_sec;
    }
    }


}}

void user:: sendmoney(){
    cout << "* SEND MONEY *"<<endl;
    if(pin == 0) cout << "Please registration first." <<endl;
    else{
    cout << "Enter receiver phone number: ";
    char r[15];
    cin >> r;
    cout << "Enter amount: ";
    long int amm;
    cin >> amm;
    cout << "Enter pin: ";
    int cpin;
    cin >> cpin;

    if(cpin == pin){
        if(balance - amm-5 >= 50){
           cout << "Successful Transaction in "<<r<<endl;
           cout << "Amount: "<<amm<<endl;
           cout << "Fee: 5"<<endl;
           balance -= (amm+5);
           cout << "Current balance: "<< balance <<endl;
        }
        else cout << "Insufficient balance."<<endl;
    }
    else cout << "Pin doesn't match."<<endl;

}}

void user:: cashout(){
    cout << "* CASH OUT *"<<endl;
    if(pin == 0) cout << "Please registration first." <<endl;
    else{
    cout << "Enter agent phone number: ";
    char r[15];
    cin >> r;
    cout << "Enter amount: ";
    long int amm;
    cin >> amm;
    cout << "Enter pin: ";
    int cpin;
    cin >> cpin;
    float fee = .02*amm;
    if(cpin == pin){
        if(balance - amm-fee >= 50){
           cout << "Cash out from "<<r<<endl;
           cout << "Amount: "<<amm<<endl;
           cout << "Fee: "<<fee<<endl;
           balance -= (amm+fee);
           cout << "Current balance: "<< balance <<endl;
        }
        else cout << "Insufficient balance."<<endl;
    }
    else cout << "Pin doesn't match."<<endl;


}}

void user :: paybill(){
    cout << "* PAY BILL *"<<endl;
    if(pin == 0) cout << "Please registration first." <<endl;
    else{
    cout << "Enter merchant phone number: ";
    char r[15];
    cin >> r;
    cout << "Enter bill no: ";
    int bill;
    cin >> bill;
    cout << "Enter amount: ";
    long int amm;
    cin >> amm;
    cout << "Enter pin: ";
    int cpin;
    cin >> cpin;

    if(cpin == pin){
        if(balance - amm >= 50){
           cout << "Bill payed for bill: "<<bill<<endl;
           cout << "Amount: "<<amm<<endl;
           cout << "Fee: 00"<<endl;
           balance -= amm;
           cout << "Current balance: "<< balance <<endl;
        }
        else cout << "Insufficient balance."<<endl;
    }
    else cout << "Pin doesn't match."<<endl;
}}

void user :: addmoney(){
    cout << "* ADD MONEY *"<< endl;
    if(pin == 0) cout << "Please registration first." <<endl;
    else{
    cout << "Enter card no: ";
    char r[15],pass[15];
    cin >> r;
    cout << "Enter amount: ";
    long int amm;
    cin >> amm;
    cout << "Enter card password: ";
    cin >> pass;

    balance += amm;

    cout << "Successfully added money from "<<r<<endl;
    cout << "Current balance: "<<balance<<endl;
}}

void user :: mybkash(){
    cout << "* MY bKASH *"<<endl;
    if(pin == 0) cout << "Please registration first." <<endl;
    else{
    cout << "Enter pin: ";
    int cpin;
    cin >> cpin;

    if (cpin == pin){
        cout << "Name: "<<name<<endl;
        cout << "NID: "<<nid <<endl;
        cout << "Current balance: "<< balance<<endl;
        cout << "Available balance: "<< balance-50<<endl;
    }
    else cout << "Pin doesn't match."<<endl;

}}

user :: ~user(){
    if(pin != 0){
    ofstream out;
    out.open(phn_no);
    out << name << endl;
    out << nid << endl;
    out << pin << endl;
    out << balance <<endl;
    out.close();
}}
