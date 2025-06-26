#include <stdio.h>

// 🔁 Recursive function to calculate sum of array elements
void printSum(int i, long long int n, long long int ar1[], long long int sum) {
    if (i > n) {                   // ⛔ base case: শেষ index-এর পরে চলে গেলে sum print করে থেমে যাবে
        printf("%lld", sum);       // 🖨️ final sum print
        return;
    }

    printSum(i + 1, n, ar1, sum + ar1[i]);  // 🔁 পরবর্তী index এ গিয়ে sum আপডেট করে call
}

int main() {

    long long int n;
    scanf("%lld", &n);             // 📥 array size ইনপুট

    long long int ar1[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &ar1[i]);    // 📥 array elements ইনপুট
    }

    printSum(0, n - 1, ar1, 0);    // 🚀 recursion শুরু index 0 থেকে, শুরুতে sum = 0
    return 0;
}


/* =====================================================
📥 Input:
5
1 2 3 4 5

📤 Output:
15

🧠 Short Note:
এই প্রোগ্রামটি recursion ব্যবহার করে একটি array-এর সব সংখ্যার যোগফল বের করে।  
প্রতিবার একেকটি index-এর মান যোগ করে recursion এর মাধ্যমে এগিয়ে যায়।

⏱️ Time Complexity (TC):  O(n)   // n বার ফাংশন কল হবে  
💾 Space Complexity (SC): O(n)   // recursion stack-এ সর্বোচ্চ n টা ফ্রেম যাবে
===================================================== */
