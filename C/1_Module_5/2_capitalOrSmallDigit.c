#include <stdio.h>

int main() { 
    char ch;                            // একটি ক্যারেক্টার ইনপুট নিবো

    scanf("%c", &ch);                   // ইউজার থেকে ক্যারেক্টার ইনপুট

    if (ch >= 'A' && ch <= 'Z') {
        // যদি ক্যারেক্টারটি A-Z এর মধ্যে হয়
        printf("ALPHA\nIS CAPITAL");    // তাহলে capital letter
    } 
    else if (ch >= 'a' && ch <= 'z') {
        // যদি a-z এর মধ্যে হয়
        printf("ALPHA\nIS SMALL");      // তাহলে small letter
    } 
    else {
        // না হলে ধরে নিচ্ছি সেটা digit (0-9)
        printf("IS DIGIT");
    }

    return 0;
}

/*
Input:
G

Output:
ALPHA
IS CAPITAL
*/
