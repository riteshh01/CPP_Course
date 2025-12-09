#include <iostream>
using namespace std;

// ⁡⁣⁣⁢Declaring & defining & Parameters & return values⁡


// What is a Function?

// A function is a block of code designed to perform a specific task.
// It helps in code reusability, cleaner structure, and better readability.
// You write the function once and use (call) it multiple times.

// Example: add(a, b) → returns the sum of two numbers.

// ⁡⁣⁣⁢Arguments vs Parameters⁡

// ⁡⁢⁣⁣PARAMETERS:⁡ Variables written in the function definition.
// Example: int add(int a, int b) → 'a' and 'b' are PARAMETERS.

// ⁡⁢⁣⁣ARGUMENTS:⁡ Actual values passed when calling the function.
// Example: add(5, 10) → 5 and 10 are ARGUMENTS.


// Function Declaration (Prototype)
// Tells the compiler that a function named 'add' exists.
int add(int a, int b);  // Only the structure, no body here

int main() {
    // Calling the function with arguments 5 and 10
    int result = add(5, 10);

    cout << "Sum = " << result << endl;
    return 0;
}

// Function Definition
// Contains the actual code of the function
// PARAMETERS receive the values passed from arguments
int add(int a, int b) {
    return a + b;   // returns the calculated sum
}
