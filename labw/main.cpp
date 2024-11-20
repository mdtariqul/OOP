#include <bits/stdc++.h>
#include "lab.h"
using namespace std;

int main()
{
    int x,y;
    lab a1;
    lab a2;
 system("CLS");
    for(int i=0;;i++){

        printf("\n\nEnter 1 for print\nEnter 2 for change roll \nEnter 3 for change cgpa\nEnter 4 for change email\nEnter 0 for end\n");
        cin>>x;
        if(x==1){
            printf("obj 1 or 2\n");
            cin>>y;
            if(y==1)
                a1. p_datils();
                else
                    a2. p_datils();
        }
    else  if(x==2){
            printf("obj 1 or 2\n");
            cin>>y;
            if(y==1)
                a1.c_roll();
                else
                    a2.c_roll();
        }

         else  if(x==3){
            printf("obj 1 or 2\n");
            cin>>y;
            if(y==1)
                a1.c_cgpa();
                else
                    a2.c_cgpa();
        }
         else  if(x==4){
            printf("obj 1 or 2\n");
            cin>>y;
            if(y==1)
                a1.c_email();
                else
                    a2.c_email();
        }
        else if(x==0)
            break;


    }







    return 0;
}
