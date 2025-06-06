#include <stdio.h>

// 🔁 Recursive function to calculate factorial
long long int factorial(long long int n) {
    if (n == 1 || n == 0) {
        return 1; // ✅ Base case: 0! = 1 and 1! = 1
    }

    long long int multiply = factorial(n - 1); // 🔁 Recursive call
    return n * multiply; // ➕ Multiply current number with result of (n-1)!
}

int main() { 
    long long int n;
    scanf("%lld", &n); // 📥 Input number

    long long int ans = factorial(n); // 🔁 Get factorial result

    printf("%lld", ans); // 📤 Print result
    
    return 0;
}

/*
==========================
📥 Input:
5

📤 Output:
120

📥 Input:
0

📤 Output:
1
==========================

🧠 Short Note:
- এই প্রোগ্রামটি রিকার্শনের মাধ্যমে n এর factorial বের করে।
- factorial(n) = n × factorial(n-1)
- base case: factorial(0) = 1

==========================
⏱ Time Complexity (TC): O(n)
    ➤ একবারে n থেকে 1 পর্যন্ত recursive call হয়

💾 Space Complexity (SC): O(n)
    ➤ প্রত্যেক call stack-এ গিয়ে জমা হয়

📌 Note:
- `long long int` ব্যবহার করা হয়েছে কারণ factorial দ্রুত অনেক বড় হয়ে যায়।
==========================
*/