#include <stdio.h>      // 🌟 Standard I/O header

/* --------- ⬜ space() → নির্দিষ্ট সংখ্যক space প্রিন্ট করে --------- */
void space(int count){
    if(count == 0) return;   // ⛔ base-case: আর স্পেস লাগবে না
    printf(" ");             // ১টা space
    space(count - 1);        // 🔁 বাকি space-এর জন্য recursive call
}

/* --------- ⭐ star() → নির্দিষ্ট সংখ্যক * প্রিন্ট করে --------- */
void star(int count){
    if(count == 0) return;   // ⛔ base-case: আর * লাগবে না
    printf("*");             // ১টা *
    star(count - 1);         // 🔁 বাকি *-এর জন্য recursive call
}

/* --------- 📤 outerLoop() → প্রতি লাইনে space + star প্রিন্ট --------- */
void outerLoop(int i, int n){
    if(i > n) return;                // ⛔ সব লাইন হয়ে গেলে থামবে

    space(n - i);                    // ⬅️ leading spaces
    star(2 * i - 1);                 // ➡️ 2·i − 1 টি তারকা
    printf("\n");                    // ▶️ newline

    outerLoop(i + 1, n);             // 🔁 পরের লাইন
}

int main(){
    int n;
    scanf("%d", &n);                 // 📥 ইনপুট: কত লাইন
    outerLoop(1, n);                 // 🚀 পিরামিড আঁকা শুরু
    return 0;                        // ✅ সফল সমাপ্তি
}

/* =====================================================
📥 Input:
4

📤 Output:
   *
  ***
 *****
*******

🧠 Short Note:
- এই প্রোগ্রামটি recursion ব্যবহার করে একটি **center-aligned pyramid** আঁকে।  
- প্রতিটি লাইনে প্রথমে `n − i` টি স্পেস ও পরে `2·i − 1` টি তারকা প্রিন্ট হয়।  
- space() ও star() পৃথক recursive ফাংশন, outerLoop() মূল লুপ।

⏱️ Time Complexity (TC): **O(n²)**  
   ▸ মোট প্রিন্ট হওয়া ক্যারেক্টার ≈ 1 + 3 + ⋯ + (2n−1) = n²

💾 Space Complexity (SC): **O(n)**  
   ▸ recursion call-stack-এর গভীরতা সর্বোচ্চ n
===================================================== */
