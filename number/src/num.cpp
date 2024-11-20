#include "num.h"

num::num(){
x=0;
y=0;
}
num::num(int a, int b){
x=a;
y=b;
}
void num::add(){
    result=x+y;
}
void num::sub(){
result=x-y;
}
void num::mul(){
result=x*y;
}
void num::div(){
result=(float)x/y;
}
float num::get_result(){
return result;
}
