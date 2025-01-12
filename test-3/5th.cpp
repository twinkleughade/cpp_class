#include <iostream>
using namespace std;

int main() {
    // Define an anonymous class within the main function
    class {
    public:
        // Method to swap two numbers
        void swap(int &a, int &b) {
            int temp = a;
            a = b;
            b = temp;
            cout << "After swapping: a = " << a << ", b = " << b << endl;
        }

        // Method to print the multiplication table of a number
        void table(int num) {
            cout << "Multiplication table of " << num << ":" << endl;
            for (int i = 1; i <= 10; ++i) {
                cout << num << " x " << i << " = " << num * i << endl;
            }
        }
    } anonymousClass; // Create an instance of the anonymous class

    // Demonstrate the swap method
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    anonymousClass.swap(x, y);

    // Demonstrate the table method
    int num;
    cout << "Enter a number to display its multiplication table: ";
    cin >> num;
    anonymousClass.table(num);

    return 0;
}