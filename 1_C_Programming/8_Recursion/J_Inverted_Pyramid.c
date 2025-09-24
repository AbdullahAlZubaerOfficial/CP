#include <stdio.h>          // 🌟 Standard I/O header

// space() → নির্দিষ্ট সংখ্যক space প্রিন্ট করে (recursive)
void space(int count){
    if(count == 0){         // ⛔ base-case: আর space লাগবে না
        return;
    }
    printf(" ");            // 1টা space প্রিন্ট
    space(count - 1);       // 🔁 বাকি space-এর জন্য recursive call
}

// star() → নির্দিষ্ট সংখ্যক * প্রিন্ট করে (recursive)
void star(int count){
    if(count == 0){         // ⛔ base-case: আর * লাগবে না
        return;
    }
    printf("*");            // 1টা * প্রিন্ট
    star(count - 1);        // 🔁 বাকি *-এর জন্য recursive call
}

// outerLoop() → প্রতিটি লাইন তৈরী করে: space + star, তারপর newline
void outerLoop(int i, int n){
    if(i > n){              // ⛔ base-case: সব লাইন হয়ে গেলে থামবে
        return;
    }
    space(i - 1);           // 🔹 leading spaces (লাইন যত নামবে, স্পেস তত বাড়বে)
    star(2 * (n - i) + 1);  // 🔸 তার পর প্রয়োজনীয় * (উল্টো পিরামিড)
    printf("\n");           // ▶️ পরের লাইনে যাওয়া
    outerLoop(i + 1, n);    // 🔁 পরবর্তী লাইন
}

int main(){
    int n;                  // 🏷️ মোট লাইন সংখ্যা
    scanf("%d", &n);        // 📥 ইনপুট
    outerLoop(1, n);        // 🚀 পিরামিড আঁকা শুরু (i = 1)
    return 0;               // ✅ প্রোগ্রাম শেষ
}

/* =====================================================
📥 Input:
3

📤 Output:
***** 
 ***  
  *   

🧠 Short Note:
এই প্রোগ্রামটি recursion ব্যবহার করে একটি **inverted pyramid** প্রিন্ট করে।  
প্রতিটি লাইনে (i − 1)টি space ও (2·(n − i) + 1)টি star প্রিন্ট হয়, ফলে উপরে
চওড়া ও নিচে সরু আকৃতি গঠন করে ⭐

⏱️ Time Complexity (TC): O(n²)  
    ▸ মোট প্রিন্ট হওয়া ক্যারেক্টারের সংখ্যা 1 + 3 + … + (2n − 1) ≈ n²

💾 Space Complexity (SC): O(n)  
    ▸ recursion call-stack depth সর্বোচ্চ n (outerLoop) অথবা n (star/space)
===================================================== */
