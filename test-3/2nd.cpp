#include <iostream>
using namespace std;

class Compare {
private:
    int num1, num2;

public:
    // Constructor to initialize the numbers
    Compare(int a, int b) : num1(a), num2(b) {}

    // Friend function declaration
    friend int findMax(Compare obj);
};

// Friend function definition
int findMax(Compare obj) {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main() {
    int a, b;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Create an object of the Compare class
    Compare obj(a, b);

    // Use the friend function to find the maximum
    cout << "The maximum number is: " << findMax(obj) << endl;

    return 0;
}