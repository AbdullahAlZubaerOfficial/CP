#include <stdio.h>

/*
 * ইউজার থেকে একটি সংখ্যা নিয়ে সেটি রিফ্লেক্ট করি।
 */
int main() {
    int number;  // একটি পূর্ণসংখ্যা ধরার জন্য ভ্যারিয়েবল

    printf("Enter a number: ");      // ইউজারকে ইনপুট দিতে বলছি
    scanf("%d", &number);            // ইনপুট নিচ্ছি number ভ্যারিয়েবলে (& = address)

    printf("You entered: %d\n", number); // ইনপুটকৃত সংখ্যা প্রিন্ট করছি

    return 0; // প্রোগ্রাম সফলভাবে শেষ
    
}


/*
Expected Input:
    42

Expected Output:
    Enter a number: 42
    You entered: 42
*/
