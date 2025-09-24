#include <stdio.h>
#include <string.h>

// 🔍 ফাংশনটি চেক করে যে, দেওয়া স্ট্রিংটি পালিনড্রোম কিনা
int is_palindrome(char s[]){
    int length = strlen(s);
    for(int i = 0; i < length / 2; i++){
        if(s[i] != s[length - 1 - i]){
            return 0; // যদি কোন ক্যারেক্টার ম্যাচ না করে, তাহলে পালিনড্রোম না
        }
    }
    return 1; // সব ক্যারেক্টার ম্যাচ করলে, পালিনড্রোম
}

int main() { 
    char s[1001];
    scanf("%s", s); // ইনপুট নিচ্ছে একটি স্ট্রিং

    int result = is_palindrome(s); // ফাংশন কল করে ফলাফল নিচ্ছে

    if(result == 1){
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}


/*
📥 Input:
madam

📤 Output:
Palindrome

📥 Input:
hello

📤 Output:
Not Palindrome

📝 Short Note:
🔸 একটি Palindrome স্ট্রিং হলো যেটা সামনে থেকে এবং পেছন থেকে একরকম থাকে।
🔸 যেমন: madam, racecar, level ইত্যাদি।
🔸 কোডটিতে `strlen()` দিয়ে স্ট্রিংয়ের দৈর্ঘ্য বের করে, এরপর প্রথম এবং শেষ অক্ষর মিলিয়ে মিলিয়ে চেক করা হয়।

📌 Time Complexity: O(n)  
📌 Space Complexity: O(1)

✅ এই কোডটা স্ট্রিং ও লজিক্যাল চিন্তাভাবনার জন্য খুব ভালো প্র্যাকটিস ভাই 😎🔥
*/
