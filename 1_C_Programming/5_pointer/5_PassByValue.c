#include <stdio.h>

void fun(int x) {
    x = 20;
    printf("Fun function er address : %p\n", &x); // memory stored as 0061FF00 (example)
}

int main() { 
    int x = 10;
    fun(x);
    printf("Main function er address: %p", &x);  // memory stored as 0061FF1C (example)
   
    return 0;
}


/*
📥 Input:
(কোনো ইনপুট নেই)

📤 Output:
Fun function er address : 0x0061FF00
Main function er address: 0x0061FF1C

📝 Short Note:
👉 যখন আমরা `fun(x);` কল করি, তখন `x` এর একটি **copy** পাঠানো হয় ফাংশনে।
👉 অর্থাৎ, `fun()` ফাংশনের ভিতরের `x` আর `main()` ফাংশনের `x` এক জিনিস না।
👉 তারা আলাদা মেমোরি অ্যাড্রেসে সংরক্ষিত থাকে (যা আউটপুটে দেখা যায়)।
👉 তাই `fun()` ফাংশনে `x = 20;` দিলেও `main()` এর `x` এর কোনো পরিবর্তন হয় না।

📌 একে বলে **call by value**।

✅ যদি আমরা চেতাম `main()` এর ভিতরের `x` কে পরিবর্তন করতে, তাহলে pointer ব্যবহার করতে হতো (call by reference).

⚙️ Time Complexity: O(1)  
📦 Space Complexity: O(1)
*/
