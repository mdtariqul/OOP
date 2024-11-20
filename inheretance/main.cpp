#include <iostream>
#include "a.h"
using namespace std;

int main()
{
    b obj(10,20);
    obj.show();

    a *ptr;
    ptr=&obj;
    ptr -> show();




    return 0;
}
