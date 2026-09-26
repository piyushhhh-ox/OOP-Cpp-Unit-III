#include <iostream>              // Includes the input/output library
using namespace std;             // Allows direct use of cout

class Number {                   // Defines a class named Number
    int value;                   // Stores the number

public:
    Number(int v) {              // Constructor to initialize value
        value = v;               // Assigns v to value
    }

    void operator-() {           // Overloads the unary minus operator
        value = -value;           // Changes the sign of the number
    }

    void display() {             // Function to display the number
        cout << value << endl;   // Displays the value
    }
};

int main() {                     // Main function where execution begins

    Number n(10);                // Creates an object with value 10

    -n;                          // Calls the overloaded unary minus operator
    n.display();                 // Displays the changed value

    return 0;                    // Ends the program successfully
}
