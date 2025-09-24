#include <stdio.h>            // 📚 stdio.h ইনক্লুড – ইন-আউটপুট ফাংশন ব্যবহার করতে

int main()                    // 🏁 মেইন ফাংশন – প্রোগ্রাম শুরু
{
   char a[101], b[101];       // 📝 a ও b: সর্বাধিক ১০০-ক্যারেক্টারের দুইটি স্ট্রিং অ্যারে

   scanf("%s %s", a, b);      // ⌨️  স্পেস-সেপারেটেড দুইটি শব্দ ইনপুট (a আর b)

   int i = 0;                 // 🔢 সূচক i = 0 → স্ট্রিংয়ের প্রথম ক্যারেক্টারে পয়েন্টার

   while (1)                  // 🔄 অনন্ত লুপ – ভেতরে break না পেলে চলতেই থাকবে
   {
      if (a[i] == b[i])       // ✅ দুই স্ট্রিংয়ের বর্তমান ক্যারেক্টার যদি সমান হয়
      {
         i++;                 //    ↳ পরের ক্যারেক্টারে এগোই
      }
      else if (a[i] == '\0' && b[i] == '\0')    // 🟰 উভয় স্ট্রিং শেষ হলে
      {
         printf("%s is smaller", a);            //    ↳ দুটিই সমান ⇒ a-কেই ছোট ধরা
         break;                                 //    ↳ লুপ শেষ
      }
      else if (a[i] == '\0')   // 🛑 a শেষ কিন্তু b এখনো আছে → a ছোট
      {
         printf("%s is smaller", a);
         break;
      }
      else if (b[i] == '\0')   // 🛑 b শেষ কিন্তু a এখনো আছে → b ছোট
      {
         printf("%s is smaller", b);
         break;
      }
      else if (a[i] < b[i])    // 🔡 ASCII অনুযায়ী a-র ক্যারেক্টার ছোট হলে a ছোট
      {
         printf("%s is smaller", a);
         break;
      }
      else if (a[i] > b[i])    // 🔡 নতুবা a-র ক্যারেক্টার বড় → b ছোট
      {
         printf("%s is smaller", b);
         break;
      }
   }

   return 0;                   // ✅ সফল সমাপ্তি
}

// ℹ️ যে স্ট্রিংয়ের ক্যারেক্টার ASCII টেবিলে আগে, সেটিকেই “smaller” ধরা হবে

/*
Input:
apple banana

Output:
apple is smaller
*/
