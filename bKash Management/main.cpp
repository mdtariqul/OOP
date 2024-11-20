#include <iostream>
#include "user.h"
#include <string.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    char phn_no[50],dial[10];

    while(1){
    cout << "Press 0 and ENTER to exit..."<<endl;
    cout << "Enter phone no: ";
    cin >> phn_no;

    if(!strcmp(phn_no,"0"))
        return 0;
    else{
        cout << "Dial: ";
        cin >> dial;
    }
    system("CLS");
    if(!strcmp(dial,"*247#")){
        cout << "** WELCOME **"<<endl;
        menu:{
        user p(phn_no);


        cout << "* MAIN MENU *"<<endl;
        cout << "1. Registration" << endl;
        cout << "2. Send Money" << endl;
        cout << "3. Cash out" << endl;
        cout << "4. Pay Bill" << endl;
        cout << "5. Add Money" << endl;
        cout << "6. My bKash" << endl;
        cout << "0. Exit" << endl;
        cout << "Please enter command...";

        int cmd;
        cin >> cmd;
        char ch;


        if(cmd == 1){
            system("CLS");
            p.registration();
            cout << "Press any key to continue...";
            ch = getche();
            system("CLS");
            goto menu;
        }

        else if(cmd == 2){
            system("CLS");
            p.sendmoney();
            cout << "Press any key to continue...";
            ch = getche();
            system("CLS");
            goto menu;
        }
        else if(cmd == 3){
            system("CLS");
            p.cashout();
            cout << "Press any key to continue...";
            ch = getche();
            system("CLS");
            goto menu;
        }
        else if(cmd == 4){
            system("CLS");
            p.paybill();
            cout << "Press any key to continue...";
            ch = getche();
            system("CLS");
            goto menu;
        }
        else if(cmd == 5){
            system("CLS");
            p.addmoney();
            cout << "Press any key to continue...";
            ch = getche();
            system("CLS");
            goto menu;
        }
        else if(cmd == 6){
            system("CLS");
            p.mybkash();
            cout << "Press any key to continue...";
            ch = getche();
            system("CLS");
            goto menu;
        }
        else{
            system("CLS");
            cout << "Thanks for using bKash."<<endl;
            cout << "Press any key to continue...";
            ch = getche();
            system("CLS");
        }
    }
    }
    else cout << "Invalid mimi code."<<endl;
    }
    return 0;
}
