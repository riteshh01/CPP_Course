#include <iostream>
using namespace std;

// What is Function Overloading? (C++)

// Function Overloading means having multiple functions

// with the SAME NAME but DIFFERENT:
//   ✔ Number of parameters
//   ✔ Type of parameters
//   ✔ Order of parameters

// Why use it?
// → Improves readability
// → Same operation for different data types
// → No need to create different names like addInt, addFloat

// Overloaded Functions (same name: add)

// 1) Add two integers
int add(int a, int b) {
    return a + b;
}

// 2) Add two floats
float add(float a, float b) {
    return a + b;
}

// 3) Add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    // Calling overloaded functions

    // Function selected based on argument types
    cout << "add(int, int): " << add(5, 10) << endl;
    cout << "add(float, float): " << add(2.5f, 3.7f) << endl;
    cout << "add(int, int, int): " << add(1, 2, 3) << endl;

    return 0;
}