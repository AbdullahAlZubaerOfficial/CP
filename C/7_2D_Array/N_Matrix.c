#include <stdio.h>  // Standard I/O লাইব্রেরি
#include <stdlib.h> // abs() ফাংশনের জন্য

int main() { 
     
    int n;  // স্কোয়ার ম্যাট্রিক্সের সাইজ (n x n)
    scanf("%d",&n);  // ইউজার থেকে ইনপুট নেওয়া

    int ar[n][n];  // n x n স্কোয়ার ম্যাট্রিক্স ডিক্লেয়ার

    // ম্যাট্রিক্সের সব উপাদান ইনপুট নেওয়া
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&ar[i][j]);
        }
    }

    int primary = 0;    // মূল (primary) ডায়াগোনালের যোগফল
    int secondary = 0;  // সেকেন্ডারি ডায়াগোনালের যোগফল

    // মূল ডায়াগোনাল যোগফল করা
    for(int i=0; i<n; i++){
        // printf("%d ",ar[i][i]);  // (Debug) প্রিন্ট করে দেখতে পারো
        primary = primary + ar[i][i];
    }

    // সেকেন্ডারি ডায়াগোনাল যোগফল করা
    for(int i=0; i<n; i++){
        // printf("%d ",ar[i][n-1-i]);  // (Debug) প্রিন্ট করে দেখতে পারো
        secondary = secondary + ar[i][n-1-i];
    }

    // দুই ডায়াগোনালের যোগফলের পার্থক্যের Absolute value প্রিন্ট করা
    printf("%d",abs(primary-secondary));

    // printf("%d\n",primary);  // Debugging এর জন্য
    // printf("%d",secondary);  // Debugging এর জন্য
   
    return 0;
}

/*

Input:
3
11 2 4
4 5 6
10 8 -12

Output:
15


Short Note:
এই প্রোগ্রামটি একটি n x n স্কোয়ার ম্যাট্রিক্স ইনপুট নিয়ে, তার দুইটি ডায়াগোনালের যোগফল বের করে, তারপর তাদের পার্থক্যের absolute value প্রিন্ট করে।
মূল ডায়াগোনাল হলো যেখানে ইন্ডেক্স (i, i) এবং সেকেন্ডারি ডায়াগোনাল হলো যেখানে ইন্ডেক্স (i, n-1-i)।
abs() ব্যবহার করা হয় পার্থক্যটি ধনাত্মক সংখ্যা হিসেবে প্রদর্শনের জন্য।

Time Complexity (TC):
O(n²) কারণ পুরো n x n ম্যাট্রিক্স ইনপুট নিতে হয়।

ডায়াগোনাল যোগফল নেওয়ার সময় O(n) লাগে, যা মোটের ওপর negligible।

Space Complexity (SC):
O(n²) ম্যাট্রিক্সের জন্য মেমোরি লাগে।

*/