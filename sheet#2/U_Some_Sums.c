#include <stdio.h>

int main() {
    int N, A, B;
    
    // 🔢 ইউজার থেকে ৩টি ইনপুট নিচ্ছি: N (সর্বোচ্চ সংখ্যা), A এবং B (digit sum এর সীমা)
    scanf("%d %d %d", &N, &A, &B);

    int totalSum = 0;  // ✅ ফলাফল রাখার জন্য একটা ভেরিয়েবল

    // 🔁 1 থেকে N পর্যন্ত প্রতিটি সংখ্যা যাচাই করবো
    for (int i = 1; i <= N; i++) {
        int num = i;         // প্রতি সংখ্যার জন্য temp num নিচ্ছি
        int digitSum = 0;    // অঙ্কগুলোর যোগফল রাখার জন্য

        // 🔄 এখন num-এর সব digit যোগ করবো
        while (num > 0) {
            digitSum += num % 10;  // শেষ অঙ্ক যোগ করছি
            num /= 10;             // num থেকে শেষ অঙ্ক বাদ দিলাম
        }

        // ✅ যদি digitSum, A ও B এর মাঝে থাকে, তাহলে সেই সংখ্যা যোগ করবো
        if (digitSum >= A && digitSum <= B) {
            totalSum += i;   // মূল সংখ্যাটা যোগ করলাম
        }
    }

    // ✅ সব শেষে মোট যোগফল প্রিন্ট করলাম
    printf("%d\n", totalSum);

    return 0;
}


/*

Input: 20 2 5
→ আমরা 1 থেকে 20 পর্যন্ত যাব।
→ যেসব সংখ্যার অঙ্কগুলোর যোগফল 2 থেকে 5 এর মধ্যে, সেগুলো যোগ করব।
→ যেমন: 2, 3, 4, 5, 11 (1+1=2), 12 (1+2=3), ... 20 (2+0=2)

→ এদের যোগফল হবে: 2+3+4+5+11+12+13+14+20 = 84


U. Some Sums
time limit per test2 seconds
memory limit per test256 megabytes
Given three numbers N, A, B. Print the summation of the numbers between 1 and N whose sum of digits is between A and B inclusive.

Input
Only one line containing three numbers N, A, B (1 ≤ N ≤ 104, 1 ≤ A ≤ B ≤ 36).

Output
Print a single line contains the answer according to the required above.

Examples
InputCopy
20 2 5
OutputCopy
84
InputCopy
10 1 2
OutputCopy
13
InputCopy
100 4 16
OutputCopy
4554
Note
In the first simple:

Among the numbers not greater than 20, the numbers whose sums of digits are between 2 and 5, are: 2,3,4,5,11,12,13,14 and 20.

So the answer is: 84.




*/