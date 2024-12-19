#include <iostream>
using namespace std;
class MyClass {
public:int value;
    // Constructor
    MyClass(int val) {
        value = val;
    }
};

int main() {
    MyClass obj(42);
    cout << obj.value << endl;  // Output: 42
    return 0;
}
