#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
private:
    std::string name;
    int customerID; // You might want a more sophisticated ID generation
public:
    Customer(const std::string& name, int customerID);
    std::string getName() const { return name; }
    int getCustomerID() const { return customerID; }
    void generateCustomerID() { 
        // You might want a more sophisticated ID generation
        customerID = rand() % 1000000;
     }
};

#endif
