//Write a C++ program to find first and last digit of a number using function define outside of class.
#include <iostream>
using namespace std;

int FirstDigit(int number) {
    number = (number); 
    while (number >= 10) {
        number = number/ 10;
    }
    return number;
}
int LastDigit(int number) {
    return (number % 10); 
}

int main() {
    int number;
    cout << "Enter the number: \n";
    cin >> number;

    int firstDigit = FirstDigit(number);
    int lastDigit = LastDigit(number);

    cout << "First digit"<< firstDigit << "\n";
    cout << "Last digit"<< lastDigit << "\n";

}
