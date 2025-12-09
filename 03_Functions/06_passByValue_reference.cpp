#include <iostream>
using namespace std;


// PASS BY VALUE vs PASS BY REFERENCE

// PASS BY VALUE:
// - Function ko variable ki COPY milti hai
// - Original variable CHANGE nahi hota
// - Safe but slower (copy banti hai)


void passByValue(int x) {
    x = 100;   // Sirf COPY change ho rahi hai
}


// PASS BY REFERENCE:
// - Function ko ORIGINAL variable ka reference (address) milta hai
// - Changes directly ORIGINAL variable me reflect honge
// - Faster & memory efficient

void passByReference(int &x) {
    x = 100;   // Original variable change ho jayega
}

int main() {
    int a = 10;
    int b = 10;

    cout << "Before passByValue, a = " << a << endl;
    passByValue(a);
    cout << "After passByValue,  a = " << a << "  (No change)" << endl;

    cout << "\nBefore passByReference, b = " << b << endl;
    passByReference(b);
    cout << "After passByReference, b = " << b << "  (Value changed)" << endl;

    return 0;
}


// +-----------------------+-----------------------------+-------------------------------+
// |       FEATURE         |       PASS BY VALUE         |      PASS BY REFERENCE        |
// +-----------------------+-----------------------------+-------------------------------+
// | What is passed?       | Copy of variable            | Original variable ka address  |
// +-----------------------+-----------------------------+-------------------------------+
// | Does original change? | NO                          | YES                           |
// +-----------------------+-----------------------------+-------------------------------+
// | Memory usage          | More (copy banti hai)       | Less (no copy)                |
// +-----------------------+-----------------------------+-------------------------------+
// | Speed                 | Slower                      | Faster                        |
// +-----------------------+-----------------------------+-------------------------------+
// | Safety                | Safer (original safe)       | Risky (original modify hoga)  |
// +-----------------------+-----------------------------+-------------------------------+
// | Syntax                | fun(a);                     | fun(a); AND param is int &x   |
// +-----------------------+-----------------------------+-------------------------------+
// | Use case              | Jab changes NA chahiye      | Jab changes chahiye           |
// +-----------------------+-----------------------------+-------------------------------+
// | Example               | fun(int x)                  | fun(int &x)                   |
// +-----------------------+-----------------------------+-------------------------------+