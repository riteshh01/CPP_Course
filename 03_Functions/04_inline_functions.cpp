

#include <iostream>
using namespace std;

// INLINE FUNCTIONS

// Inline function ka main purpose: function call ka overhead kam karna.

// Normally jab function call hota hai, CPU ko:
//   - function address jump karna padta hai
//   - stack frame banana padta hai
//   - return karna hota hai
// Yeh sab extra steps hote hain.

// ⁡⁣⁣⁢Inline function me compiler function ke code ko directly copy-paste kar deta hai jahan call hota hai.⁡
// ⁡⁢⁣⁣Isse function call ka overhead khatam.⁡

// Kab use karein?
// ✔ Chhote functions
// ✔ Frequently used functions
// ✔ Getter/setter types

// Kab NA use karein?
// ❌ Bade functions
// ❌ Recursion (inline possible hi nahi hota)
// ❌ Loops wale heavy functions


// Simple inline function example
inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Square of 5 = " << square(5) << endl;
    cout << "Square of 10 = " << square(10) << endl;
    return 0;
}