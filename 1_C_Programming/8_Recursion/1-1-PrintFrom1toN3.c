#include <stdio.h>      // Standard input–output functions এর জন্য

// hello() ফাংশন – রিকার্সিভলি 1 থেকে 5 পর্যন্ত সংখ্যা প্রিন্ট করে
void hello(int i) {
    if(i == 6) {         // ✅ Base case – যখন i == 6, তখন আর রিকারশন চলবে না
        return;          // Recursion থামানোর জন্য return
    }
    printf("%d\n", i);   // 🔢 বর্তমান i ভ্যালু প্রিন্ট করা হচ্ছে
    hello(i + 1);        // 🔁 পরবর্তী ভ্যালুর জন্য রিকারশন
}

int main() { 
    int i = 1;           // 🌱 শুরু করছি 1 থেকে
    hello(i);            // 👉 hello ফাংশন কল করা হচ্ছে i=1 দিয়ে
    return 0;            // ✅ Execution সফলভাবে শেষ
}

/* =====================================================
   📥 Input:
       ➤ কোনও ইনপুট লাগে না (Hardcoded i = 1)

   📤 Output:
       1
       2
       3
       4
       5

   🧠 Short Note:
       • Recursion এর সাহায্যে 1 থেকে 5 পর্যন্ত সংখ্যা প্রিন্ট করা হয়েছে।
       • Base condition `if(i == 6)` রিকারশন থামানোর জন্য অপরিহার্য।
       • Recursion এর classic উদাহরণ — যেটা iteration দিয়েও করা যেত।

   ⏱️ Time Complexity (TC):
       O(n) — এখানে n = 5 বার ফাংশন কল হয়েছে (1 থেকে 5 পর্যন্ত)

   💾 Space Complexity (SC):
       O(n) — প্রতিটি recursive call stack-এ যায়, তাই stack এ 5 টা ফ্রেম জমা হয়।
   ===================================================== */
