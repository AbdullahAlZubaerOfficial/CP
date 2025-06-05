#include <stdio.h>

int main() { 
    char ch;

    scanf("%c", &ch);                     // ইউজার থেকে একটি ক্যারেক্টার ইনপুট

    if (ch >= 'a' && ch <= 'z') {
        // যদি ছোট হাতের অক্ষর হয়
        ch = ch - 32;                     // ছোট → বড় (ASCII - 32)
        printf("%c", ch);                // বড় হাতের অক্ষর প্রিন্ট
    } else {
        // অন্যথায় ধরে নিচ্ছি বড় হাতের অক্ষর
        ch = ch + 32;                     // বড় → ছোট (ASCII + 32)
        printf("%c", ch);                // ছোট হাতের অক্ষর প্রিন্ট
    }

    return 0;
}

/*
Input:
g

Output:
G
*/
