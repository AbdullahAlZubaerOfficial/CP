#include <stdio.h>

void sum() {
    int a, b;                 // দুইটি সংখ্যা ইনপুটের জন্য ভ্যারিয়েবল
    scanf("%d %d", &a, &b);   // ইনপুট নিচ্ছে
    int ans = a + b;          // যোগফল হিসাব করছে
    printf("%d", ans);        // যোগফল প্রিন্ট করছে
}

int main() {
    sum();                    // sum() ফাংশন কল
    return 0;                 // প্রোগ্রাম সফলভাবে শেষ
}

/*
Input:
10 20

Output:
30

Short Note:
দুটি পূর্ণসংখ্যা ইনপুট নিয়ে তাদের যোগফল প্রিন্ট করে।

Time Complexity (TC): O(1)  // ধ্রুবক সময়, কেবল মাত্র একটি যোগফল
Space Complexity (SC): O(1) // ধ্রুবক অতিরিক্ত মেমোরি ব্যবহার
*/
