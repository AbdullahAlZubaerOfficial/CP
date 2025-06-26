#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // ইউজার থেকে কয়টা লাইন প্রিন্ট করতে হবে সেটা নিচ্ছি

    int count = 1; // সংখ্যা শুরু করবো ১ থেকে

    // প্রতি লাইনের জন্য লুপ চালাচ্ছি
    for (int i = 1; i <= n; i++) {

        // ৩টা সংখ্যা প্রিন্ট করবো প্রতিটি লাইনে
        for (int j = 1; j <= 3; j++) {
            printf("%d ", count); // সংখ্যা প্রিন্ট
            count++;              // পরবর্তী সংখ্যায় যাও
        }

        printf("PUM\n"); // প্রতিটি ৩টি সংখ্যার পর "PUM" প্রিন্ট করে নিউলাইন
        count++; // "PUM" এর পর এক ঘর স্কিপ (যেমন: 4, 8, 12 → বাদ)
    }

    return 0;
}


/*

V. PUM
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print N lines that describes PUM game.

For more clarification see the examples.

Input
Only one line containing a number N (1 ≤ N ≤ 20).

Output
Print the answer according to the required above.

Examples
InputCopy
7
OutputCopy
1 2 3 PUM
5 6 7 PUM
9 10 11 PUM
13 14 15 PUM
17 18 19 PUM
21 22 23 PUM
25 26 27 PUM
InputCopy
3
OutputCopy
1 2 3 PUM
5 6 7 PUM
9 10 11 PUM
Note
Don't print any extra spaces.



*/