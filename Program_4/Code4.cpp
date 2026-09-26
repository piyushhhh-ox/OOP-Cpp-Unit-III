#include <iostream>              // Includes the input/output library
using namespace std;             // Allows direct use of cout

class Number {                   // Defines a class named Number
    int value;                   // Stores the number

public:
    Number(int v) {              // Constructor to initialize value
        value = v;               // Assigns v to value
    }

    Number operator++() {        // Overloads prefix increment operator
        ++value;                 // Increments value before returning
        return Number(value);    // Returns the updated value
    }

    Number operator++(int) {     // Overloads postfix increment operator
        Number temp(value);      // Stores the original value
        value++;                 // Increments value
        return temp;             // Returns the original value
    }

    void display() {             // Function to display the value
        cout << value << endl;   // Displays the current value
    }
};

int main() {                     // Main function where execution begins

    Number n(5);                 // Creates an object with value 5

    ++n;                         // Calls the prefix increment operator
    n.display();                 // Displays the updated value

    n++;                          // Calls the postfix increment operator
    n.display();                 // Displays the updated value

    return 0;                    // Ends the program successfully
}
