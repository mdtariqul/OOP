#include <iostream>
#include "A.h"
using namespace std;

int main()
{

    A ob1(10);
    A ob2(30);

    A ob3;

    ob3=ob1+ob2;
    ob3.show();
    return 0;
}
