#include <stdio.h>

/*
 * পয়েন্টার হলো অন্য ভেরিয়েবলের address ধরে রাখে।
 */
int main() {
     int num = 10;                  // একটি int ভ্যারিয়েবল num, যার মান 10
    int *ptr = &num;              // ptr একটি পয়েন্টার, যা num এর address রাখে

    // *ptr মানে ptr যেই address ধরে রেখেছে, সেখানে যা আছে তা দেখাবে
    printf("Value   : %d\n", *ptr); // এখানে *ptr = num এর মান = 10

    // ptr নিজেই একটা address ধরে রাখে, তাই %p দিয়ে সেই address প্রিন্ট করি
    printf("Address : %p\n", (void*)ptr); // %p দিয়ে pointer এর address প্রিন্ট করা হয়

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

/*
Expected Output:
    Value   : 10
    Address : 0x7ffd...  (আপনার সিস্টেমে ভিন্ন হতে পারে)
*/
