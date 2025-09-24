#include <stdio.h>  // ইনপুট-আউটপুট ব্যবহারের জন্য হেডার ফাইল

int main() { 
   int n, x;                   // n = কয়টা সংখ্যা ইনপুট নিবে, x = প্রতিবার ইনপুট নেয়ার ভেরিয়েবল
   int even = 0, odd = 0;      // জোড় ও বিজোড় সংখ্যা গণনার জন্য কাউন্টার
   int pos = 0, neg = 0;       // পজিটিভ ও নেগেটিভ সংখ্যা গণনার জন্য কাউন্টার

   scanf("%d", &n);            // ইউজার থেকে n ইনপুট নেয়া

   for(int i = 1; i <= n; i++){   // n বার লুপ চলবে
      scanf("%d", &x);            // প্রতিবার একটি সংখ্যা ইনপুট নিচ্ছে

      if(x % 2 == 0){             // যদি সংখ্যাটি ২ দিয়ে ভাগ যায় তাহলে even
         even++;
      }
      else{                       // না গেলে odd
         odd++;
      }

      if(x > 0){                  // যদি পজিটিভ হয়
         pos++;
      }
      else if(x < 0){             // যদি নেগেটিভ হয়
         neg++;
      }
   }

   // সবগুলো কাউন্ট প্রিন্ট করা হচ্ছে
   printf("Even: %d\n", even);
   printf("Odd: %d\n", odd);
   printf("Positive: %d\n", pos);
   printf("Negative: %d\n", neg);
   
   return 0;  // প্রোগ্রাম সফলভাবে শেষ
}


/*
Input:
5
1
-2
0
3
-4

Output:
Even: 3
Odd: 2
Positive: 2
Negative: 2

Note: এই প্রোগ্রামটি n সংখ্যক ইনপুট নেয় এবং প্রত্যেকটা সংখ্যার উপর ভিত্তি করে বলে কয়টি Even, Odd, Positive এবং Negative সংখ্যা ছিল ✅📊
*/
