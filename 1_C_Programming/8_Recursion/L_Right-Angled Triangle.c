#include <stdio.h>      // 🌟 Standard I/O header ফাইল

/*------------- ★ star() → count সংখ্যক * প্রিন্ট করে -------------*/
void star(int count){
    if(count == 0){         // ⛔ base-case: আর * লাগবে না
        return;             
    }
    printf("*");            // 1-টা *
    star(count - 1);        // 🔁 বাকি *-এর জন্য recursive call
}

/*------------- 📤 OuterLoop() → প্রতিটি লাইন আঁকে -------------*/
void OuterLoop(int i, int n){
    if(i >= n){             // ⛔ base-case: সব লাইন হয়ে গেছে
        return;
    }
    star(i + 1);            // 🔸 বর্তমান লাইনে (i+1)-টা *
    printf("\n");           // ▶️ newline
    OuterLoop(i + 1, n);    // 🔁 পরের লাইনের জন্য recursive call
}

int main(){
    int n;                  // 🏷️ মোট লাইন সংখ্যা
    scanf("%d", &n);        // 📥 ইউজার ইনপুট
    OuterLoop(0, n);        // 🚀 pattern আঁকা শুরু (i = 0)
    return 0;               // ✅ প্রোগ্রাম সমাপ্ত
}

/* =====================================================
📥 Input:
4

📤 Output:
*
**
***
****

🧠 Short Note:
• `OuterLoop()` উপরে থেকে নিচে লাইন সংখ্যা বাড়িয়ে ডাকে,  
  আর প্রতিটি লাইনে `star()` (i + 1)-টি ★ প্রিন্ট করে।  
• মোট প্রিন্ট হওয়া ক্যারেক্টার 1 + 2 + … + n ≈ n²⁄2, তাই TC = O(n²)।

⏱️ Time Complexity (TC):  O(n²)   // মোট প্রিন্ট হওয়া ক্যারেক্টার  
💾 Space Complexity (SC): O(n)    // call-stack depth সর্বোচ্চ n
===================================================== */
