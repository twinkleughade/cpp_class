#include <iostream>
using namespace std;

// Base class
class A {
public:
    A() {
        cout << "Class A constructor\n";
    }

    void display() {
        cout << "Class A method\n";
    }
};

// Derived class B inherits from A
class B : public A {
public:
    B() {
        cout << "Class B constructor\n";
    }

    void display() {
        cout << "Class B method\n";
    }
};

// Derived class C inherits from A
class C : public A {
public:
    C() {
        cout << "Class C constructor\n";
    }

    void display() {
        cout << "Class C method\n";
    }
};

// Derived class D inherits from both B and C
class D : public B, public C {
public:
    D() {
        cout << "Class D constructor\n";
    }
};

int main() {
    D d;
    d.display();  // Ambiguity: Which `display` method to call, from B or C?

    return 0;
}
