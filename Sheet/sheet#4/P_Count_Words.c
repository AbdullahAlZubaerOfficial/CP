#include <stdio.h>    // standard input/output header
#include <ctype.h>    // isalpha() ফাংশনের জন্য প্রয়োজন

int main() { 
    char s;           // প্রতিবার ইনপুটের একটি ক্যারেক্টার রাখার জন্য ভ্যারিয়েবল
    int count = 0;    // মোট শব্দের সংখ্যা রাখার জন্য কাউন্টার
    int inWord = 0;   // আমরা বর্তমানে একটি শব্দের ভিতরে আছি কিনা (0 = না, 1 = হ্যাঁ)

    // যতক্ষণ পর্যন্ত ইনপুট পাওয়া যাচ্ছে, loop চলবে
    while ((s = getchar()) != EOF) {
        
        // যদি ইনপুট ক্যারেক্টারটি অক্ষর হয় (a-z বা A-Z)
        if (isalpha(s)) {
            
            // এবং আমরা এখনো কোনো শব্দে ঢুকিনি
            if (!inWord) {
                count++;       // নতুন একটি শব্দ শুরু হলো, তাই count বাড়িয়ে দাও
                inWord = 1;    // এখন আমরা একটি শব্দের ভিতরে আছি
            }
        
        } else {
            // যদি অক্ষর না হয় (যেমন: space, comma, punctuation)
            inWord = 0;       // শব্দ শেষ, পরবর্তী শব্দ detect করার জন্য প্রস্তুত হও
        }
    }

    // লুপ শেষে মোট শব্দের সংখ্যা প্রিন্ট করো
    printf("%d", count);

    return 0;
}


/*

P. Count Words
time limit per test1 second
memory limit per test256 megabytes
Given a string S
. Print number of words in it.

Word : consists of lowercase and uppercase English letters.

Input
Only one line contains S
 (1≤|S|≤106)
 where |S| is the length of the string and it consists of lowercase and uppercase English letters, spaces and ('!', '.', '?' and ',') symbols.

Output
Print the number of words in the given string.

Examples
InputCopy
Meep Meep!
OutputCopy
2
InputCopy
I tot I taw a putty tat.
OutputCopy
7
InputCopy
I did! I did! I did taw a putty tat.
OutputCopy
10
InputCopy
Shsssssssssh ... I am hunting wabbits. Heh Heh Heh Heh ...
OutputCopy
9



*/