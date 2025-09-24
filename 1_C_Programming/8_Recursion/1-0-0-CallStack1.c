#include <stdio.h>      // Standard input-output header file

// mello() → "Mello" প্রিন্ট করে
void mello() {
    printf("Mello\n");  // "Mello" + newline
}

// gello() → "Gello" প্রিন্ট করে, তারপর mello() কল করে
void gello() {
    printf("Gello\n");  // "Gello" + newline
    mello();            // mello() ফাংশন কল
}

// hello() → "Hello" প্রিন্ট করে, তারপর gello() কল করে
void hello() {
    printf("Hello\n");  // "Hello" + newline
    gello();            // gello() ফাংশন কল
}

int main() {                        // Execution শুরু
    printf("Yes running\n");        // প্রোগ্রাম শুরু হওয়ার বার্তা
    hello();                        // ফাংশন কল চেইন শুরু
    return 0;                       // সফল সমাপ্তি
}

/* =====================================================
   📥 Input:
       কোনও ইনপুট লাগে না।

   📤 Output:
       Yes running
       Hello
       Gello
       Mello

   🧠 Short Note:
       main() → hello() → gello() → mello()
       ফাংশন কল স্ট্যাক ও কলিং-অর্ডার বোঝাতে ছোট উদাহরণ।

   ⏱️ Time Complexity (TC):
       O(1) — নির্দিষ্ট সংখ্যক ফাংশন কল, ইনপুট সাইজ-নিরপেক্ষ।

   💾 Space Complexity (SC):
       O(1) — অতিরিক্ত স্থায়ী মেমরি লাগে না (কল স্ট্যাক-ডেপথও স্থির)।
   ===================================================== */
