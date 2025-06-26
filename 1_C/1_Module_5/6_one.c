#include <stdio.h>

int main() { 
    int A, s;

    scanf("%d", &A);        // একটি সংখ্যা ইনপুট নিচ্ছি

    s = A / 1000;           // হাজারের ঘরের মান বের করছি (বাঁ থেকে ১ম ডিজিট ধরতে)

    if (s % 2 == 0) {
        // যদি সেই ডিজিট জোড় হয়
        printf("EVEN");
    } else {
        // না হলে বিজোড়
        printf("ODD");
    }

    return 0;
}

/*
Input:
4283

Output:
EVEN
*/