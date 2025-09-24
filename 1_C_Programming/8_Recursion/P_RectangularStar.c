#include <stdio.h>          // 🌟 Standard I/O header

/* --------- ⭐ star() → count সংখ্যক * প্রিন্ট করে (recursive) --------- */
void star(int count){
    if(count == 0){         // ⛔ base-case: count == 0 হলে আর কিছুই করবে না
        return;
    }
    printf("*");            // ১টি ★ প্রিন্ট
    star(count - 1);        // 🔁 বাকি (count-1) ★ ছাপাতে নিজেকেই আবার কল
}

/* --------- 📤 OuterLoop() → n সারি প্রিন্ট করে, প্রতি সারিতে n★ --------- */
void OuterLoop(int i, int n){
    if(i >= n){             // ⛔ base-case: সব সারি (i = 0 … n-1) শেষ হলে থামবে
        return;
    }
    star(n);                // 🔸 প্রত্যেক সারিতে nটি ★
    printf("\n");           // ▶️ newline (পরের সারিতে যাও)
    OuterLoop(i + 1, n);    // 🔁 পরের সারি (i ↗)
}

int main(){
    int n;                  // 🏷️ স্কোয়ারের প্রস্থ/উচ্চতা (n × n)
    scanf("%d", &n);        // 📥 ইনপুট পড়া

    OuterLoop(0, n);        // 🚀 আঁকা শুরু (i = 0 থেকে)

    return 0;               // ✅ সফল সমাপ্তি
}

/* =====================================================
📥 Input:
4

📤 Output:
****
****
****
****

🧠 Short Note:
এই প্রোগ্রামটি recursion ব্যবহার করে একটি n × n আকারের
rectangular star pattern আঁকে।  
প্রতি সারিতে ঠিক nটি ‘★’ এবং মোট nটি সারি হয়।

⏱️ Time Complexity (TC):  O(n²)  
   ▸ মোট প্রিন্ট হওয়া চরিত্র = n × n

💾 Space Complexity (SC): O(n)  
   ▸ OuterLoop-এর call-stack depth সর্বোচ্চ n
===================================================== */
