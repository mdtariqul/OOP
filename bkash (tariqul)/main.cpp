#include <bits/stdc++.h>
#include "bkash.h"
using namespace std;

int main()
{

    int x,bal,i,c,d;
    char g;
    char pin1[20],id1[20],pin2[20],id2[20];

st:
    cout<<"***WELCOME TO BKASH SITE.***"<<endl;
id:

    printf("\nEnter 1 for login .\nEnter 2 for registration.\nEnter 0 for exit.\n");
    printf("\nEnter Option=");
    cin>>x;
    if(x==1)
    {
        system("CLS");
        cout<<"Enter id"<<endl;
        cin>>id2;
        strcpy(id1,"user/");
        strcat(id2,".txt");
        strcat(id1,id2);
        ifstream in;
        in.open(id1);
        if(in)
        {
            cout<<"Enter pin"<<endl;
            cin>>pin1;

            in.getline(pin2,20);
            if(!strcmp(pin1,pin2))
            {
                system("CLS");
                cout<<"Login successful"<<endl;
                cout<<"****Wellcome in your account****"<<endl;



                in>>bal;

                in.close();

            }
            else
            {
                system("CLS");
                cout<<"Invalid pin!!!"<<endl;
                goto id;
            }
        }
        else
        {
            system("CLS");
            cout<<" SORRY! , we don't find any accounte in that id"<<endl;
            goto id;

        }

    }
    else if(x==2)
    {
rt:
        system("CLS");
        cout<<"Enter user id"<<endl;
        cin>>id2;
        strcpy(id1,"user/");
        strcat(id2,".txt");
        strcat(id1,id2);
        ifstream ol;
        ol.open(id1);
        if(ol)
        {
            system("CLS");
            cout<<"!!!!!!Sorry this id already in use. Try an uniqe one.\n\n\nEnter any key to continue."<<endl;
            cin>>g;
            goto rt;
        }
        else
        {
d:
            cout<<"Enter blance"<<endl;
            cin>>bal;
            if(bal<500)
            {
                system("CLS");
                cout<<"You have to deposite atlest 500tk.Re-Enter blance"<<endl;

                goto d;
            }
            else
            {
                cout<<"Enter pin"<<endl;
                cin>>pin1;
            }


            ofstream out;
            out.open(id1);
            out<<pin1<<endl;
            out<<bal<<endl;

            out.close();
            system("CLS");
            cout<<"Registration successful"<<endl;
            cout<<"****Wellcome to bkash site****"<<endl;
        }


    }
    else if(x==0)
    {
        system("CLS");
        printf("\n\n");
        cout<<"***Thanks for using bkash***"<<endl;
        printf("\n\n");
        getchar();
        exit(1);
    }

    else
    {
        system("CLS");
        cout<<"Worng choice!!!"<<endl;
        goto id;
    }

    bkash a(id1,pin1,bal);

    for(i=0;; i++)
    {

        printf("\nEnter 1 for cheak balance.\n");
        printf("Enter 2 for cash in.\n");
        printf("Enter 3 for cash out.\n");
        cout<<"Enter 4 for logout.\n"<<endl;
        printf("Enter Option=");
        cin>>c;
        system("CLS");
        if(c==1)
            a.cheak();
        else if(c==2)
            a.deposite();
        else if(c==3)
            a.withd();
        else if(c==4)
        {
            d= a.get_b();
            ofstream out;
            out.open(id1);
            out<<pin1<<endl;
            out<<d<<endl;
            out.close();

            goto st;
        }
        else
        {
            system("CLS");
            cout<<"Worng choice!!!"<<endl;
        }




    }

    return 0;
}
