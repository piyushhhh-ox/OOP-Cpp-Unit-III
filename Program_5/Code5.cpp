#include <iostream>              // Includes the input/output library
using namespace std;             // Allows direct use of cout

class Complex {                  // Defines a class named Complex
    int real, imag;              // Stores real and imaginary parts

public:
    Complex(int r = 0, int i = 0) {  // Constructor with default values
        real = r;                    // Assigns real part
        imag = i;                    // Assigns imaginary part
    }

    Complex operator+(Complex c) {   // Overloads the + operator
        return Complex(real + c.real, imag + c.imag);  // Adds both parts
    }

    void display() {                 // Function to display the complex number
        cout << real << " + " << imag << "i" << endl;  // Displays result
    }
};

int main() {                         // Main function where execution begins

    Complex c1(3, 4);                // Creates first complex number
    Complex c2(2, 5);                // Creates second complex number

    Complex c3 = c1 + c2;            // Adds two complex numbers using overloaded +

    c3.display();                    // Displays the result

    return 0;                        // Ends the program successfully
}
