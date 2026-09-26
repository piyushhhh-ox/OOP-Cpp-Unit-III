#include <iostream>              // Includes the input/output library
using namespace std;             // Allows direct use of cout

class Number {                   // Defines a class named Number
    int value;                   // Private data member

public:
    Number(int v) {              // Constructor to initialize value
        value = v;               // Assigns v to value
    }

    friend Number operator+(Number a, Number b);  // Declares + as a friend function

    void display() {             // Function to display the value
        cout << value << endl;   // Displays the value
    }
};

Number operator+(Number a, Number b) {  // Defines the non-member + operator
    return Number(a.value + b.value);   // Adds private values of both objects
}

int main() {                     // Main function where execution begins

    Number n1(10);               // Creates first Number object
    Number n2(20);               // Creates second Number object

    Number n3 = n1 + n2;         // Adds the two objects using overloaded +

    n3.display();                // Displays the result

    return 0;                    // Ends the program successfully
}
