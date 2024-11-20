#ifndef USER_H
#define USER_H
class user
{
    char phn_no[50];
    char nid[50],name[100];
    int pin;
    long int balance;
public:
    user(char a[]);
    void registration();
    void sendmoney();
    void cashout();
    void paybill();
    void addmoney();
    void mybkash();
    ~user();
};
#endif // USER_H
