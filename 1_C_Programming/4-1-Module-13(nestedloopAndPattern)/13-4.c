#include <stdio.h>  // standard input-output header file

int main() { 
     
    int n;
    scanf("%d", &n);  // ইউজার থেকে n নাম্বার ইনপুট নেওয়া হচ্ছে (কত লাইন হবে)

    int space = n - 1;  // প্রথম লাইনে n-1 টা ফাঁকা জায়গা থাকবে
    int star = 1;       // প্রথম লাইনে ১টা তারকা থাকবে

    for (int i = 1; i <= n; i++) {  // মোট n টি লাইন প্রিন্ট করার জন্য লুপ

        for (int j = 1; j <= space; j++) {  // প্রতিটি লাইনের শুরুতে space গুলো প্রিন্ট
            printf(" ");
        }

        for (int j = 1; j <= star; j++) {   // তারপরে star গুলো প্রিন্ট
            printf("*");
        }

        printf("\n");  // প্রতিটি লাইন শেষে নতুন লাইনে যাওয়ার জন্য

        space--;       // পরের লাইনের জন্য space ১টা কমিয়ে দিচ্ছি
        star++;        // এবং star ১টা বাড়িয়ে দিচ্ছি
    }

    return 0;
}


/*
📥 Input:
5

📤 Output:
    *
   **
  ***
 ****
*****

📝 Short Note:
- এই প্রোগ্রামটি একটি right-aligned triangle তৈরি করে।
- প্রতি লাইনে (n - current line) সংখ্যক space এবং (current line) সংখ্যক * প্রিন্ট হয়।
- space প্রতি লাইনে ১ করে কমে এবং star প্রতি লাইনে ১ করে বাড়ে।
- এটি একটি সাধারণ pattern printing প্রোগ্রাম যা loop ও nested loop অনুশীলনের জন্য উপযুক্ত।

Keep practicing 💪! তুমি অসাধারণ করতেছো ভাই! 😊🔥
*/
