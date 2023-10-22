#ifndef BANKINGSERVICE_H
#define BANKINGSERVICE_H

#include "Customer.h"
#include "Account.h"
#include "Transaction.h"
#include <vector>

class BankingService {
private:
    std::vector<Customer> customers;
    std::vector<Account> accounts;
    std::vector<Transaction> transactions;
public:
    // Include methods for customer and account management
    void addCustomer(const std::string& name, int customerID);
    void createAccount(int accountNumber, const Customer& accountHolder, double balance = 0.0);
    void deposit(int accountNumber, double amount);
    void withdraw(int accountNumber, double amount);
    void transfer(int fromAccountNumber, int toAccountNumber, double amount);
    void displayAccountInfo(int accountNumber);
    void displayCustomerInfo(int customerID);
    Customer getCustomer(int customerID);
};

#endif
