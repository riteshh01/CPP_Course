#include <iostream>
using namespace std;

int main(){

// Control flow (if, else, switch) in C++

// if Statement => Condition true ho to code chalega.

int age = 18;

if (age >= 18) {
    cout << "You are an adult";
}


// if–else Statement => Condition false ho to alternate block chalega.

int marks = 80;

if (marks >= 40) {
    cout << "Pass";
} else {
    cout << "Fail";
}

// if–else if–else Ladder => Multiple conditions check karne ke liye.

int score = 100;

if (score >= 90) {
    cout << "A Grade";
}
else if (score >= 75) {
    cout << "B Grade";
}
else if (score >= 50) {
    cout << "C Grade";
}
else {
    cout << "Fail";
}



// switch Statement => Multiple choices handle karne ka cleaner method (better alternative to long if-else ladders).

int day = 3;

switch (day) {
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    case 3: cout << "Wednesday"; break;
    default: cout << "Invalid day";
}

// switch int, char, enum par best kaam karta hai (float/double allowed nahi)

return 0;

}