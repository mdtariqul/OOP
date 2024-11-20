#include<iostream>
#include<cstring>
using namespace std;

class base {

char str[80];

public:
     base (char* s){
     strcpy(str,s);
     }
void show (){cout<<str<<endl;}
};

class drive : public base {
int len;
public :
     drive(char* st):base(st){
     len=(int)strlen(st);
     }
int getlen(){

return len;
}
    void dshow (){

    show();
    }
};

int main(){
drive ob("hellow");

ob.dshow();
cout<<ob.getlen()<<endl;
return 0;


}
