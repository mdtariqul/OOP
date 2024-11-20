#ifndef GEOME_H
#define GEOME_H


class quad
{
  int height;
  int width;
  int angle;
  public:
  quad(int x);
  quad(int x, int y);
  quad(int x, int y, int z);
 float get_area();
};

#endif // GEOME_H
