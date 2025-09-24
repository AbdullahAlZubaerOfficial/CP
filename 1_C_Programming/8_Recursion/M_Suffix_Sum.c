#include <stdio.h>      // 🌟 Standard I/O header

/*------------- 🔁 printSum() → নির্দিষ্ট অংশের উপাদান যোগফল -------------*/
void printSum(int i, long long int n, long long int ar1[], long long sum){
    if(i > n){                      // ⛔ base-case → সব index শেষ
        printf("%lld\n", sum);      // 🖨️ চূড়ান্ত যোগফল প্রিন্ট
        return;                     // 🔚 recursion থামানো
    }
    printSum(i + 1, n, ar1, ar1[i] + sum); // ➡️ পরের index-এ, sum আপডেট
}

int main(){                     
    long long int n, m;             // 🏷️ n = array size, m = শেষ m উপাদান যোগফল
    scanf("%lld %lld", &n, &m);      // 📥 ইনপুট n ও m

    long long int ar1[n];            // 🗂️ Variable-length array (VLA)
    for(int i = 0; i < n; i++){
        scanf("%lld", &ar1[i]);      // 📥 প্রতিটি উপাদান ইনপুট
    }

    /* 🚀 শেষ m উপাদান যোগফল বের করতে শুরু index = n-m, শেষ = n-1 */
    printSum(n - m, n - 1, ar1, 0);

    return 0;                        // ✅ প্রোগ্রাম সমাপ্ত
}

/* =====================================================
📥 Input:
5 3
1 2 3 4 5

📤 Output:
12

🧠 Short Note:
• ইউজার n ও m দেয়, যেখানে **m** হলো শেষের কতটি উপাদানের যোগফল বের করতে হবে।  
• `printSum(start, end, arr, sum)` রিকার্সিভ ফাংশন `start = n-m` থেকে `end = n-1`
  পর্যন্ত গিয়ে যোগফল হিসাব করে।  
• ইটারেটিভ লুপের বিকল্প হিসেবে recursion ব্যবহৃত হয়েছে—সহজ ও সরল! ✨

⏱️ Time Complexity (TC):  **O(m)**   → মাত্র শেষ mটি উপাদানের জন্য m বার কল  
💾 Space Complexity (SC): **O(m)**   → recursion call-stack-এ সর্বোচ্চ m ফ্রেম
===================================================== */
