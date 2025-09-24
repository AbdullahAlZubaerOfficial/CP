#include <stdio.h>      // Standard input–output header file

// hello() → "Hello" প্রিন্ট করে এবং নিজেকেই বারবার (infinite) কল করে
void hello() {
    printf("Hello\n");  // "Hello" + newline
    hello();            // আবার hello()—কোনো base-case নেই, ফলে অনন্ত রিকারশন
}

int main() {                       // Execution শুরু
    printf("Hi\n");                // প্রথমে "Hi" প্রিন্ট হবে
    hello();                       // তারপর অসীম রিকারশন শুরু
    return 0;                      // (কখনও পৌঁছায় না, তবু সঠিক ফরম্যাটে রাখা ভালো)
}

/* =====================================================
   📥 Input:
       কোনও ইনপুট লাগে না।

   📤 Output (আংশিক):
       Hi
       Hello
       Hello
       Hello
       ...
       (infinite "Hello" until stack overflow / program crash)

   🧠 Short Note:
       • hello()-তে কোনো base-case নেই ⇒ infinite recursion  
       • নির্দিষ্ট শর্ত (base condition) ছাড়া রিকারশন **থামবে না**  
       • শেষ পর্যন্ত stack overflow বা segmentation fault ঘটবে 🛑

   ⏱️ Time Complexity (TC):
       অপরিবর্তনশীল ভাবে **অনির্দিষ্ট**—থামার শর্ত না থাকায় তত্ত্বগতভাবে অসীম।

   💾 Space Complexity (SC):
       O(n) — যেখানে *n* = রিকারশন ডিপ্‌থ (একটু পরেই প্রচুর মেমরি ব্যবহার হয়ে crash করবে) 💥
   ===================================================== */
