#include <iostream>                         // Includes the input/output library

class Shape {                               // Defines the base class
public:
    virtual double area() const {           // Virtual function to calculate area
        return 0.0;                         // Returns 0 for the base class
    }

    virtual ~Shape() = default;             // Virtual destructor
};

class Rectangle : public Shape {            // Rectangle inherits from Shape
private:
    double length;                           // Stores the length
    double width;                            // Stores the width

public:
    Rectangle(double givenLength, double givenWidth) // Constructor
        : length(givenLength), width(givenWidth) {}  // Initializes length and width

    double area() const override {           // Overrides the virtual area function
        return length * width;               // Calculates rectangle area
    }
};

class Circle : public Shape {               // Circle inherits from Shape
private:
    double radius;                           // Stores the radius

public:
    explicit Circle(double givenRadius)      // Constructor for Circle
        : radius(givenRadius) {}             // Initializes radius

    double area() const override {            // Overrides the virtual area function
        constexpr double PI = 3.141592653589793; // Defines the value of PI
        return PI * radius * radius;          // Calculates circle area
    }
};

void printArea(const Shape& shape) {         // Accepts a Shape reference
    std::cout << "Area: " << shape.area() << '\n'; // Calls the correct area function
}

int main() {                                // Main function

    Rectangle rectangle(5.0, 3.0);           // Creates a rectangle object
    Circle circle(2.0);                       // Creates a circle object

    printArea(rectangle);                    // Passes rectangle by reference
    printArea(circle);                       // Passes circle by reference

    return 0;                                // Ends the program
}
