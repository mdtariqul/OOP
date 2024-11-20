#include "lab.h"
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
lab::lab()
{  system("CLS");
    char name1[20];
    char roll1[20];
    float cgpa1;
    char email1[20];

  cout<<"enter name"<<endl;
  //cin.getline(name1,20);
  cin>>name1;
   cout<<"enter roll"<<endl;
  cin>>roll1;
  cout<<"enter cgpa1"<<endl;
  cin>>cgpa1;
  cout<<"enter email"<<endl;
  cin>>email1;

  cgpa=cgpa1;
  strcpy(name,name1);
   strcpy(roll,roll1);
    strcpy(email,email1);

}


void lab::c_cgpa()
{  system("CLS");
    float cg;
    cout<<"enter new cgpa"<<endl;
    cin>>cg;
    cgpa=cg;
}


void lab::c_email(){
    char e[20];
    system("CLS");
    cout<<"enter new email"<<endl;
    cin>>e;
    strcpy(email,e);


}


void lab::c_roll(){

char r[20];
system("CLS");
cout<<"enter new roll"<<endl;
    cin>>r;
    strcpy(roll,r);

}


void lab::c_name()
{
    char n[20];
    system("CLS");
    cout<<"enter new name"<<endl;
   // cin.getline(n,20);
    cin>>n;
    strcpy(name,n);
}

void lab:: p_datils()
{   system("CLS");
    cout<<name<<endl<<roll<<endl<<cgpa<<endl<<email<<endl;
}
