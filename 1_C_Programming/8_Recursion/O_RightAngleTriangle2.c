#include <stdio.h>          // 🌟 Standard I/O header

/*------------- 🔢 star() → 1 থেকে count পর্যন্ত সংখ্যা প্রিন্ট -------------*/
void star(int j, int count){    
    if(j > count){          // ⛔ base-case: j limit ছাড়ালে থামবে
        return;
    }
    printf("%d", j);        // 🔢 বর্তমান সংখ্যা প্রিন্ট
    star(j + 1, count);     // 🔁 পরবর্তী সংখ্যার জন্য recursive call
}

/*------------- ⬜ space() → নির্দিষ্ট সংখ্যক space প্রিন্ট -------------*/
void space(int count){
    if(count == 0){         // ⛔ base-case: আর space লাগবে না
        return;
    }
    printf(" ");            // ⬜ একটি space
    space(count - 1);       // 🔁 বাকি space
}

/*------------- 📤 outerLoop() → প্রতিটি লাইন আঁকে -------------*/
void outerLoop(int i, int n){
    if(i > n){              // ⛔ সব লাইন হয়ে গেলে থামবে
        return;
    }
    space(n - i);           // ⬅️ leading spaces (ডানদিকে সরাতে)
    star(1, i);             // ➡️ 1 … i পর্যন্ত সংখ্যা
    printf("\n");           // ▶️ newline
    outerLoop(i + 1, n);    // 🔁 পরের লাইন (i ↗)
}

int main(){
    int n;                  // 🏷️ মোট লাইন
    scanf("%d", &n);        // 📥 ইনপুট
    outerLoop(1, n);        // 🚀 প্যাটার্ন আঁকা শুরু
    return 0;               // ✅ প্রোগ্রাম সমাপ্ত
}

/* =====================================================
📥 Input:
4

📤 Output:
   1
  12
 123
1234

🧠 Short Note:
এই প্রোগ্রামটি recursion ব্যবহার করে একটি **right-aligned numeric triangle** তৈরি করে।  
প্রতিটি লাইনে প্রথমে `n – i` টি space, তারপর `1 → i` সংখ্যাগুলো টানা প্রিন্ট হয়।

⏱️ Time Complexity (TC):  **O(n²)**  
   ▸ মোট প্রিন্ট হওয়া ক্যারেক্টার ≈ n(n+1)/2  

💾 Space Complexity (SC): **O(n)**  
   ▸ call-stack depth সর্বোচ্চ n (outerLoop) + n (star/space) ≈ O(n)
===================================================== */
