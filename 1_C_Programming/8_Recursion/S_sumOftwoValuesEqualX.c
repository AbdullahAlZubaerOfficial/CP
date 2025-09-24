#include <stdio.h>      // 🌟 Standard I/O
#include <stdlib.h>     // exit() function er jonno
#include <limits.h>     // (কোথাও ব্যবহার করা হয়নি, তবু রাখা ছিল)

// 🏷️ foundPair ব্যবহার করা হয়নি; চাইলেই বাদ দেওয়া যেত
int foundPair = 0;

/*-------------------------------------------------------
🔁 innerLoop()
j থকে n পর্যন্ত ঘুরে দেখে ar1[i] + ar1[j] == x কি না
-------------------------------------------------------*/
void innerLoop(int j, int n, int i, int ar1[], int x){
    if(j > n) return;                       // ⛔ base-case

    if(ar1[i] + ar1[j] == x){               // ✅ জোড়া পেলে…
        printf("yes");
        exit(0);                            // সাথে সাথে প্রোগ্রাম শেষ
    }
    innerLoop(j + 1, n, i, ar1, x);         // 🔁 পরের j
}

/*-------------------------------------------------------
🔁 outerLoop()
প্রতিটি i এর জন্য innerLoop() চালায়
-------------------------------------------------------*/
void outerLoop(int i, int n, int ar1[], int x){
    if(i > n - 1) return;                   // ⛔ base-case (শেষ ইন্ডেক্স পেরুলে থামবে)

    innerLoop(i + 1, n, i, ar1, x);         // 🔎 i-এর পরের সব j চেক
    outerLoop(i + 1, n, ar1, x);            // 🔁 পরের i
}

int main(){
    int n;                      
    scanf("%d", &n);                         // 📥 array size

    int ar1[n];                              // 🚀 array declare
    for(int i = 0; i < n; i++){
        scanf("%d", &ar1[i]);                // 📥 elements ইনপুট
    }

    int x;                                   // 🎯 target sum
    scanf("%d", &x);

    outerLoop(0, n - 1, ar1, x);             // 🔁 recursion শুরু

    printf("no");                            // ❌ pair না পেলে
    return 0;
}

/* =====================================================
📥 Input:
5
1 4 7 3 2
6

📤 Output:
yes

📘 Short Note:
- outerLoop() প্রতিটি i ধরছে, innerLoop() i-এর পরের সব j দেখে
  ar1[i] + ar1[j] == x হলে সাথে সাথে "yes" print এবং exit().
- সব জোড়া চেক করার পরও কিছু না পেলে শেষে "no" প্রিন্ট হয়।

⏱ Time Complexity (TC):  O(n²)
   ▸ প্রতিটি i-এর জন্য ~n-i টা চেক ⇒ মোট ≈ n(n-1)/2

💾 Space Complexity (SC): O(n)
   ▸ recursion depth সর্বোচ্চ n (outerLoop) + n (innerLoop) ≈ O(n)
===================================================== */
