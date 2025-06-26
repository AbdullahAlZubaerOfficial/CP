#include <stdio.h>  // 🔹 Standard input/output library

// 🔁 Recursive function to print array elements from index 0 to n-1
void array(int ar[], int n, int i) {
    if (i == n) {         // ⛔ base case: যদি index array size এর সমান হয়, তাহলে থামবে
        return;
    }

    printf("%d ", ar[i]); // 🖨️ current index এর মান print করো
    array(ar, n, i + 1);  // 🔁 পরবর্তী index দিয়ে recursive call
}

int main() {

    int n;                    // 🔢 array size
    scanf("%d", &n);          // 📥 user থেকে ইনপুট নিচ্ছে

    int ar[n];                // 🗂️ Variable Length Array (VLA)
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);  // 📥 array elements ইনপুট নিচ্ছে
    }

    array(ar, n, 0);          // 🚀 recursion শুরু 0 index থেকে
    return 0;
}


/* =====================================================
📥 Input:
3
1 4 6

📤 Output:
1 4 6

🧠 Short Note:
এই প্রোগ্রামটি recursion ব্যবহার করে array-এর সব elements ধারাবাহিকভাবে প্রিন্ট করে।  
প্রতিবার `i` বাড়িয়ে array-এর পরবর্তী মান প্রিন্ট করা হয়।

⏱️ Time Complexity (TC):  O(n)   // n টি recursive call হবে  
💾 Space Complexity (SC): O(n)   // call stack-এ সর্বোচ্চ n টি ফ্রেম জমা হবে
===================================================== */
