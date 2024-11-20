#ifndef A_H
#define A_H


class a
{
    protected:
         int *x;
    public:

     virtual void show ();

};


class b :virtual public a{
int *y;

public:
     b(int s,int t);
      virtual  void show ();



};

#endif // A_H
