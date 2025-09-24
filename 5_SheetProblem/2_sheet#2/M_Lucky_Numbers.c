#include <stdio.h>

int main() { 
    int a, b;
    scanf("%d %d", &a, &b);

    int found = 0; // lucky number পাওয়া গেছে কিনা, সেটা রাখার জন্য

    for (int i = a; i <= b; i++) {
        int num = i;
        int isLucky = 1; // ধরলাম এটা lucky

        while (num > 0) {
            int digit = num % 10; // শেষ digit নিই
            if (digit != 4 && digit != 7) {
                isLucky = 0; // lucky না
                break;       // আর চেক করার দরকার নাই
            }
            num = num / 10; // পরবর্তী digit চেক করার জন্য
        }

        if (isLucky) {
            printf("%d ", i); // lucky হলে প্রিন্ট করি
            found = 1;
        }
    }

    if (!found) {
        printf("-1"); // যদি কোনো lucky number না পাই
    }

    return 0;
}


/*

M. Lucky Numbers
time limit per test1 second
memory limit per test256 megabytes
Given two numbers A
 and B
. Print all lucky numbers between A
 and B
 inclusive.

Note:

The Lucky number is any positive number that its decimal representation contains only 4 and 7.

For example: numbers 4, 7, 47 and 744 are lucky and numbers 5, 17 and 174 are not.

Input
Only one line containing two numbers A
 and B
 (1≤A≤B≤105)
.

Output
Print all lucky numbers between A
 and B
 inclusive separated by a space. If there is no lucky number print -1.

Examples
InputCopy
4 20
OutputCopy
4 7 
InputCopy
8 15
OutputCopy
-1



*/