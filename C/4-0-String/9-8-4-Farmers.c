#include <stdio.h>

int main()
{
    int t;                              // Test case এর সংখ্যা ইনপুট নেওয়ার জন্য ভ্যারিয়েবল
    scanf("%d", &t);                    // ইউজার থেকে test cases এর সংখ্যা নেওয়া

    while (t--)                        // প্রতিটি test case এর জন্য লুপ চালানো
    {
        int m1, m2, d;                 // তিনটি ইনপুট: m1, m2 এবং d
        scanf("%d %d %d", &m1, &m2, &d);  // প্রতিটি test case এর জন্য ইনপুট নেওয়া

        int totalF = m1 + m2;          // m1 এবং m2 এর যোগফল
        int new = (m1 * d) / totalF;  // m1 অনুপাতে d এর অংশ
        int fewer = d - new;           // b অংশ যেটা কম

        printf("%d\n", fewer);         // ফলাফল প্রিন্ট করা
    }

    return 0;
}

/*

Input:
2
2 2 4
3 2 5

Output:
2
2

Explanation:

First Case:
m1 = 2, m2 = 2, d = 4
totalF = 2 + 2 = 4
new = (2 × 4) / 4 = 2
fewer = 4 - 2 = 2 ✅

Second Case:
m1 = 3, m2 = 2, d = 5
totalF = 3 + 2 = 5
new = (3 × 5) / 5 = 3
fewer = 5 - 3 = 2 ✅

*/
