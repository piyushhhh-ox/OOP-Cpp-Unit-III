#include <iostream>                         // Includes the input/output library

class Shape {                               // Defines the abstract base class
public:
    virtual double area() const = 0;        // Declares a pure virtual function

    virtual ~Shape() = default;             // Virtual destructor
};

class Rectangle : public Shape {            // Rectangle inherits from Shape
private:
    double length;                           // Stores the length
    double width;                            // Stores the width

public:
    Rectangle(double givenLength, double givenWidth) // Constructor
        : length(givenLength), width(givenWidth) {}  // Initializes length and width

    double area() const override {           // Implements the pure virtual function
        return length * width;               // Calculates rectangle area
    }
};

int main() {                                // Main function

    Rectangle rectangle(8.0, 4.0);           // Creates a Rectangle object

    std::cout << "Rectangle Area: "
              << rectangle.area() << '\n';   // Displays the calculated area

    return 0;                                // Ends the program
}
