#include <iostream>              // Includes the input/output library
using namespace std;             // Allows direct use of cout

class Calculator {               // Defines a class named Calculator
public:

    int add(int a, int b) {      // Function to add two integers
        return a + b;            // Returns the sum of two integers
    }

    float add(float a, float b) { // Overloaded function to add two floats
        return a + b;             // Returns the sum of two float values
    }
};

int main() {                     // Main function where execution begins

    Calculator c;                // Creates an object of Calculator

    cout << c.add(10, 20) << endl;       // Calls integer version of add()
    cout << c.add(10.5f, 20.5f) << endl; // Calls float version of add()

    return 0;                    // Ends the program successfully
}
