#include <stdio.h>

int main() { 
    int n;
    scanf("%d", &n);  // ইউজার থেকে ইনপুট নিচ্ছে, কত লাইন প্রিন্ট হবে

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%c ", 'A' + j);  // 'A' থেকে শুরু করে প্রতি লাইনে একটিবার করে বড় হচ্ছে
        }
        printf("\n");  // প্রতিটি লাইনের শেষে নতুন লাইনে যাবে
    }

    return 0;
}


/*
📥 Input:
5

📤 Output:
A 
A B 
A B C 
A B C D 
A B C D E 

📝 Short Note:
🔸 এই কোডটি একটি চরিত্র (character) প্যাটার্ন প্রিন্ট করে।
🔸 প্রতিটি লাইনে 'A' থেকে শুরু করে পরপর অক্ষর (character) প্রিন্ট হয় যতক্ষণ না সেই লাইনের ইন্ডেক্স পর্যন্ত যায়।
🔸 প্রতি লাইনে অক্ষরের সংখ্যা বাড়তে থাকে এক করে।

📌 Time Complexity: O(n^2)  
📌 Space Complexity: O(1)

✅ এই কোডে nested loop ব্যবহারে character pattern প্রিন্ট করা শেখা যায়, যা future pattern-based প্রশ্নে সাহায্য করবে। 💪😊
*/
