#include <iostream>
using namespace std;

class Circle {
protected:
    double radius; // Radius of the circle

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const {
        // Calculates the area of the circle
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Circle {
private:
    double width; // Width of the rectangle

public:
    Rectangle(double r, double w) : Circle(r), width(w) {}

    double calculateArea() const {
        // Calculates the area of the rectangle
        return radius * width;
    }
};

int main() {
    // Create an object of the Rectangle class
    Rectangle rectangle(5.0, 10.0); // Radius of the circle (or length of rectangle) = 5.0, Width of rectangle = 10.0

    // Calculate and display the area of the circle
    cout << "Area of the Circle: " << rectangle.Circle::calculateArea() << endl;

    // Calculate and display the area of the rectangle
    cout << "Area of the Rectangle: " << rectangle.calculateArea() << endl;

    return 0;
}
