#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <ctime>

class Transaction {
private:
    int transactionID; // You might want a more sophisticated ID generation
    std::string type; // "Withdrawal", "Deposit", "Transfer", etc.
    double amount;
    std::time_t timestamp;
public:
    Transaction(const std::string& type, double amount);
    
    int getTransactionID() const { return transactionID; }
    std::string getType() const { return type; }
    double getAmount() const { return amount; }
    std::time_t getTimestamp() const { return timestamp; }
    void generateTransactionID() { 
        // You might want a more sophisticated ID generation
        transactionID = rand() % 1000000;
     }
};

#endif
