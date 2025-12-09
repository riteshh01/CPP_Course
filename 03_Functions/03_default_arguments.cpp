#include <iostream>
using namespace std;


// DEFAULT ARGUMENTS

// Default arguments ka matlab hota hai, agar function call karte time tum koi parameter na do, to function apni default assigned value use karega.

// Simple words => "Agar tum value nahi doge, to main apni default wali le lunga."

// Yeh kaafi helpful hai jab:
// Kuch parameters optional ho
// Same function ke multiple versions nahi banana ho


// Yahan 'b' ki default value 10 hai.
int add(int a, int b = 10) {
    return a + b;
}

int main() {
    // Case 1: User only gives 'a'
    // 'b' automatically 10 ho jayega
    cout << add(5) << endl;  // Output: 15

    // Case 2: User gives both values
    cout << add(5, 20) << endl;  // Output: 25

    return 0;
}
