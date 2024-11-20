#include "sort.h"
#include<string.h>
#include<iostream>
using namespace std;

void sort::set_info(){
    cout<<"enter name"<<endl;
cin>>n;
    cout<<"enter cgpa"<<endl;
cin>>x;
}

float sort::get_x(){

return x;

}

void sort::set(float e, char r[]){
strcpy(n,r);
x=e;
}
;
  char* sort::getn(){

return n;
}

void sort::get_info(){

 cout<<"name:"<<n<<"   cgpa:"<<x<<endl;
}
