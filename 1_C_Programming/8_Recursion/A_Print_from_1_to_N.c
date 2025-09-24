#include <stdio.h>  // Standard input-output function

// print() → Recursively 1 থেকে n পর্যন্ত প্রিন্ট করে
void print(int n, int i) {
    if(i > n) {           // ✅ Base Case → যখন i > n তখন রিকারশন থেমে যাবে
        return;
    }
    printf("%d\n", i);    // 🔢 বর্তমান i প্রিন্ট করো
    print(n, i + 1);      // 🔁 রিকার্সিভলি পরবর্তী সংখ্যা প্রিন্ট করতে ফাংশন কল
}

int main() { 
    int n;
    scanf("%d", &n);      // 🔢 ইউজার থেকে সংখ্যা ইনপুট নেওয়া হলো

    int i = 1;            // 🌱 শুরু 1 থেকে
    print(n, i);          // 📞 ফাংশন কল — 1 থেকে n পর্যন্ত প্রিন্ট করবে

    return 0;             // ✅ প্রোগ্রাম সফলভাবে শেষ
}

/* =====================================================
📥 Input:
    5

📤 Output:
    1
    2
    3
    4
    5

🧠 Short Note:
    • এই কোডটি recursion ব্যবহার করে 1 থেকে n পর্যন্ত সংখ্যা প্রিন্ট করে।
    • Base Case: যখন i > n হয়, তখন recursion থামে।
    • প্রতিবার i ইনক্রিমেন্ট হয়ে আবার function call হয়।
    • এটা recursion এর pre-order call structure — কারণ আগে প্রিন্ট হচ্ছে, পরে call হচ্ছে।

⏱️ Time Complexity (TC):
    O(n) — প্রতি সংখ্যার জন্য একবার করে ফাংশন কল হচ্ছে

💾 Space Complexity (SC):
    O(n) — recursion call stack এ n বার ফাংশন জমা হয়

===================================================== */
