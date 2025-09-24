#include <stdio.h>  // 📚 Standard I/O header

/*---------------- ⭐ star(count) → i টা star print করে ----------------*/
void star(int count){
    if(count == 0){
        return;              // ⛔ base-case: count 0 হলে শেষ
    }
    printf("*");             // ⭐ ১টা star print করে
    star(count - 1);         // 🔁 বাকি star print করতে আবার নিজেকেই ডাকে
}

/*---------------- ⬜ space(count) → n-i টা space print করে ----------------*/
void space(int count){
    if(count == 0){
        return;              // ⛔ base-case: count 0 হলে শেষ
    }
    printf(" ");             // ⬜ ১টা space print করে
    space(count - 1);        // 🔁 বাকি space print করতে আবার কল
}

/*---------------- 🔁 OuterLoop(i,n) → row-wise pattern ----------------*/
void OuterLoop(int i, int n){
    if(i > n){
        return;              // ⛔ শেষ row এর পরে বন্ধ
    }

    space(n - i);            // ⬅️ প্রতি row তে n-i টা space
    star(i);                 // ➡️ প্রতি row তে i টা star

    printf("\n");            // 🔄 পরবর্তী লাইনে যাওয়ার জন্য newline
    OuterLoop(i + 1, n);     // 🔁 পরবর্তী row কল
}

int main() {
    int n;
    scanf("%d", &n);         // 📥 Input: কত লাইনের পিরামিড

    OuterLoop(0, n);         // ⏩ 0 index থেকে শুরু

    // 🔁 Loop version (same pattern)
    /*
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < n - i; j++) printf(" ");
        for(int j = 0; j < i; j++)     printf("*");
        printf("\n");
    }
    */

    return 0;
}

/* =====================================================
📥 Input:
4

📤 Output:
   *
  **
 ***
****

🧠 Short Note:
- এই প্রোগ্রামে একটি **right-aligned triangle** বানানো হয়েছে।
- `space(n-i)` → প্রতি লাইনের শুরুতে ঠিক যতটা space দরকার  
- `star(i)` → যতটা তারকা দরকার
- 2 টা recursion দিয়ে সুন্দরভাবে pattern তৈরি।

⏱️ Time Complexity (TC):  **O(n²)**  
   → কারণ প্রতি row-তে মোট i টা star + n-i টা space = মোট n বার recursion  

💾 Space Complexity (SC): **O(n)**  
   → প্রতিটি row-এর জন্য `OuterLoop()` একবার কল হয়, তাই call-stack এ n লেভেল

===================================================== */
