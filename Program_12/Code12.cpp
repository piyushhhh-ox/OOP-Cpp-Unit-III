#include <iostream>   // Provides input/output functions
#include <memory>     // Provides smart pointers such as unique_ptr
#include <vector>     // Provides the vector container

class Shape {
public:
    virtual double area() const = 0;          // Pure virtual function for calculating area
    virtual void displayName() const = 0;     // Pure virtual function for displaying name
    virtual ~Shape() = default;               // Virtual destructor
};

class Rectangle : public Shape {
private:
    double length;                            // Stores rectangle length
    double width;                             // Stores rectangle width

public:
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {} // Initializes length and width

    double area() const override {             // Overrides Shape's area function
        return length * width;                 // Calculates and returns rectangle area
    }

    void displayName() const override {        // Overrides Shape's displayName function
        std::cout << "Rectangle";              // Displays the shape name
    }
};

class Circle : public Shape {
private:
    double radius;                             // Stores circle radius

public:
    explicit Circle(double givenRadius) : radius(givenRadius) {} // Initializes radius

    double area() const override {              // Overrides Shape's area function
        constexpr double PI = 3.141592653589793; // Defines the value of PI
        return PI * radius * radius;             // Calculates and returns circle area
    }

    void displayName() const override {         // Overrides Shape's displayName function
        std::cout << "Circle";                  // Displays the shape name
    }
};

int main() {
    std::vector<std::unique_ptr<Shape>> shapes; // Creates a vector of Shape smart pointers

    shapes.push_back(std::make_unique<Rectangle>(5.0, 3.0)); // Adds a Rectangle object
    shapes.push_back(std::make_unique<Circle>(2.0));          // Adds a Circle object

    for (const auto& shape : shapes) {         // Loops through all shape objects
        shape->displayName();                  // Calls the correct displayName function
        std::cout << " Area: " << shape->area() << '\n'; // Calls the correct area function
    }

    return 0;                                  // Ends the program successfully
}
