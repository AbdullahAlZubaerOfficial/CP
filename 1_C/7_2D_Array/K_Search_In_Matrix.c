#include <stdio.h>  // Standard input-output লাইব্রেরি

int main() { 
   int r,c;  // row এবং column এর জন্য ভ্যারিয়েবল
   scanf("%d %d",&r,&c);  // row ও column ইনপুট নেওয়া
   
   int ar[r][c];  // 2D array (matrix) ঘোষণা

   for(int i=0; i<r; i++){  // row লুপ
    for(int j=0; j<c; j++){  // column লুপ
        scanf("%d",&ar[i][j]);  // matrix এর এলিমেন্ট ইনপুট নেওয়া
    }
   }

   int number;  // খোঁজার জন্য সংখ্যা
   scanf("%d",&number);  // number ইনপুট

   int found = 0;  // ফ্ল্যাগ, সংখ্যা পাওয়া গেলে 1 হবে

   for(int i=0; i<r && !found; i++){  // row লুপ, found=0 না হলে চালাবে
    for(int j=0; j<c; j++){  // column লুপ
        if(ar[i][j]==number){  // যদি এলিমেন্ট number এর সমান হয়
            found = 1;  // সংখ্যা পাওয়া গেছে
            break;  // ভিতরের লুপ থেকে বের হওয়া
        }
    }
   }

   if(found){  // সংখ্যা পাওয়া গেলে
    printf("will not take number");
   }
   else{
    printf("will take number");
   }
   
    return 0;
}

/*

Input:
3 3
1 4 5
2 5 6
7 8 9
5

Output:
will not take number

Short Note:
এই প্রোগ্রামটি একটি matrix এর মধ্যে একটি নির্দিষ্ট সংখ্যা আছে কিনা চেক করে। 
সংখ্যা পাওয়া গেলে "will not take number" প্রিন্ট করে, না হলে "will take number"।

Time Complexity: O(r*c)
কারণ matrix এর প্রতিটি এলিমেন্ট একবার চেক করা হয়।

Space Complexity: O(r*c)
কারণ matrix সংরক্ষণের জন্য r*c স্পেস লাগে।

*/
