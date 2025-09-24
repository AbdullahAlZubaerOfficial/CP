#include <stdio.h>

// 🔹 checkEvenOdd4() ফাংশন একটি সংখ্যা নেয় এবং Even হলে 0 রিটার্ন করে, Odd হলে 1
int checkEvenOdd4(int num) {
    if (num % 2 == 0)
        return 0; // Even
    else
        return 1; // Odd
}

int main() {
    int input;
    scanf("%d", &input);  // 🔸 ইউজার থেকে সংখ্যা ইনপুট নেওয়া হচ্ছে

    int result = checkEvenOdd4(input);  // 🔸 ফাংশন কল করে ফলাফল result এ রাখছে

    if (result == 0)
        printf("Even Number ");
    else
        printf("Odd Number ");

    return 0;
}


/**
🔸 Input:
6

🔸 Output:
Even Number 

🔍 Short Note:
এখানে `checkEvenOdd4()` ফাংশনটি শুধু Even/Odd চেক করে ০ অথবা ১ রিটার্ন করে। `main()` ফাংশনে আমরা সেই রিটার্ন ভ্যালু ধরে প্রিন্ট করে দিচ্ছি। এইভাবে ফাংশনকে modular এবং reusable রাখা যায়।

🕒 Time Complexity (TC):
O(1) → শুধু একটি modulo অপারেশন হচ্ছে

💾 Space Complexity (SC):
O(1) → শুধু ২টি ভেরিয়েবল ব্যবহার হয়েছে (input এবং result)
**/
