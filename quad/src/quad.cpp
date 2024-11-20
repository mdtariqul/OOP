#include "quad.h"
#include<math.h>
quad::quad(int x){
    h=x;
    w=x;
    a=90;
    area= h*w;
    pre=2*(h+w);}
quad::quad(int x, int y){
h=x;
w=y;
a=90;
area= h*w;
pre=2*(h+w);
}
quad::quad(int x, int y,int z){
    h=x;
    w=y;
    a=z;
    area=(float)h*w;
    area=area*sin((a*3.1416)/180);
    pre=2*(h+w);
}
float quad:: get_area(){
return area;
}
float quad:: get_pre(){
return pre;
}

