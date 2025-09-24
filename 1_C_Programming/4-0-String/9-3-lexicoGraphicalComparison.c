#include <stdio.h> // ইনপুট-আউটপুটের জন্য হেডার ফাইল

int main()
{
   char a[101], b[101]; // দুটি স্ট্রিং ইনপুট নেওয়ার জন্য অ্যারে ডিক্লেয়ার

   scanf("%s %s", &a, &b); // দুটি স্ট্রিং ইনপুট নিচ্ছে (স্পেস দিয়ে আলাদা)

   int i = 0; // ইন্ডেক্স ভেরিয়েবল

   while (1) // ইনফিনিটি লুপ চালানো হয়েছে, ভেতরে কন্ডিশন দিয়ে break করবে
   {
      if (a[i] == '\0' && b[i] == '\0') // যদি দুই স্ট্রিংয়ের একসাথে শেষ হয়
      {
         printf("Equal"); // তাহলে তারা সমান
         break; // লুপ বন্ধ
      }
      else if (a[i] == '\0') // যদি `a` স্ট্রিং আগে শেষ হয়ে যায়
      {
         printf("A is smaller"); // তাহলে `a` ছোট
         break;
      }
      else if (b[i] == '\0') // যদি `b` স্ট্রিং আগে শেষ হয়ে যায়
      {
         printf("B is smaller"); // তাহলে `b` ছোট
         break;
      }
      else if (a[i] < b[i]) // যদি `a`-এর বর্তমান ক্যারেক্টার ছোট হয় `b` এর থেকে
      {
         printf("A is smaller"); // তাহলে `a` ছোট
         break;
      }
      else if (a[i] > b[i]) // যদি `a`-এর ক্যারেক্টার বড় হয়
      {
         printf("B is smaller"); // তাহলে `b` ছোট
         break;
      }
      else if (a[i] == b[i]) // যদি বর্তমান ক্যারেক্টার দুইটা সমান হয়
      {
         i++; // পরবর্তী ক্যারেক্টারে যাচ্ছি
      }
   }

   return 0; // প্রোগ্রাম শেষ
}

/*

📥 Input:
apple apricot

📤 Output:
A is smaller 🍎

📝 Short Note:
👉 এই প্রোগ্রামটি দুইটি স্ট্রিংকে lexicographically (dictionary order) তুলনা করে।
👉 যেমন "apple" আর "apricot" এর মধ্যে, 'l' comes before 'r' → তাই "apple" < "apricot"
👉 যদি দুই স্ট্রিং একদম মিল থাকে, তাহলে output হয় "Equal"

*/
