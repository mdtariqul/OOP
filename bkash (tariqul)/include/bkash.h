#ifndef BKASH_H
#define BKASH_H
#include<fstream>

class bkash
{
    int blance;
    char id[20], pass[20];
public:
    bkash(char a[], char b[],int c);

    void cheak();
    void deposite();
    void withd();
    int get_b();
};

#endif // BKASH_H
