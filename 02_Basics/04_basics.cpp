
// Constants & Literals in C++



// ⁡⁣⁣⁢Constant = aisi value jo program run hone tak kabhi change nahi hoti.⁡

// +-----------+------------------------------+----------------------+
// | Keyword   | Meaning                      | Example              |
// +-----------+------------------------------+----------------------+
// | const     | Read-only variable           | const int x = 5;     |
// | #define   | Macro constant (no type)     | #define MAX 100      |
// | constexpr | Compile-time constant        | constexpr int n = 3; |
// +-----------+------------------------------+----------------------+


//  const vs #define
// 	•	const = type-safe
// 	•	#define = text replacement (no type checking)



// ⁡⁣⁣⁢Literal = actual fixed value jo directly code me likhi hoti hai.⁡

// +-----------------+------------------------------+--------------------------+
// | Literal Type    | Example                      | Description              |
// +-----------------+------------------------------+--------------------------+
// | Integer         | 10, -5, 0                    | Whole numbers            |
// | Floating Point  | 3.14, -0.55                  | Decimal values           |
// | Character       | 'A', 'z', '7'                | Single char (ASCII)      |
// | String          | "Hello", "C++"               | Sequence of chars        |
// | Boolean         | true, false                  | Logic values             |
// | Escape          | '\n', '\t', '\\'             | Special characters       |
// +-----------------+------------------------------+--------------------------+



#include <iostream>
using namespace std;

const float PI = 3.14; 
#define MAX_USERS 100
constexpr int DAYS = 7;

int main() {
    char grade = 'A';         // char literal
    string msg = "Hello";     // string literal
    bool ok = true;           // boolean literal

    cout << "ASCII of grade: " << int(grade);

    return 0;
}



// Constants are values that cannot change, and literals are the fixed values written directly in the code.

