#include <iostream>                 // Provides input/output functions

class Base {
public:
    virtual ~Base() {               // Virtual destructor of the base class
        std::cout << "Base destructor\n"; // Displays base destructor message
    }
};

class Derived : public Base {
public:
    ~Derived() override {           // Destructor of the derived class
        std::cout << "Derived destructor\n"; // Displays derived destructor message
    }
};

int main() {
    Base* pointer = new Derived();  // Creates Derived object using a Base pointer

    delete pointer;                 // Deletes the object through the Base pointer

    return 0;                       // Ends the program successfully
}
