#include <iostream>              // Includes the input/output library
using namespace std;             // Allows direct use of cout

class Base {                     // Defines the base class
public:
    virtual void show() {        // Declares show() as a virtual function
        cout << "Base class" << endl;  // Displays base class message
    }
};

class Derived : public Base {    // Defines Derived class inheriting Base
public:
    void show() override {       // Overrides the virtual function
        cout << "Derived class" << endl;  // Displays derived class message
    }
};

int main() {                     // Main function where execution begins

    Derived d;                   // Creates an object of Derived class
    Base* ptr = &d;              // Base pointer points to Derived object

    ptr->show();                 // Calls Derived class show() at runtime

    return 0;                    // Ends the program successfully
}
