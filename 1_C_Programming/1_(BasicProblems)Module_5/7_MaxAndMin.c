#include <stdio.h>              // ইনপুট-আউটপুট ফাংশনের লাইব্রেরি ইনক্লুড

int main() {                    // মেইন ফাংশন শুরু
    int a, b, c;                // তিনটি পূর্ণসংখ্যার ভেরিয়েবল ডিক্লেয়ার
    scanf("%d %d %d", &a, &b, &c);  // ইউজার থেকে তিনটি সংখ্যা ইনপুট নিচ্ছি

    // 🔽 সর্বনিম্ন মান (minimum) বের করছি
    if (c <= b && c <= a) {     // যদি c সবচেয়ে ছোট হয়
        printf("%d ", c);       // তাহলে c প্রিন্ট করো
    } else if (a <= b && a <= c) { // না হলে যদি a সবচেয়ে ছোট হয়
        printf("%d ", a);       // তাহলে a প্রিন্ট করো
    } else if (b <= a && b <= c) { // না হলে যদি b সবচেয়ে ছোট হয়
        printf("%d ", b);       // তাহলে b প্রিন্ট করো
    }

    // 🔼 সর্বোচ্চ মান (maximum) বের করছি
    if (c >= b && c >= a) {     // যদি c সবচেয়ে বড় হয়
        printf("%d", c);        // তাহলে c প্রিন্ট করো
    } else if (a >= b && a >= c) { // না হলে যদি a সবচেয়ে বড় হয়
        printf("%d", a);        // তাহলে a প্রিন্ট করো
    } else if (b >= a && b >= c) { // না হলে যদি b সবচেয়ে বড় হয়
        printf("%d", b);        // তাহলে b প্রিন্ট করো
    }

    return 0;                   // প্রোগ্রাম সফলভাবে শেষ
}

/*
Input:
10 5 20

Output:
5 20

note: ekhane output e first er a minimum number and 2nd ta highest number array theke.......
*/
