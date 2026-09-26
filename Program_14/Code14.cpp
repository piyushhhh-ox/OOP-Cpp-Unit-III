#include <iostream>                         // Provides input/output functions

class Base {
public:
    virtual void display() const {          // Virtual display function
        std::cout << "Base object\n";        // Displays base object message
    }

    virtual ~Base() = default;              // Virtual destructor
};

class Derived : public Base {
public:
    void display() const override {         // Overrides Base display function
        std::cout << "Derived object\n";     // Displays derived object message
    }
};

void displayByValue(Base object) {           // Receives a Base object by value
    object.display();                        // Calls Base display due to object slicing
}

void displayByReference(const Base& object) { // Receives object by reference
    object.display();                          // Calls the correct virtual function
}

int main() {
    Derived derived;                         // Creates a Derived object

    std::cout << "Passing by value: ";       // Displays message for value passing
    displayByValue(derived);                 // Passes Derived object by value

    std::cout << "Passing by reference: ";   // Displays message for reference passing
    displayByReference(derived);             // Passes Derived object by reference

    return 0;                                // Ends the program successfully
}
