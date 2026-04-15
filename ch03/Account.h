#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
string owner;
int balance;
public:
    Account(string owner, int balance);
    void deposit(int amount);
    void withdraw(int amount);
    int inquiry();
    string getOwner();
};
#endif