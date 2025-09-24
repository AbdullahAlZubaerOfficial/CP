#include<bits/stdc++.h> // সব স্ট্যান্ডার্ড লাইব্রেরি ইনক্লুড করে
using namespace std;

int main(){
    
   int n;
   cin >> n; // কতগুলো টেস্ট কেস ইনপুট নিবি সেটা নিচ্ছিস

   while (n--) // প্রতিটা টেস্ট কেসের জন্য লুপ চালাচ্ছিস
   {
      string s;
      string t;

      cin >> s >> t; // দুইটা স্ট্রিং ইনপুট নিচ্ছিস

      int length = min(s.size(),t.size());
      // s আর t এর মধ্যে যেটা ছোট তার length বের করতেছিস
      // কারণ যতদূর পর্যন্ত দুইটার অক্ষর আছে, ততটুকুই একসাথে প্রিন্ট করবি

      // দুইটা স্ট্রিং একসাথে মিলিয়ে অক্ষর বের করতেছিস
      for(int i=0; i<length; i++){
         cout << s[i] << t[i];
         // প্রথমে s[i] প্রিন্ট করতেছিস, তারপর t[i]
         // যেমন s = "abc", t = "xyz" হলে আউটপুট হবে: axbycz
      }

      // যদি s বড় হয়, তাহলে অতিরিক্ত অংশটা প্রিন্ট কর
      if(s.size() > length){
          cout << s.substr(length) << endl;
          // length এর পর থেকে s এর বাকি অংশ প্রিন্ট কর
      } else {
          cout << t.substr(length) << endl;
          // নয়তো t এর অতিরিক্ত অংশ প্রিন্ট কর
      }

   }

   return 0; // প্রোগ্রাম শেষ
}


/*

K. I Love strings
time limit per test2 seconds
memory limit per test64 megabytes
Given two strings S and T. Print a new string that contains the following:

The first letter of the string S followed by the first letter of the string T.
the second letter of the string S followed by the second letter of the string T.
and so on...
In other words, the new string should be ( S0 + T0 + S1 + T1 + .... ).
Note: If the length of S is greater than the length of T then you have to add the rest of S letters at the end of the new string and vice versa.

Input
The first line contains a number N (1 ≤ N ≤ 50) the number of test cases.

Each of the N following lines contains two string S, T (1 ≤ |S|, |T| ≤ 50) consists of lower and upper English letters.

Output
For each test case, print the required string.

Example
InputCopy
2
ipAsu ccsit
ey gpt
OutputCopy
icpcAssiut
egypt



*/