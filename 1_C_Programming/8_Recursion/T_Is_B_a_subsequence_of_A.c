#include <stdio.h>   // 🌟 standard I/O header include

/*----------------------------------------------------------
 🔁 subsequence()
 ar2[] কি ar1[]-এর subsequence → recursion দিয়ে যাচাই
  a  = ar1 size,  b  = ar2 size  
  i  = ar1 index, j  = ar2 index
----------------------------------------------------------*/
int subsequence(int a, int b, int ar1[], int ar2[], int i, int j){
    if (j == b)            return 1;      // ✅ ar2-র সব element match হয়ে গেছে
    if (i == a)            return 0;      // ❌ ar1 শেষ, কিন্তু ar2 এখনও বাকি

    if (ar1[i] == ar2[j])                 // 🔍 element match হলে
        return subsequence(a, b, ar1, ar2, i + 1, j + 1); // ➡️ দু-index এগিয়ে চেক
    else                                   // ❌ match না হলে
        return subsequence(a, b, ar1, ar2, i + 1, j);     // ➡️ শুধু ar1 index এগিয়ে
}

int main(){                                
    int a, b;                              // 📏 a = ar1 size, b = ar2 size
    scanf("%d %d", &a, &b);                // 📥 দুটি সাইজ ইনপুট

    int ar1[a];                            // 🗂️ ar1 অ্যারে
    for (int i = 0; i < a; i++)            // 🔁 ar1 পূরণ
        scanf("%d", &ar1[i]);              // 📥 প্রত্যেক মান ইনপুট

    int ar2[b];                            // 🗂️ ar2 অ্যারে
    for (int i = 0; i < b; i++)            // 🔁 ar2 পূরণ
        scanf("%d", &ar2[i]);              // 📥 প্রত্যেক মান ইনপুট

    if (subsequence(a, b, ar1, ar2, 0, 0)) // 🌟 subsequence ফাংশন কল
        printf("YES");                     // ✅ subsequence মিলেছে
    else
        printf("NO");                      // ❌ subsequence মেলেনি

    return 0;                              // 🚀 প্রোগ্রাম শেষ
}

/* =====================================================
📥 Input (উদাহরণ):
3 2
1 4 7
1 7

📤 Output:
YES

🧠 Short Note:
এই প্রোগ্রামটি দেখে যে ar2[] অ্যারেটি ar1[]-এর subsequence কি-না।
Subsequence হলে order অক্ষুণ্ণ থাকে, কিন্তু contiguous হতে হয় না।

⏱ Time Complexity (TC):  O(a + b)
   – প্রতিটি array একবারের বেশি স্ক্যান করা লাগে না।

💾 Space Complexity (SC): O(a + b)
   – recursion call-stack এর গভীরতা সর্বোচ্চ a + b স্তর।
===================================================== */
