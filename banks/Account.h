#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "Customer.h"

class Account {
private:
    int accountNumber;
    Customer accountHolder;
    double balance;
public:
    Account(int accountNumber, const Customer& accountHolder, double balance = 0.0);
    int getAccountNumber() const { return accountNumber; }
    void deposit(double amount) { balance += amount; }
    void withdraw(double amount) { balance -= amount; }
    void transfer(Account& toAccount, double amount) {
        withdraw(amount);
        toAccount.deposit(amount);
    }
    double getBalance() const { return balance; }
    Customer getAccountHolder() const { return accountHolder; }
};

#endif
