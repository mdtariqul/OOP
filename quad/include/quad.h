#ifndef QUAD_H
#define QUAD_H


class quad
{
   int h;
   int w;
   int a;
   float area;
   int pre;
   public:
       quad(int x);
       quad(int x,int y);
       quad(int x,int y, int z);
       float get_area();
       float get_pre();
};

#endif // QUAD_H
