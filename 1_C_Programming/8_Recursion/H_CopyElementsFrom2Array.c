#include <stdio.h>  // Standard input-output header file include

// Recursive function to copy and print elements from 3 arrays into one
void copyElements(int a, int b, int c, int ar1[], int ar2[], int ar3[], int d[], int i) {
    int total = a + b + c;     // মোট কতগুলো element থাকবে তা হিসাব করা
    if (i == total) {          // যদি সবগুলো কপি হয়ে যায়, তাহলে থামিয়ে দেবে
        return;                // Recursion শেষ
    }

    if (i < a) {               // যদি index ar1 এর range এর মধ্যে হয়
        d[i] = ar1[i];         // তাহলে ar1 থেকে d[] তে কপি করো
    } else if (i < a + b) {    // যদি index ar2 এর মধ্যে হয় (ar1 এর পরে)
        d[i] = ar2[i - a];     // ar2 থেকে d[] তে কপি করো, offset adjust করে
    } else {                   // নয়ত ar3 এর index হবে
        d[i] = ar3[i - a - b]; // ar3 থেকে d[] তে কপি করো, offset adjust করে
    }

    printf("%d ", d[i]);       // কপি করা element প্রিন্ট করা

    copyElements(a, b, c, ar1, ar2, ar3, d, i + 1); // পরবর্তী index এর জন্য recursive call
}

int main() {
    int a;                     // প্রথম array এর size
    scanf("%d", &a);           // a ইনপুট নেওয়া হচ্ছে
    int ar1[a];                // a size এর array ar1 declare

    for (int i = 0; i < a; i++) {    // ar1 এর জন্য ইনপুট নেওয়া
        scanf("%d", &ar1[i]);        // প্রতিটি element নেওয়া হচ্ছে
    }

    int b;                     // দ্বিতীয় array এর size
    scanf("%d", &b);           // b ইনপুট নেওয়া হচ্ছে
    int ar2[b];                // b size এর array ar2 declare

    for (int i = 0; i < b; i++) {    // ar2 এর জন্য ইনপুট নেওয়া
        scanf("%d", &ar2[i]);        // প্রতিটি element নেওয়া হচ্ছে
    }

    int c;                     // তৃতীয় array এর size
    scanf("%d", &c);           // c ইনপুট নেওয়া হচ্ছে
    int ar3[c];                // c size এর array ar3 declare

    for (int i = 0; i < c; i++) {    // ar3 এর জন্য ইনপুট নেওয়া
        scanf("%d", &ar3[i]);        // প্রতিটি element নেওয়া হচ্ছে
    }

    int d[a + b + c];          // সব element রাখার জন্য নতুন array d তৈরি

    copyElements(a, b, c, ar1, ar2, ar3, d, 0); // Recursively কপি ও প্রিন্ট শুরু
    return 0;                  // main function শেষ
}


/* =====================================================
📥 Input:
5
1 4 5 8 9
4
1 5 8 9
3
1 4 6

📤 Output:
1 4 5 8 9 1 5 8 9 1 4 6

🧠 Short Note:
এই কোডটি ৩টি ভিন্ন ভিন্ন array-এর সব element একটি নতুন array-তে কপি করে 
recursion ব্যবহার করে এবং কপি করার সাথে সাথেই প্রিন্ট করে।

⏱️ Time Complexity (TC):  O(n)   → যেখানে n = a + b + c  
💾 Space Complexity (SC): O(n)   → d[] array এবং recursion stack

===================================================== */
