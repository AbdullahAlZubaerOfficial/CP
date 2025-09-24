#include <stdio.h>

int main() { 
    int a, b;                       // দুইটি পূর্ণসংখ্যা ভ্যারিয়েবল

    scanf("%d %d", &a, &b);         // ইউজার থেকে দুটি সংখ্যা ইনপুট নিচ্ছি

    if (a >= b) {                   // যদি a বড় বা সমান হয় b এর
        printf("Yes");             // তাহলে "Yes" প্রিন্ট করবো
    } else {
        printf("No");              // না হলে "No" প্রিন্ট করবো
    }

    return 0;                       // প্রোগ্রাম শেষ
}

/*
Input: 
5 3

Output: 
Yes
*/
