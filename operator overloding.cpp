#include<iostream>
using namespace std;

class abc{
int a;
int b;
public:

     abc(int a=0, int b=0){this->a=a; this->b=b;}
     void print();
    friend abc operator + (abc &m,abc &n);
        abc operator -- ();
        abc operator +(abc& o);
};
/*abc::abc operator +(abc& o){
abc tem;
tem.a=a+o.x;
tem.b=o.b;
return;
}*/
void abc::print(){
cout<<"a="<<a<<"  b="<<b<<endl;
}

abc abc:: operator -- (int){
--a;
--b;
return *this;
}

abc operator + (abc &m,abc &n){
     abc tem;

tem.a=m.a+n.a;
tem.b=m.b+n.b;
return tem;
}


int main(){
abc a(10,20),b(30,40),c(50,60);
abc d=a+b;
d.print();/*
a.print();
--b;
b.print();
//c--;
c.print();*/
abc d=10+b;

return 0;




}
