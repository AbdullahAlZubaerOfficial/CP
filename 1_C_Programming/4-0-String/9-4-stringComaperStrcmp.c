#include <stdio.h>      // ইনপুট-আউটপুটের জন্য প্রয়োজনীয় হেডার ফাইল
#include <string.h>     // স্ট্রিং ফাংশন (strcmp) ব্যবহারের জন্য

int main()
{
    char s1[101], s2[101]; // দুটি স্ট্রিং ইনপুট নেওয়ার জন্য অ্যারে ডিক্লেয়ার

    scanf("%s %s", s1, s2); // দুটি স্ট্রিং ইনপুট নিচ্ছে

    int val = strcmp(s1, s2); // strcmp() ফাংশন দুটি স্ট্রিং তুলনা করে
                              // রিটার্ন করে:
                              //  < 0 → s1 ছোট
                              //  == 0 → দুইটা সমান
                              //  > 0 → s2 ছোট

    if (val < 0)  // যদি s1 ছোট হয়
    {
        printf("A is smaller"); // তাহলে "A is smaller" প্রিন্ট হবে
    }
    else if (val == 0) // যদি দুইটা স্ট্রিং সমান হয়
    {
        printf("Equal");
    }
    else if (val > 0) // যদি s1 বড় হয়
    {
        printf("B is smaller");
    }

    return 0; // প্রোগ্রাম শেষ
}

/*

📥 Input:
apple banana

📤 Output:
A is smaller 🍏 < 🍌

📝 Explanation:
👉 এখানে "apple" এবং "banana" তুলনা করা হয়েছে।
👉 'a' comes before 'b' alphabetically, তাই apple < banana
👉 তাই output হবে: A is smaller

📥 Input:
cat cat

📤 Output:
Equal

👉 কারণ দুইটি স্ট্রিং একদম মিলেছে তাই strcmp() রিটার্ন করেছে 0

*/
