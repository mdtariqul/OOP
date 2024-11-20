#include "geome.h"

void quad::quad(int x){
heigth=x;
width=x;
angle=90;
}

float quad::get_area(){
return height*width;
}

