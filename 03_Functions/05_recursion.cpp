
#include <iostream>
using namespace std;


// RECURSION

// Recursion matlab: function khud ko hi call karta hai.

// Real-life example:
//   Tum ek aadmi ko bolo "5 tak counting bolna".
//   Wo bolega: 1, fir bolega "4 tak counting bol de".
//   Fir agla bolega "3 tak counting bol de"...
//   Jab tak 1 nahi aa jata.

// Recursion me 2 cheezein BAHUT important hoti hain:

// 1️⃣ Base Case  → jis point par recursion ruk jaye
// 2️⃣ Recursive Step → jahan function khud ko phir call kare


// Example: Factorial using recursion
// factorial(n) = n * factorial(n-1)
// Base Case: factorial(0) = 1

int factorial(int n) {
    if (n == 0) {
        return 1;   // Base Case
    }
    return n * factorial(n - 1);  // Recursive Step
}

int main() {
    cout << "Factorial of 5 = " << factorial(5) << endl;  // Output: 120

    return 0;
}