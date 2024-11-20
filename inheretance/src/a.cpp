#include "a.h"
#include<iostream>
using namespace std;
b::b(int s,int t)
{
 x=new int (s);
 y=new int (t);
}

void a::show()
{
     cout<<"x="<<*x<<endl;
}

void b::show()
{
     cout<<"x="<<*x<<endl<<"y="<<*y<<endl;
     }
