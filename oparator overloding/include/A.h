#ifndef A_H
#define A_H


class A
{
    int *x;
public:
    A();
    A(int a);
    A operator +(const A &ptr);
    void show();

};

#endif // A_H
