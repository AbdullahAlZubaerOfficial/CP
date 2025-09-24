#include <stdio.h>      // standard input-output header

// reverse() – n থেকে 1 পর্যন্ত রিকার্সিভলি সংখ্যা প্রিন্ট করে
void reverse(int i) {
    if (i < 1) {            // ✅ base case → i 1-এর নিচে গেলে থামবে
        return;
    }

    printf("%d", i);        // 🔢 বর্তমান i প্রিন্ট

    if (i != 1) {           // ❗ শেষ সংখ্যার পরে আর স্পেস না
        printf(" ");
    }

    reverse(i - 1);         // 🔁 পরবর্তী (i-1) ভ্যালু দিয়ে রিকার্সিভ কল
}

int main() {
    int n;                  // 🔢 ইনপুট ভ্যারিয়েবল
    scanf("%d", &n);        // ইউজার থেকে n ইনপুট

    reverse(n);             // 📞 রিকার্সিভ ফাংশন কল
    return 0;               // ✅ সফল সমাপ্তি
}

/* =====================================================
📥 Input:
4

📤 Output:
4 3 2 1

🧠 Short Note:
এই প্রোগ্রামটি recursion ব্যবহার করে n থেকে 1 পর্যন্ত সংখ্যা উল্টো করে প্রিন্ট করে।
`reverse()` ফাংশনে base case `i < 1` recursion থামায় এবং
`printf` আগে হওয়ায় output pre-order style-এ n → 1 বের হয়।

⏱️ Time Complexity (TC):  O(n)   // n-বার ফাংশন কল  
💾 Space Complexity (SC): O(n)   // call stack-এ n-টি ফ্রেম
===================================================== */
