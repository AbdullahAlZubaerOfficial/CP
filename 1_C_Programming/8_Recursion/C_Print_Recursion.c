#include <stdio.h>  // Standard I/O library include

// 🔁 Recursion() → n বার "I love Recursion" প্রিন্ট করে
void Recursion(int n) {
    if (n == 0) {           // ✅ base case → যখন n = 0, তখন আর কিছু করবে না
        return;
    }

    printf("I love Recursion\n");  // ❤️ প্রিন্ট করে বার্তা

    Recursion(n - 1);       // 🔁 প্রতি বার n কমিয়ে আবার ফাংশন কল
}

int main() {
    int n;                  // 🔢 ইউজার ইনপুট ভ্যারিয়েবল
    scanf("%d", &n);        // 📥 ইনপুট নিচ্ছি

    Recursion(n);           // 📞 রিকার্সিভ ফাংশন কল

    return 0;               // ✅ প্রোগ্রাম সফলভাবে শেষ
}


/* =====================================================
📥 Input:
3

📤 Output:
I love Recursion
I love Recursion
I love Recursion

🧠 Short Note:
এই প্রোগ্রামটি recursion ব্যবহার করে `n` বার একই বার্তা প্রিন্ট করে। 
`Recursion(n)` ফাংশন প্রতিবার `n-1` দিয়ে নিজেকেই কল করে যতক্ষণ না `n == 0` হয়।

⏱️ Time Complexity (TC):  O(n)     // n বার ফাংশন কল
💾 Space Complexity (SC): O(n)     // call stack-এ n টা ফ্রেম জমা হয়
===================================================== */
