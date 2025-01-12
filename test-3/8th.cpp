#include <iostream>
// #include <cmath>
using namespace std;

// Base class Shape
class Shape {
public:
    virtual double area() = 0;  // Pure virtual function
    virtual ~Shape() {}  // Virtual destructor
};

// Circle class inheriting Shape
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return 3.14159 * radius * radius;  // Area of circle: πr²
    }
};

// Rectangle class inheriting Shape
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() override {
        return length * width;  // Area of rectangle: length * width
    }
};

// Triangle class inheriting Shape
class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area() override {
        return 0.5 * base * height;  // Area of triangle: 0.5 * base * height
    }
};

// Function to calculate area using polymorphism
void calculateArea(Shape* shape) {
    cout << "Area: " << shape->area() << endl;
}

int main() {
    // Create objects of different shapes
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(4.0, 3.0);

    // Using polymorphism to calculate area of different shapes
    cout << "Circle: ";
    calculateArea(&circle);
    
    cout << "Rectangle: ";
    calculateArea(&rectangle);
    
    cout << "Triangle: ";
    calculateArea(&triangle);

    return 0;
}
