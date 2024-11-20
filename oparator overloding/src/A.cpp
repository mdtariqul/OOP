#include "A.h"
#include<iostream>
#include<cstdio>
using namespace std;
A::A()
{
    x=new int (0);
}

A::A(int a)
{
    x=new int (a);
}

A  A ::  operator +(const A &ptr)
{
    A ob3;

    int a,c,d;
    int *b;
    a=*x;
    b=ptr.x;
    d=*b;
    c=a+d;

    *(ob3.x)=c;


    return ob3;
}

void A:: show()
{
    printf("the sum is :%d", *x);

}
