

// In this we are going to talk about break and continue statement.

#include<iostream>
using namespace std;

int main(){


// 1) break loop ko turant rok deta hai. Loop ke andar jahan break milta hai, execution wahin se bahar nikal jata hai.

for (int i = 1; i <= 5; i++) {
    if (i == 3)
        break;          // loop yahi exit ho jayega
    cout << i << " ";
}

// 2) continue loop ko skip karta hai us specific iteration ke liye. Loop exit nahi hota — bas current iteration skip hoti hai, next iteration continue hoti hai.

for (int i = 1; i <= 5; i++) {
    if (i == 3)
        continue;      // 3 print nahi hoga
    cout << i << " ";
}

}