#include <stdio.h>

// 🔁 Recursive function to count vowels from index `i` onward
int CountVowels(char s[], int i)
{
    if (s[i] == '\0') // ✅ Base case: end of string
    {
        return 0;
    }

    int cnt = CountVowels(s, i + 1); // 🔁 Recursively call for the rest

    // ✅ Check if current character is a vowel (both cases)
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        return cnt + 1; // ➕ Count current vowel
    }
    else
    {
        return cnt; // ➖ Skip if not a vowel
    }
}

int main()
{
    char s[201];
    fgets(s, 201, stdin); // 📥 Take string input (including space)

    int ans = CountVowels(s, 0); // 🚀 Start checking from index 0

    printf("%d", ans); // 📤 Output total number of vowels

    return 0;
}

/*
==========================
📥 Input:
Data Structure Lab

📤 Output:
6

📥 Input:
Algorithm

📤 Output:
4
==========================

🧠 Short Note:
- এই প্রোগ্রামটি একটি recursive function ব্যবহার করে স্ট্রিং-এর যতগুলো vowel আছে তা count করে।
- `fgets()` ব্যবহার করা হয়েছে যেন স্ট্রিং-এর মাঝে space থাকলেও ইনপুট নেয়া যায়।
- রিকার্শনের মাধ্যমে প্রতি ক্যারেক্টার চেক করা হয়, এবং vowel হলে count বাড়ানো হয়।

==========================
⏱ Time Complexity (TC): O(n)
    ➤ প্রতিটি ক্যারেক্টার একবার করে চেক করা হয়

💾 Space Complexity (SC): O(n)
    ➤ রিকার্শনের জন্য call stack-এ অতিরিক্ত O(n) যায়

==========================

*/