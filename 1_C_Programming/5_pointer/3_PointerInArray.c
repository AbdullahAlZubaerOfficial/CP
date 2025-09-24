#include <stdio.h>

int main() { 
   int ar[5] = {10, 20, 30, 40, 50};
   
   printf("%p\n", &ar[0]);  // memory address stored of 10
   printf("%p", &ar[1]);    // memory address stored of 20
   
   return 0;
}

/*
📥 Input:
(কোনো ইনপুট নেই)

📤 Output:
0x... (যেমন: 0x61ff0c — ar[0] এর address)
0x... (যেমন: 0x61ff10 — ar[1] এর address)

📝 Short Note:
👉 এখানে `ar` নামে একটি integer array নেওয়া হয়েছে যার ৫টি উপাদান আছে: {10, 20, 30, 40, 50}
👉 `&ar[0]` মানে হচ্ছে প্রথম উপাদানের মেমোরি অ্যাড্রেস।
👉 `&ar[1]` মানে হচ্ছে দ্বিতীয় উপাদানের মেমোরি অ্যাড্রেস।

📌 যেহেতু প্রতিটি `int` সাধারণত 4 bytes জায়গা নেয়, তাই `&ar[1]` এর অ্যাড্রেস `&ar[0]` এর চেয়ে 4 বেশি হবে।

⚙️ Time Complexity: O(1)  
📦 Space Complexity: O(1)
*/

