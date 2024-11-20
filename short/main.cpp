#include <iostream>
#include <string.h>
#include "sort.h"
using namespace std;

int main()
{
   int i,j,t;
   float q,b;
 char c[20],d[20];
   sort a[100] ;
cout<<"Enter the number of student :"<<endl;
cin>>t;
   for(i=0;i<t;i++){
cout<<"Enter info student "<<i+1<<endl;
    a[i].set_info();
   }


for(i=0;i<t;i++){
for(j=0;j<t;j++){

  q=a[i].get_x();
  b=a[j].get_x();

 if(q<b){

        strcpy(c,a[i].getn());
        strcpy(d,a[j].getn());
    a[i].set(b,d);
    a[j].set(q,c);
 }



}}


cout<<"sorted  info student of "<<i<<endl;
   for(i=0;i<t;i++){
    a[i].get_info();
   }



    return 0;
}
