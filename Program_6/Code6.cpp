#include <iostream>              // Includes the input/output library
using namespace std;             // Allows direct use of cout

class Distance {                 // Defines a class named Distance
    int meter;                   // Stores distance in meters

public:
    Distance(int m) {             // Constructor to initialize distance
        meter = m;                 // Assigns the given value to meter
    }

    bool operator>(Distance d) {  // Overloads the greater-than operator
        return meter > d.meter;    // Compares two distance values
    }
};

int main() {                      // Main function where execution begins

    Distance d1(100);             // Creates first distance object
    Distance d2(80);              // Creates second distance object

    if (d1 > d2) {                // Compares d1 and d2 using overloaded >
        cout << "d1 is greater";  // Displays result if d1 is greater
    }
    else {
        cout << "d2 is greater";  // Displays result otherwise
    }

    return 0;                     // Ends the program successfully
}
