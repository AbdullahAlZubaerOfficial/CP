#include <stdio.h>

void fun(int* p) {
    *p = 20;
}

int main() { 
    int x = 10;
    fun(&x);
    printf("%d", x);   // 20

    return 0;
}


/*
📥 Input:
(কোনো ইনপুট নেই)

📤 Output:
20

📝 Short Note:
👉 এখানে আমরা `fun(&x)` কল করেছি, অর্থাৎ `x` এর **address** পাঠিয়েছি ফাংশনে।
👉 `fun(int* p)` ফাংশনে সেই address রিসিভ করা হয়েছে pointer `p` এর মাধ্যমে।
👉 তারপর `*p = 20;` এর মানে হলো, `x` যেই address এ আছে, সেই address এ গিয়ে value টা পরিবর্তন করে `20` করে দেওয়া।

📌 একে বলে **call by reference**.

✅ এইভাবে, বাইরে (অন্য ফাংশন) থেকে value পরিবর্তন করলে main function থেকেও তা পাওয়া যায়।

⚙️ Time Complexity: O(1)  
📦 Space Complexity: O(1)
*/

