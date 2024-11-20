#include "brac bank.h"
#include<iostream>
using namespace std;
bracbank::bracbank(long int x)
{
 balence1=x;
}

citybank::citybank(long int x)
{
    balence2=x;
}

void brac_print(bracbank ob){
cout<<"brac bank balence"<<endl;
cout<<ob.balence1<<endl;
}

void city_print(citybank ob){
cout<<"city bank balence"<<endl;
cout<<ob.balence2<<endl;
}

void print(citybank ob1, bracbank ob2)
{
    cout<<"total balence"<<endl;
    cout<<ob1.balence2+ob2.balence1<<endl;
}

void citybank::credit_trans(bracbank& ob3){

balence2+=ob3.balence1;
ob3.balence1=0;
cout<<"after cridet transfer city bank balence "<<balence2<<endl;
cout<<"bracbank balence="<<ob3.balence1<<endl;


}


