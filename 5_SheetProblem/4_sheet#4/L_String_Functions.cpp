#include <bits/stdc++.h> // সব standard C++ লাইব্রেরি একসাথে ইনক্লুড করার জন্য
using namespace std;

int main() {
    ios::sync_with_stdio(false); // C-এর stdio থেকে sync বন্ধ করে I/O দ্রুত করে
    cin.tie(NULL); // cin এর সাথে cout এর টান বন্ধ করে, যাতে দ্রুত input নেওয়া যায়

    int n, q;
    cin >> n >> q; // n = স্ট্রিং এর দৈর্ঘ্য, q = কয়টি কুয়েরি আসবে

    string s;
    cin >> s; // মূল স্ট্রিং ইনপুট নিচ্ছি

    while (q--) { // প্রতিটি কুয়েরির জন্য নিচের কাজ করবো
        string cmd;
        cin >> cmd; // কুয়েরির ধরণ (যেমন: pop_back, sort, substr ইত্যাদি)

        if (cmd == "pop_back") {
            s.pop_back(); // স্ট্রিং এর শেষ ক্যারেক্টারটি বাদ দাও
        } 
        else if (cmd == "front") {
            cout << s.front() << '\n'; // স্ট্রিং এর প্রথম ক্যারেক্টার প্রিন্ট করো
        } 
        else if (cmd == "back") {
            cout << s.back() << '\n'; // স্ট্রিং এর শেষ ক্যারেক্টার প্রিন্ট করো
        } 
        else if (cmd == "push_back") {
            char x;
            cin >> x;
            s.push_back(x); // স্ট্রিং এর শেষে ক্যারেক্টার যোগ করো
        } 
        else if (cmd == "print") {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << '\n'; // pos ইনডেক্সের ক্যারেক্টার প্রিন্ট (1-based → 0-based)
        } 
        else if (cmd == "substr") {
            int l, r;
            cin >> l >> r; // সাবস্ট্রিং এর জন্য সীমা

            // l এবং r যেকোনো দিক থেকে আসতে পারে, তাই min/max ব্যবহার করছি
            for (int i = min(l, r) - 1; i <= max(l, r) - 1; ++i) {
                cout << s[i];
            }
            cout << '\n'; // সাবস্ট্রিং প্রিন্ট
        } 
        else if (cmd == "sort") {
            int l, r;
            cin >> l >> r;

            // স্ট্রিং এর l থেকে r পর্যন্ত অংশ sort করছি (1-based → 0-based ইনডেক্সে)
            sort(s.begin() + min(l, r) - 1, s.begin() + max(l, r));
        } 
        else if (cmd == "reverse") {
            int l, r;
            cin >> l >> r;

            // স্ট্রিং এর l থেকে r পর্যন্ত অংশ reverse করছি (1-based → 0-based ইনডেক্সে)
            reverse(s.begin() + min(l, r) - 1, s.begin() + max(l, r));
        }
    }

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}


/*

L. String Functions
time limit per test1 second
memory limit per test256 megabytes
Given two numbers N
, Q
 and a string S
 of size N
. Followed by Q lines of the following queries:

pop_back : remove the last character in the string.
front : print the first character in the string.
back : print the last character in the string.
sort l r : where (1≤l,r≤|S|)
 sort all characters of S
 from l
 to r
.
reverse l r : where (1≤l,r≤|S|)
 reverse all characters of S
 from l
 to r
.
print pos : where (1≤pos≤|S|)
 print the character in the index pos
.
substr l r : where (1≤l,r≤|S|)
 print sub-string of s
 from l
 to r
.
push_back x : add character x
 in the end of the string.
For each query, print the answer associated with it in a single line.

It's guaranteed that in the first 7 types of the query, the string is not empty.

it's recommended to use built-in functions of String.

Input
The first line contains two integers N
, Q
 (1≤N,Q≤103)
 N
 denoting the size of the string and Q number of queries.

The second line contains the string S
 consists of only lowercase English letters.

Next Q
 lines contain the queries.

Output
For each query, print the answer associated with it in a single line.

Example
InputCopy
18 8
assiutinupperegypt
substr 1 6
sort 5 8
pop_back
back
reverse 1 6
front
push_back i
print 4
OutputCopy
assiut
p
n
s

*/