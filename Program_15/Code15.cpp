#include <iostream>                         // Provides input/output functions
#include <string>                           // Provides string support

class Payment {
public:
    virtual void pay(double amount) const = 0; // Pure virtual payment function
    virtual ~Payment() = default;              // Virtual destructor
};

class CardPayment : public Payment {
public:
    void pay(double amount) const override {    // Implements payment using card
        std::cout << "Paid Rs. " << amount << " using card\n"; // Displays card payment
    }
};

class UpiPayment : public Payment {
public:
    void pay(double amount) const override {    // Implements payment using UPI
        std::cout << "Paid Rs. " << amount << " using UPI\n"; // Displays UPI payment
    }
};

class NetBankingPayment : public Payment {
public:
    void pay(double amount) const override {    // Implements payment using net banking
        std::cout << "Paid Rs. " << amount << " using net banking\n"; // Displays payment
    }
};

void processPayment(const Payment& payment, double amount) { // Processes any payment type
    payment.pay(amount);                         // Calls the appropriate pay() function
}

int main() {
    CardPayment card;                            // Creates CardPayment object
    UpiPayment upi;                              // Creates UpiPayment object
    NetBankingPayment netBanking;                // Creates NetBankingPayment object

    processPayment(card, 1250.0);                // Processes card payment
    processPayment(upi, 750.0);                  // Processes UPI payment
    processPayment(netBanking, 500.0);           // Processes net banking payment

    return 0;                                    // Ends the program successfully
}
