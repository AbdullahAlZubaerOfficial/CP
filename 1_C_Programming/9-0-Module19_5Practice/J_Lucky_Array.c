#include <stdio.h>       // 📚 Standard I/O
#include <limits.h>      // 📦 INT_MAX ব্যবহারের জন্য

int main() { 
   int n;
   scanf("%d", &n);      // 🧾 Input: উপাদানের সংখ্যা
   
   int ar[n];            // 📦 n সাইজের অ্যারে

   int min = INT_MAX;    // 🚩 শুরুতে সর্বোচ্চ মান ধরে নিচ্ছি যেন যেকোনো সংখ্যাই এর চেয়ে ছোট হয়

   // 🧾 Array ইনপুট নিচ্ছি
   for(int i = 0; i < n; i++){
       scanf("%d", &ar[i]);
   }

   // 🔍 সবচেয়ে ছোট সংখ্যাটি খুঁজছি
   for(int i = 0; i < n; i++){
       if(ar[i] < min){
           min = ar[i];  // 🔽 নতুন ছোট মান পেলে সেটাকে min বানাচ্ছি
       }
   }

   int count = 0;        // 🧮 ছোট সংখ্যাটি কয়বার আছে তা গুনব

   for(int i = 0; i < n; i++){
       if(ar[i] == min){ // ✅ min-এর মতো মান হলে
           count++;      // ➕ ১ করে বাড়াচ্ছি
       }
   }

   // 📤 যদি min সংখ্যাটি বিজোড় বার আসে → Lucky, না হলে → Unlucky
   if(count % 2 == 0){
       printf("Unlucky");
   }
   else {
       printf("Lucky");
   }
   
   return 0;             // ✅ সফলভাবে প্রোগ্রাম শেষ
}

/*
================== 📌 Input/Output Samples ==================

🔢 Input:
6
3 1 1 4 1 5

📤 Output:
Lucky

🔢 Input:
5
4 2 4 2 4

📤 Output:
Unlucky

=================== 🧠 Short Note ===================

✅ Task:
- একটি অ্যারেতে সবচেয়ে ছোট সংখ্যাটি খুঁজে বের করো
- সেটি কতবার আছে, সেটি হিসাব করো
- যদি ঐ সংখ্যা বিজোড় বার থাকে → Lucky
- জোড় বার থাকলে → Unlucky

🧮 Example:
Input: 5 1 2 3 1 1 → min = 1 → count = 3 → "Lucky"

⏱ Time Complexity: O(n)
💾 Space Complexity: O(1)

====================================================
*/
