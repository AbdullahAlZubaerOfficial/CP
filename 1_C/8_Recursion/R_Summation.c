#include <stdio.h>
#include <stdlib.h>  // abs() function er jonno lagbe

// ✅ Recursive function to calculate sum of array elements
void SumOfArray(int n, int ar1[], int sum, int i) {
    if (i == n) {                         // 👉 Base Case: sob element check hoye gele
        printf("%d", abs(sum));           // ✅ Absolute sum print kore
        return;
    }

    sum = sum + ar1[i];                   // ➕ current element jog kora hocche
    SumOfArray(n, ar1, sum, i + 1);       // 🔁 next index e recursion call
}

int main() {
    int n;
    scanf("%d", &n);                      // 🔢 user theke input n, array size

    int ar1[n];                           // 📦 n size er array declare

    for (int i = 0; i < n; i++) {
        scanf("%d", &ar1[i]);            // 📥 array er element input nicchi
    }

    SumOfArray(n, ar1, 0, 0);            // 🔁 recursion call with sum = 0, start index = 0

    return 0;
}


/*
=======================
📥 Input:
5
1 -2 3 -4 5

📤 Output:
3

📘 Short Note:
- Ei program ta recursion use kore array er element gulo jog kore.
- Tarpor abs() use kore result ke positive kore print kore.
- Example: 1 + (-2) + 3 + (-4) + 5 = 3 → abs(3) = 3 print hoy.

=======================
⏱ Time Complexity (TC):
O(n)
👉 n bar recursion call hocche — ekta element ekbar jog korse.

=======================
🧠 Space Complexity (SC):
O(n)
👉 n bar recursion call stack e thakbe, tai linear space lagbe.
=======================
*/
