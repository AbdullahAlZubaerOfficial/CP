#include <stdio.h>  // 🌟 Standard I/O header

// space() → নির্দিষ্ট সংখ্যক space প্রিন্ট করে (recursive)
void space(int count) {
    if (count == 0) {    // ⛔ base-case: আর space লাগবে না
        return;
    }
    printf(" ");         // 1টা space
    space(count - 1);    // 🔁 বাকি space-এর জন্য recursive call
}

// star() → নির্দিষ্ট সংখ্যক * প্রিন্ট করে (recursive)
void star(int count) {
    if (count == 0) {    // ⛔ base-case: আর star লাগবে না
        return;
    }
    printf("*");         // 1টা *
    star(count - 1);     // 🔁 বাকি star-এর জন্য recursive call
}

// outerLoop() → প্রতিটি লাইন বানায়: space + star, তারপর newline
void outerLoop(int i, int n) {
    if (i > n) {         // ⛔ base-case: সব লাইন হয়ে গেলে থামবে
        return;
    }

    space(n - i);        // 🔹 leading spaces
    star(2 * i - 1);     // 🔸 মাঝের stars   (পিরামিড আলাদা হয়)
    printf("\n");        // ▶️ পরের লাইনে যাওয়া

    outerLoop(i + 1, n); // 🔁 পরবর্তী লাইন
}

int main() {
    int n;               // 🏷️ কয়টা লাইন হবে
    scanf("%d", &n);     // 📥 ইনপুট

    outerLoop(1, n);     // 🚀 পিরামিড শুরু (i = 1)

    return 0;            // ✅ প্রোগ্রাম শেষ
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
• এই প্রোগ্রামটি recursion দিয়ে একটি left-aligned pyramid (উল্টো থ্রাপলা) আঁকে।  
• প্রতি লাইনে (n – i) space ও (2·i – 1) star প্রিন্ট হয়।  
• space(), star(), outerLoop()—তিনটি recursive ফাংশন মিলেই কাজটা করে।

⏱️ Time Complexity (TC): O(n²)  
   ▸ মোট space + star প্রিন্ট ≈ 1 + 3 + ... + (2n – 1) = n²  

💾 Space Complexity (SC): O(n)  
   ▸ call-stack depth সর্বোচ্চ n (outerLoop) + n (star) ≈ O(n)
===================================================== */
