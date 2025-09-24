#include <stdio.h>

// 🔹 কোনো সংখ্যা Even না Odd তা চেক করে প্রিন্ট করে
void checkEvenOdd1() {
    int num;

    scanf("%d", &num);  // 🔸 ইউজার থেকে একটি সংখ্যা ইনপুট নেয়া হচ্ছে

    if (num % 2 == 0)
        printf("Even Number\n");   // 🔸 যদি ২ দিয়ে ভাগশেষ ০ হয় তবে Even
    else
        printf("Odd Number\n");    // 🔸 অন্যথায় Odd
}

int main() {
    checkEvenOdd1();  // 🔸 ফাংশন কল করে চেক করা হচ্ছে
    return 0;
}


/**
🔸 Input:
5

🔸 Output:
Odd Number

🔍 Short Note:
এই প্রোগ্রামটি ইউজার থেকে একটি সংখ্যা ইনপুট নেয় এবং ফাংশনের মাধ্যমে চেক করে সেটি জোড় (Even) না বিজোড় (Odd)। `%` অপারেটর ব্যবহার করে ২ দিয়ে ভাগ করে ফলাফল নির্ধারণ করা হয়।

🕒 Time Complexity (TC):
O(1) → কারণ কেবল একটি অপারেশন হচ্ছে

💾 Space Complexity (SC):
O(1) → শুধুমাত্র একটি সংখ্যা রাখা হচ্ছে, অতিরিক্ত কোনো মেমোরি ব্যবহৃত হয়নি
**/
