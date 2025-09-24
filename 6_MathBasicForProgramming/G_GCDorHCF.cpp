// Code: 1
#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int n1,n2;
     cin >> n1 >> n2;

     while (n1>0 && n2>0)
     {
        if(n1>n2){
            n1 = n1%n2;
        }else{
            n2 = n2%n1;
        }

     }
     
     if(n1==0){
            cout << n2;
          
        }else{
            cout << n1;
           
        }

    return 0;
}
// TC -> O(log(min(n1, n2)))




// Code: 2
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    
//      int n1,n2;
//      cin >> n1 >> n2;

//      for(int i=min(n1,n2); i>=1; i--){
//         if(n1%i==0 && n2%i==0){
//             cout << i;
//             break;
//         }
//      }
    

//     return 0;
// }
// TC -> O(min(n1, n2)) 


/*

GCD = Greatest Common Divisors
HCF = Highest Common Factor

*/


/*

Input: 9 12
Output: 3

Input: 11 13
Output: 1

Input: 20 40
Output: 20


📜 কোডের বর্ণনা (Description in Bangla)
এই C++ প্রোগ্রামটির কাজ হলো দুটি পূর্ণসংখ্যার GCD (Greatest Common Divisor) এবং LCM (Least Common Multiple) নির্ণয় করা। এটি গণনার জন্য Euclidean Algorithm এবং একটি সাধারণ গাণিতিক সূত্র ব্যবহার করে।

🔧 কোডটি যা করে:
ইউজার থেকে দুটি সংখ্যা (n1 ও n2) ইনপুট নেয়।

Euclidean Algorithm ব্যবহার করে GCD নির্ণয় করে।

GCD ব্যবহার করে নিচের সূত্র অনুযায়ী LCM নির্ণয় করে:

LCM
=
𝑛
1
×
𝑛
2
GCD
LCM= 
GCD
n1×n2
​
 
একসাথে GCD ও LCM প্রিন্ট করে দেয়।

🔍 GCD নির্ণয়ের পদ্ধতি (Euclidean Algorithm):
এই অ্যালগরিদমটি মূলত এই সূত্রের উপর কাজ করে:

GCD
(
𝑎
,
𝑏
)
=
GCD
(
𝑏
,
𝑎
%
𝑏
)
GCD(a,b)=GCD(b,a%b)
👉 প্রতি ধাপে বড় সংখ্যাটিকে ছোট সংখ্যার সাথে ভাগ করে ভাগশেষ নেয়া হয় এবং এই প্রক্রিয়া চলতে থাকে যতক্ষণ না একটি সংখ্যা 0 হয়ে যায়। যেটা অবশিষ্ট থাকে, সেটাই GCD।

🧮 LCM নির্ণয়ের সূত্র:
LCM নির্ণয় করার সূত্র হলো:

LCM
(
𝑎
,
𝑏
)
=
𝑎
×
𝑏
GCD
(
𝑎
,
𝑏
)
LCM(a,b)= 
GCD(a,b)
a×b
​
 
⚠️ তবে সরাসরি a * b করলে বড় সংখ্যার ক্ষেত্রে overflow হতে পারে। তাই কোডে ব্যবহার করা হয়েছে:

LCM
=
(
𝑎
/
GCD
)
×
𝑏
LCM=(a/GCD)×b


LCM নির্ণয়: O(1) (একটি সরল গাণিতিক সূত্র)


*/