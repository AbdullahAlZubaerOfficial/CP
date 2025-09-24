#include <stdio.h>

/*
 * scanf দিয়ে স্ট্রিং ইনপুট: স্পেস-বিহীন single-word
 * gets/fgets চাইলে multiple-word নেবার জন্য।
 */
int main() {
char name[20]; // একটি ক্যারেক্টার অ্যারে, যাতে ২০টি অক্ষর রাখা যাবে (১টা থাকবে null character '\0' এর জন্য)

    printf("Enter your name: "); // ইউজারকে নাম দেওয়ার জন্য অনুরোধ
    scanf("%19s", name);         // %19s = সর্বোচ্চ ১৯টি অক্ষর ইনপুট নেবে, যাতে buffer overflow না হয়

    printf("Hello, %s!\n", name); // ইউজারকে হ্যালো বলে শুভেচ্ছা জানানো হবে

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

/*
Expected Input:
    Zubaer

Expected Output:
    Enter your name: Zubaer
    Hello, Zubaer!
*/
