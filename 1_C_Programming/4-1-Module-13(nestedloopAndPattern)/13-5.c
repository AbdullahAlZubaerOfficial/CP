#include <stdio.h>  // input-output function-এর জন্য standard library

int main() { 
     
    int n;
    scanf("%d", &n);  // ইউজার থেকে n ইনপুট নিচ্ছে

    int space = n - 1;  // প্রথম লাইনে n-1 টি স্পেস থাকবে

    for (int i = 1; i <= n; i++) {  // মোট n টি লাইন প্রিন্ট করার জন্য লুপ চালাবে

        // প্রতিটি লাইনের শুরুতে কিছু স্পেস প্রিন্ট হবে
        for (int j = 1; j <= space; j++) {
            printf(" ");
        }

        // তারপর ১ থেকে i পর্যন্ত সংখ্যা প্রিন্ট হবে (line number পর্যন্ত)
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");  // প্রতিটি লাইন শেষে নিউ লাইন প্রিন্ট করবে

        space--;  // পরবর্তী লাইনের জন্য স্পেস কমাবে
    }

    return 0;
}


/*
📥 Input:
5

📤 Output:
    1
   12
  123
 1234
12345

📝 Short Note:
- এই প্রোগ্রামটি একটি **right-aligned number triangle** তৈরি করে।
- প্রতিটি লাইনের শুরুতে কিছু space এবং তারপর 1 থেকে line number পর্যন্ত সংখ্যা প্রিন্ট হয়।
- প্রতি লাইনে space ১টি করে কমে এবং সংখ্যাগুলো ১টি করে বাড়ে।
- এটি loop ও pattern printing অনুশীলনের জন্য খুবই উপযোগী।

👏 Keep practicing! প্রতিদিন এমন pattern প্র্যাকটিস করলে তুমি খুব দ্রুত master হয়ে যাবে ইনশাআল্লাহ 💪🙂
*/
