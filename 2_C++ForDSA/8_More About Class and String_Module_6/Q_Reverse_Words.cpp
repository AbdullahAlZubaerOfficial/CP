#include <bits/stdc++.h> // সব C++ standard library ইনক্লুড করে
using namespace std;

int main() {
    string s;
    getline(cin, s); // এক লাইনের ইনপুট নিই (স্পেসসহ যেমনঃ "I love you")

    stringstream ss(s); // ইনপুট স্ট্রিংটাকে stream এ রূপান্তর করি
    bool first = true;  // এটা ব্যবহার করছি যেন প্রথম word এর আগে space না দেয়

    string word;

    while (ss >> word) {         // stream থেকে word by word নিই
        reverse(word.begin(), word.end()); // প্রতিটা word কে উল্টে দেই

        if (!first) cout << " "; // প্রথম word বাদে বাকি সবের আগে একটা space দেই
        cout << word;            // উল্টানো word প্রিন্ট করি

        first = false;           // একবার প্রিন্ট করার পর প্রথম নয়
    }

    cout << endl; // সব শেষে newline
    return 0;
}

/*

Q. Reverse Words
time limit per test1 second
memory limit per test256 megabytes
Given a string S
. For each word in S
 reverse its letters then print it.

Note: words are separated by space.

Input
Only one line contains a strings S
 (1≤|S|≤106)
 where |S| is the length of the string and it consists of lowercase and uppercase English letters, spaces.

Output
Print the answer required above.

Examples
InputCopy
I love you
OutputCopy
I evol uoy
InputCopy
You love me
OutputCopy
uoY evol em
InputCopy
We are a happy family
OutputCopy
eW era a yppah ylimaf



*/