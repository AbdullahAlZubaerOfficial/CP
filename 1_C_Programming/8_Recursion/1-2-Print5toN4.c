#include <stdio.h>      // Standard input-output functions এর জন্য

// hello() ফাংশন – রিকার্সিভলি 5 থেকে 1 পর্যন্ত সংখ্যা প্রিন্ট করে
void hello(int i) {

    if(i == 0) {         // ✅ Base case – i 0 হলে আর কিছু করব না, ফাংশন থেমে যাবে
        return;          // Recursion থামানোর জন্য return
    }

    printf("%d\n", i);   // 🔢 বর্তমান i প্রিন্ট হচ্ছে
    hello(i - 1);        // 🔁 পরবর্তী (কম) ভ্যালু নিয়ে রিকারশন চালানো হচ্ছে
}

int main() { 
    int i = 5;           // 🌱 শুরু করছি 5 থেকে
    hello(i);            // 👉 hello() কল করা হচ্ছে i=5 দিয়ে
    return 0;            // ✅ Execution সফলভাবে শেষ
}

/* =====================================================
   📥 Input:
       ➤ কোনও ইনপুট লাগে না (Hardcoded i = 5)

   📤 Output:
       5
       4
       3
       2
       1

   🧠 Short Note:
       • Recursion দিয়ে descending order এ সংখ্যা প্রিন্ট করা হয়েছে।
       • Base condition `if(i == 0)` রিকারশন থামায়।
       • প্রতিবার `i` এক করে কমিয়ে ফাংশন কল হচ্ছে।
       • এটা recursion এর একটি basic ও গুরুত্বপূর্ণ উদাহরণ। 🧠

   ⏱️ Time Complexity (TC):
       O(n) — এখানে n = 5 (i এর মান যতবার decrement হবে ততবার কল হবে)

   💾 Space Complexity (SC):
       O(n) — প্রতিটি recursive call stack এ যায় ⇒ stack depth = n = 5
   ===================================================== */
