#include <stdio.h>  // 📚 Standard input/output library

int main() { 

   long long int a, b, k;                  // 🧮 তিনটি সংখ্যার জন্য long long int
   scanf("%lld %lld %lld", &a, &b, &k);    // 📥 ইনপুট: a, b ও ভাগের মান k

   if(a % k == 0 && b % k == 0){           // ✅ a ও b দুইটাই k দিয়ে ভাগ যায়
       printf("Both");                     // 🟢 উভয়ই divisible হলে
   }
   else if(a % k == 0){                    // ✅ শুধু a divisible হলে
       printf("Memo");                     // 🟢 Memo divisible
   }
   else if(b % k == 0){                    // ✅ শুধু b divisible হলে
       printf("Momo");                     // 🟢 Momo divisible
   }
   else {
       printf("No One");                   // ❌ কেউ divisible না হলে
   }
   
   return 0;                               // 🚀 প্রোগ্রাম শেষ
}

/* =========================================================
📥 Input:
8 12 4

📤 Output:
Both

📥 Input:
10 15 5

📤 Output:
Both

📥 Input:
9 12 3

📤 Output:
Both

📥 Input:
9 10 5

📤 Output:
Momo

📥 Input:
7 11 2

📤 Output:
No One

🧠 Short Note:
👉 তিনটি সংখ্যা নেওয়া হয়। চেক করা হয় a, b কারা k দিয়ে সম্পূর্ণ ভাগ যায়।
   – যদি দুইজনই যায় → "Both"
   – শুধু a গেলে → "Memo"
   – শুধু b গেলে → "Momo"
   – কেউই না গেলে → "No One"

⏱ Time Complexity (TC):  O(1) — শুধু একবার modulus operation
💾 Space Complexity (SC): O(1) — কোনো অতিরিক্ত মেমোরি ব্যবহার হয়নি
========================================================= */
