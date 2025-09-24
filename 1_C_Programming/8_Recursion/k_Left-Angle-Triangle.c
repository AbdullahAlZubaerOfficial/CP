#include <stdio.h>          // 🌟 Std. I/O header include

/*------------- Helper: শুধু ★ প্রিন্ট করে -------------*/
void star(int count){       
    if(count == 0){         // ⛔ base-case → আর ★ লাগবে না
        return;             
    }
    printf("*");            // 1-টা ★
    star(count - 1);        // 🔁 বাকি ★-এর জন্য recursive call
}

/*------------- Main recursive লুপ -------------*/
void outerLoop(int i, int dummy){ // dummy বদলাবে না, শুধু signature ধরে রাখা
    if(i < 1){             // ⛔ base-case → সব লাইন শেষ
        return;
    }
    star(i);               // 🔸 বর্তমান লাইনে i-টা ★
    printf("\n");          // ▶️ newline
    outerLoop(i - 1, 1);   // 🔁 পরের (কম) লাইনের জন্য call
}

int main(){                
    int n;                 // 🏷️ মোট লাইনের সংখ্যা
    scanf("%d", &n);       // 📥 ইনপুট
    outerLoop(n, 1);       // 🚀 আঁকা শুরু (i=n থেকে)
    return 0;              // ✅ প্রোগ্রাম সমাপ্ত
}

/* =====================================================
📥 Input:
4

📤 Output:
****
***
**
*

🧠 Short Note:
• `outerLoop()` উপর থেকে নিচে লাইন সংখ্যা কমিয়ে ডাকে,  
  আর প্রতিটি লাইনে `star()` i-টি ★ প্রিন্ট করে।  
• মোট ক্যারেক্টার ছাপা হয় n + (n-1) + … + 1 ≈ n²/2, যা O(n²)।

⏱️ Time Complexity (TC):  O(n²)   // মোট প্রিন্ট হওয়া ক্যারেক্টার
💾 Space Complexity (SC): O(n)    // call-stack -এ সর্বোচ্চ n-টি ফ্রেম
===================================================== */
