#include <stdio.h>      // 📚 standard input–output header

int main() { 
    long long int n, k;                 // 🏷️ n = array size, k = কতটি বড় মান যোগ করব
    scanf("%lld %lld", &n, &k);         // 📥 user input

    long long int ar[n];                // 🗂️ VLA (variable-length array)

    /* --------- অ্যারে ইনপুট নেওয়া --------- */
    for (int i = 0; i < n; i++) {
        scanf("%lld", &ar[i]);          // 📥 প্রতিটি উপাদান ইনপুট
    }

    /* --------- Bubble Sort: descending --------- */
    for (int i = 0; i < n - 1; i++) {           // n-1 বার পাস
        for (int j = 0; j < n - i - 1; j++) {   // প্রতি পাসে n-i-1 টা তুলনা
            if (ar[j] < ar[j + 1]) {            // 🔍 বড়টাকে সামনে আনব
                long long int temp = ar[j];     // 🌀 swap
                ar[j]        = ar[j + 1];
                ar[j + 1]    = temp;
            }
        }
    }

    /* --------- প্রথম k-টি (সর্বোচ্চ) ধনাত্মক মান যোগ --------- */
    long long int sum = 0;                      // ⭐ যোগফল
    for (int i = 0; i < k; i++) {
        if (ar[i] > 0) {                        // ➕ শুধু positive হলে
            sum += ar[i];                       // যোগ
        }
    }

    printf("%lld", sum);                        // 🔢 চূড়ান্ত ফল আউটপুট
    return 0;                                   // ✅ সফল সমাপ্তি
}

/* =====================================================
📥 Input:
6 3
-5 10 7 -2 15 9

📤 Output:
34

🧠 Short Note:
১. Bubble Sort দিয়ে অ্যারেটাকে **ডেসেন্ডিং** অর্ডারে সাজানো হয়েছে।  
২. তারপর শীর্ষ k-টি ধনাত্মক মান যোগ করে প্রিন্ট করা হয়েছে।  
   (ঋণাত্মক মানগুলো উপেক্ষা করা হয়।)

⏱ Time Complexity (TC):  O(n²)  
   – Bubble Sort এর জন্য সর্বাধিক n(n−1)/2 তুলনা।  

💾 Space Complexity (SC): O(1)  
   – অতিরিক্ত শুধু কয়েকটি ভ্যারিয়েবল (in-place sort)।  
===================================================== */
