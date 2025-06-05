#include <stdio.h>

/*
 * পজিটিভ, নেগেটিভ নাকি জিরো—সংখ্যা যাচাই।
 */
int main() {
       int number; // ইউজার থেকে একটি সংখ্যা নেওয়ার জন্য ভ্যারিয়েবল

    printf("Enter a number: "); // সংখ্যা ইনপুটের জন্য অনুরোধ
    scanf("%d", &number);       // ইউজার ইনপুট স্ক্যান করে 'number' এ রাখছি

    // এখন কন্ডিশন চেক করবো
    if (number > 0) {
        printf("Positive\n"); // যদি number ধনাত্মক হয়
    } else if (number < 0) {
        printf("Negative\n"); // যদি number ঋণাত্মক হয়
    } else {
        printf("Zero\n");     // যদি number শূন্য হয়
    }

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

/*
Expected Input:
    Enter a number: -5

Expected Output:
   
    Negative
*/
