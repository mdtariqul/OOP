#include "bkash.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
bkash::bkash(char a[], char b[],int c)
{
    strcpy(id,a);
    blance=c;
    strcpy(pass,b);
}


void bkash :: cheak()
{
    char p1[20];
    cout<<"Enter pin:"<<endl;
    cin>>p1;

    if(!strcmp(p1,pass))
    {
        system("CLS");
        cout<<"Your current balance is="<<blance<<endl;
    }
    else
    {
        system("CLS");
        cout<<"Invalid pin!!!"<<endl;

    }
}


void bkash::deposite()
{
    int a;
    char p1[20];
    cout<<"Enter pin:"<<endl;
    cin>>p1;

    if(!strcmp(p1,pass))
    {
        cout<<"Enter ammount"<<endl;
        cin>>a;
        blance=blance+a;
        system("CLS");
        cout<<"Deposite successful"<<endl;
        cout<<"your current balance ="<<blance<<endl;
    }
    else
    {
        system("CLS");
        cout<<"Invalid pin!!!"<<endl;
    }

}



void bkash::withd()
{


    int a;
    char p1[20];
    cout<<"Enter pin:"<<endl;
    cin>>p1;

    if(!strcmp(p1,pass))
    {
        cout<<"Enter ammount"<<endl;
        cin>>a;
        if((blance-a)>=500)
        {
            blance=blance-a;
            system("CLS");
            cout<<"withdraw successful"<<endl;
            cout<<"your balance now="<<blance<<endl;
        }
        else
        {
            system("CLS");
            cout<<"Not enough balance !!!!"<<endl<<"You have to keep atlest 500tk in your account."<<endl;
        }

    }
    else
    {
        system("CLS");
        cout<<"Invalid pin!!!"<<endl;
    }

}
int bkash:: get_b()
{

    return blance;

}
