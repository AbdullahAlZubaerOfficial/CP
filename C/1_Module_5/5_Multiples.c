#include <stdio.h>

// multiples মানে হচ্ছে একে অপরের গুণিতক কি না

int main() { 
    int a, b;

    scanf("%d %d", &a, &b);   // দুটি সংখ্যা ইনপুট নিচ্ছি

    if (a % b == 0 || b % a == 0) {
        // যদি a, b এর গুণিতক হয় অথবা b, a এর
        printf("Multiples");      // তাহলে গুণিতক
    } else {
        printf("No Multiples");   // নাহলে গুণিতক না
    }

    return 0;
}
