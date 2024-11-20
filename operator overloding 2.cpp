#include<iostream>
using namespace std;

class abc{
int a;
public:

     abc(int a=0){this->a=a; }
     void print();
    /* abc operator +(abc& o){
     abc tem;
     tem.a=a+o.a;
     return tem;
     }*/

      abc operator +(int i){
     abc tem;
     tem.a=a+i;
     return tem;
     }

/*     abc operator +(abc& o,int i){
     abc tem;
     tem.a=o.a+i;
     return tem;
     }*/
};
void abc::print(){
cout<<"a="<<a<<endl;
}


int main(){
abc a(10),b;
b=a+1;
b.print();
//b=1+a;
b.print();
return 0;




}
