#include "Transaction.h"

Transaction::Transaction(const std::string& type, double amount) 
    : type(type), amount(amount), timestamp(std::time(0)) {}

// Implement getter methods for transaction information
