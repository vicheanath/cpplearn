#include "BankingService.h"
#include <iostream>

int main() {
    BankingService bankingService;

    // Adding a customer
    bankingService.addCustomer("John Doe", 1);

    // Creating an account for the customer
    bankingService.createAccount(101, bankingService.getCustomer(1), 1000.0);

    // Performing a deposit
    bankingService.deposit(101, 500.0);

    // Displaying account information
    bankingService.displayAccountInfo(101);

    return 0;
}
