#include <stdio.h>

// 🔹 ফাংশন যেটি প্যারামিটার হিসেবে একটি সংখ্যা নেয় এবং চেক করে সেটি Even না Odd
void checkEvenOdd3(int num) {
    if (num % 2 == 0)
        printf("Even Number");  // 🔸 যদি সংখ্যা ২ দিয়ে বিভাজ্য হয় তাহলে Even
    else
        printf("Odd Number");   // 🔸 অন্যথায় Odd
}

int main() {
    int input;
    scanf("%d", &input);       // 🔸 ইউজার থেকে একটি সংখ্যা ইনপুট নেওয়া হচ্ছে

    checkEvenOdd3(input);      // 🔸 ফাংশন কল করে ইনপুট যাচাই করা হচ্ছে
    return 0;
}


/**
🔸 Input:
7

🔸 Output:
Odd Number

🔍 Short Note:
এই প্রোগ্রামটি একটি সংখ্যা ইনপুট নেয় এবং `checkEvenOdd3()` নামক ফাংশনের মাধ্যমে চেক করে সংখ্যাটি Even না Odd। এখানে ফাংশনে ইনপুট পাস করা হয়েছে `argument` হিসেবে।

🕒 Time Complexity (TC):
O(1) → কেবল একটি সংখ্যা যাচাই করা হচ্ছে

💾 Space Complexity (SC):
O(1) → একটি সংখ্যা রাখার জন্য একটি ভেরিয়েবল ব্যবহার করা হয়েছে
**/
