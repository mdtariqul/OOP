#include <iostream>
#include "num.h"
using namespace std;

int main()
{
    num n1(10,20);

    n1.add();
    cout<<"add="<<n1.get_result()<<endl;
    n1.sub();
    cout<<"sub="<<n1.get_result()<<endl;
    n1.mul();
    cout<<"mul="<<n1.get_result()<<endl;

    n1.div();
    cout<<"div="<<n1.get_result()<<endl;
    return 0;
}
