#include <stdio.h>      // Standard I/O functions

// reverse() → Recursively 5 থেকে 1 পর্যন্ত প্রিন্ট করে, কারণ printf টা রিকার্সিভ কলের পরে
void reverse(int i) {
    if(i == 6) {        // ✅ Base Case – যখন i 6 হবে, তখন আর কিছু করবে না
        return;
    }

    reverse(i + 1);     // 🔁 আগে function নিজেকে call করছে পরের মান দিয়ে
    printf("%d\n", i);  // 🔃 Stack থেকে ফিরে আসার সময় প্রিন্ট করছে ⇒ reverse order এ প্রিন্ট হয়
}

int main() { 
    int i = 1;          // 🌱 Initialization – শুরু করছি 1 থেকে
    reverse(i);         // 📞 reverse() কল করলাম
    return 0;           // ✅ Program successfully finished
}

/* =====================================================
📥 Input:
    ➤ কোন ইনপুট লাগে না (i = 1 থেকে শুরু)

📤 Output:
    5
    4
    3
    2
    1

🧠 Short Note:
    • এটা হলো recursion এর post-order execution এর ক্লাসিক example।
    • `reverse(i + 1)` প্রথমে call হয়, এরপর `printf()` হয় – যেটা stack unwind করার সময় ঘটে।
    • তাই output আসে উল্টোভাবে ⇒ 5 → 1
    • যদি `printf()` উপরে থাকত, তাহলে output হতো 1 → 5

    যেমন:
    ```c
    printf("%d\n", i);
    reverse(i + 1);
    ```
    Output হতো:
    1  
    2  
    3  
    4  
    5  

⏱️ Time Complexity (TC):
    O(n) — এখানে n = 5, কারণ 5 বার recursive call হয়

💾 Space Complexity (SC):
    O(n) — recursion এর কারণে stack memory তে 5 টা ফ্রেম জমে

===================================================== */
