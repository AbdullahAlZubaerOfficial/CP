#include <stdio.h>

int main() { 
   int n;
   scanf("%d", &n);  // 📥 Input size of the array

   int ar[n];

   for (int i = 0; i < n; i++) {
       scanf("%d", &ar[i]);  // 📥 Input each element of the array
   }

   int sum = 0;

   for (int i = 0; i < n; i++) {
       sum = sum + ar[i];  // ➕ Add each element to sum
   }

   printf("%d", sum);  // 📤 Print the total sum
   
   return 0;
}

/*
==========================
📥 Input:
5
1 2 3 4 5

📤 Output:
15

==========================
🧠 Short Note:
- অ্যারেতে n টি সংখ্যা ইনপুট নেয়ার পর সব সংখ্যার যোগফল বের করা হয়।
- sum = sum + ar[i] দিয়ে প্রতিটি সংখ্যা যোগ হয়।

==========================
⏱ Time Complexity (TC): O(n)
    ➤ একবার লুপে সব সংখ্যা যোগ করা হয়

💾 Space Complexity (SC): O(n)
    ➤ n সাইজের অ্যারে ব্যবহার করা হয়েছে

==========================
*/