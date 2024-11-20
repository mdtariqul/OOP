#ifndef NUM_H
#define NUM_H


class num
{
    int x;
    int y;
    float result;
public:
    num();
    num(int a,int b);
    void add();
    void sub();
    void mul();
    void div();
    float get_result();
};

#endif // NUM_H
