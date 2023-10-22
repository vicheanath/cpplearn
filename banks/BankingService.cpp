#include "BankingService.h"
#include <iostream>

// Implement methods for customer and account management
void BankingService::addCustomer(const std::string& name, int customerID) {
    Customer newCustomer(name, customerID);
    customers.push_back(newCustomer);
}

void BankingService::createAccount(int accountNumber, const Customer& accountHolder, double balance) {
    Account newAccount(accountNumber, accountHolder, balance);
    accounts.push_back(newAccount);
}

// Implement methods for banking services (withdrawals, deposits, transfers)

void BankingService::deposit(int accountNumber, double amount) {
    for (auto& account : accounts) {
        if (account.getAccountNumber() == accountNumber) {
            account.deposit(amount);
            Transaction transaction("Deposit", amount);
            transactions.push_back(transaction);
            return;
        }
    }
    std::cout << "Account not found.\n";
}

// Implement methods for viewing account information

void BankingService::displayAccountInfo(int accountNumber) {
    for (const auto& account : accounts) {
        if (account.getAccountNumber() == accountNumber) {
            std::cout << "Account Information:\n";
            std::cout << "Account Number: " << account.getAccountNumber() << "\n";
            std::cout << "Account Holder: " << account.getAccountHolder().getName() << "\n";
            std::cout << "Balance: " << account.getBalance() << "\n";
            // Add more details if needed
            return;
        }
    }
    std::cout << "Account not found.\n";
}

Customer BankingService::getCustomer(int customerID) {
    for (const auto& customer : customers) {
        if (customer.getCustomerID() == customerID) {
            return customer;
        }
    }
    std::cout << "Customer not found.\n";
    return Customer("", -1);
}
