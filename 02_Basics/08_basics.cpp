#include<iostream>
using namespace std;

int main(){

// Loops (for, while, do-while) in C++

// 1) for Loop => Jab aapko iterations count pata ho, tab best.

// for (initialization; condition; update) {
//     loop body
// }

for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}


// 2) while Loop => Jab aapko starting condition pata ho, but end kab hoga uncertain ho (e.g., input until user stops).

// while (condition) {
//     // loop body
// }

int i = 1;
while (i <= 5) {
    cout << i << " ";
    i++;
}


// 3) do-while Loop => Pehle body chalegi at least once, phir condition check hogi.

// do {
//     // loop body
// } while (condition);


int i = 1;
do {
    cout << i << " ";
    i++;
} while (i <= 5);



}


 