#include<iostream>
#include<cstring>
using namespace std;

class base {

int x;

public:
 base(){x=0;}
    base(int x){this->x=x;}
void show (){cout<<"base: "<<x<<endl;}
};

class drive : public base {
int len;
public :
     drive(int x){len=x;}
  void show (){cout<<"derive: "<<len<<endl;}
};

int main(){
 base ob1(20);
drive ob(10);
base *p;
p=&ob1;
p->show();
p=&ob;
p->show();
return 0;


}
