#include <stdio.h>          // 💡 Standard I/O header

// 🔁 EvenIndices() → রিকার্সিভভাবে array-এর even indices উল্টো ক্রমে প্রিন্ট করে
void EvenIndices(int n, int ar[], int i) {

    if (i >= n) {           // ⛔ base case: index সীমা ছাড়িয়ে গেলে থামবে
        return;
    }

    EvenIndices(n, ar, i + 1);  // 🔁 আগে ডিপারে (i+1) গিয়ে শেষে ফিরে এলেই প্রিন্ট হবে

    if (i % 2 == 0) {       // ✅ even index কি?
        printf("%d ", ar[i]);   // 📤 even indexের element প্রিন্ট
    }
}

int main() {

    int n;                      // 🔢 array size
    scanf("%d", &n);            // 📥 ইনপুট নেই n

    int ar[n];                  // 🗂️ Variable Length Array (VLA)
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);    // 📥 array elements ইনপুট
    }

    EvenIndices(n, ar, 0);      // 🚀 recursion শুরু i = 0 থেকে
    return 0;                   // ✅ successful termination
}


/* =====================================================
📥 Input 1:
4
1 4 2 7

📤 Output 1:
2 1 

📥 Input 2:
7
1 5 8 2 3 9 11

📤 Output 2:
11 3 8 1 

🧠 Short Note:
এই প্রোগ্রামটি recursion ব্যবহার করে even indices (0, 2, 4, …)-এর মানগুলো **উল্টো ক্রমে** প্রিন্ট করে।  
✔️ `EvenIndices()` প্রথমে যতদূর সম্ভব এগিয়ে যায়, তারপর stack unwinding-এর সময় even indices প্রিন্ট করে, তাই output আসে highest even index → 0।

⏱️ Time Complexity (TC):  O(n)   // n বার ফাংশন কল  
💾 Space Complexity (SC): O(n)   // call stack-এ সর্বোচ্চ n টি ফ্রেম
===================================================== */
