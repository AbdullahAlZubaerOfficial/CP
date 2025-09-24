#include <stdio.h>
#include <math.h>

int main() {
    double n;
    scanf("%lf", &n);  // ইউজার থেকে একটি দশমিক সংখ্যা ইনপুট নেওয়া হচ্ছে

    printf("%.2f\n", ceil(n));     // সংখ্যাটির উপরের পূর্ণসংখ্যা (উচ্চতর ইনটিজার)
    printf("%.2f\n", floor(n));    // সংখ্যাটির নিচের পূর্ণসংখ্যা (নিম্নতর ইনটিজার)
    printf("%.2f\n", round(n));    // কাছাকাছি পূর্ণসংখ্যায় রাউন্ড করা হচ্ছে
    printf("%.2f\n", sqrt(n));     // সংখ্যাটির বর্গমূল
    printf("%.2f\n", pow(n, 2));   // সংখ্যাটির বর্গ
    printf("%.2f\n", fabs(n));     // সংখ্যাটির পরম মান (absolute value)

    return 0;
}


/*

🔸 Input:
7.23

🔸 Output:
8.00
7.00
7.00
2.69
52.27
7.23

🔹 Short Note:
এই প্রোগ্রামটি ইনপুট হিসেবে একটি দশমিক সংখ্যা নিয়ে তার উপর বিভিন্ন গণিত ভিত্তিক ফাংশন (Math functions) প্রয়োগ করে যেমন:
- ceil() → উপরের পূর্ণসংখ্যা দেয়
- floor() → নিচের পূর্ণসংখ্যা দেয়
- round() → কাছাকাছি পূর্ণসংখ্যা দেয়
- sqrt() → বর্গমূল
- pow() → ঘাত
- fabs() → absolute মান (negative হলে positive করে)

🔸 Time Complexity (TC):
O(1) – প্রতিটি ফাংশনের কল constant time-এ হয়

🔸 Space Complexity (SC):
O(1) – অতিরিক্ত কোন মেমোরি ব্যবহার করা হয়নি

*/
