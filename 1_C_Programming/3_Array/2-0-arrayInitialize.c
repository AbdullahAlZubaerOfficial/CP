#include <stdio.h>  // standard input-output header file

int main()
{
    int x = 10;  // একটা স্বাভাবিক integer variable (তবে এখানে ব্যবহার হয়নি)

    // একটি array declare করা হয়েছে এবং এর মধ্যে ৫টি মান রাখা হয়েছে
    int ar[5] = {10, 20, 30, 40, 50};

    // লুপ চলবে 0 থেকে 4 পর্যন্ত (মোট ৫ বার)
    for (int i = 0; i < 5; i++)
    {
        // প্রতিবার ar[i] এর মান প্রিন্ট করা হবে, একই লাইনে space দিয়ে
        printf("%d ", ar[i]);
    }

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}


/*
📥 Input:
(এই প্রোগ্রামে কোনো input নেই)

📤 Output:
10 20 30 40 50

📝 Note:
এই প্রোগ্রামটি একটি array এর ৫টি মান → 10, 20, 30, 40, 50  
একটি লুপ ব্যবহার করে একটার পর একটা প্রিন্ট করে।

👉 `ar[5]` মানে array তে ৫টা element আছে, যার index হয় 0 থেকে 4 পর্যন্ত।

💡 Loop দিয়ে array এর প্রতিটি element access করা হয় এইভাবে → `ar[i]`

🎯 এটা array এর basic concept শেখার জন্য চমৎকার উদাহরণ 💪
*/
