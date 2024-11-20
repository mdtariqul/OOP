#ifndef BRAC BANK_H
#define BRAC BANK_H

class bracbank;

class citybank{
long int balence2;
    public:
        citybank(long int x);
        void credit_trans(bracbank& ob3);
        friend void city_print(citybank ob);
        friend void print(citybank ob1, bracbank ob2);
};

class bracbank
{   long int balence1;
    public:
        bracbank(long int x);
        friend void brac_print(bracbank ob);
       friend void citybank::credit_trans(bracbank& ob3);
       friend void print(citybank ob1, bracbank ob2);
      };
#endif // BRAC BANK_H
