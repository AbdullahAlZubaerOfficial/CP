#include <stdio.h>

// 🔹 ফাংশনটি ইনপুট নেওয়ার পর চেক করে যে সংখ্যা Even নাকি Odd
int checkEvenOdd2() {
    int num;

    scanf("%d", &num);  // 🔸 ইউজার থেকে একটি সংখ্যা ইনপুট নেয়া হচ্ছে

    if (num % 2 == 0)
        return 0; // 🔸 Even হলে 0 রিটার্ন
    else
        return 1; // 🔸 Odd হলে 1 রিটার্ন
}

int main() {
    int result = checkEvenOdd2();  // 🔸 চেক করার ফাংশন কল এবং রেজাল্ট রাখা

    if (result == 0)
        printf("Even Number");  // 🔸 যদি রেজাল্ট 0 হয় তাহলে Even
    else
        printf("Odd Number");   // 🔸 না হলে Odd

    return 0;
}


/**
🔸 Input:
7

🔸 Output:
Odd Number

🔍 Short Note:
এই প্রোগ্রামটি ইউজার থেকে একটি সংখ্যা ইনপুট নেয় এবং `checkEvenOdd2()` ফাংশনের মাধ্যমে চেক করে সেটি Even না Odd। ফাংশনটি 0 বা 1 রিটার্ন করে, যেটা `main()` ফাংশনে যাচাই করে প্রিন্ট করা হয়।

🕒 Time Complexity (TC):
O(1) → একটি সংখ্যা ইনপুট এবং চেক করা হচ্ছে

💾 Space Complexity (SC):
O(1) → কেবল একটি সংখ্যা ও একটি রেজাল্ট ভেরিয়েবল ব্যবহার করা হয়েছে
**/
