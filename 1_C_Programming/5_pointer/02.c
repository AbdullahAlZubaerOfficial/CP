#include <stdio.h>

int main() { 
   int x = 10;
   
   int* ptr;

   ptr = &x;

   printf("%p\n", ptr);  // memory address stored as 0061FF18

   printf("%d", *ptr);   // 10
   
   return 0;
}

/*
📥 Input:
(কোনো ইনপুট নেই)

📤 Output:
0x... (যেমন: 0x61ff18 — প্রতিবার রান করলে আলাদা হতে পারে)
10

📝 Short Note:
👉 এখানে `x` নামে একটি integer variable নেওয়া হয়েছে যার মান 10।
👉 `ptr` একটি pointer যেটা `x` এর মেমোরি address ধরে রাখে: `ptr = &x;`
👉 `printf("%p", ptr);` → এটি `x` এর মেমোরি অ্যাড্রেস প্রিন্ট করে।
👉 `printf("%d", *ptr);` → এটি pointer dereference করে `x` এর ভ্যালু (10) প্রিন্ট করে।

🔍 `%p` pointer-এর address দেখায়, আর `*ptr` pointer dereference করে সেই address-এ থাকা ভ্যালু দেখায়।

⚙️ Time Complexity: O(1)  
📦 Space Complexity: O(1)
*/

