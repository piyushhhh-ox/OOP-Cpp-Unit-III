#include <iostream>              // Includes the input/output library
using namespace std;             // Allows direct use of cout

class Area {                     // Defines a class named Area
public:

    int calculate(int side) {    // Function to calculate area of a square
        return side * side;      // Returns the square's area
    }

    int calculate(int length, int breadth) {  // Overloaded function for rectangle
        return length * breadth;               // Returns the rectangle's area
    }
};

int main() {                     // Main function where execution begins

    Area a;                      // Creates an object of Area

    cout << "Square Area: " << a.calculate(5) << endl;          // Calls square version
    cout << "Rectangle Area: " << a.calculate(5, 10) << endl;   // Calls rectangle version

    return 0;                    // Ends the program successfully
}
