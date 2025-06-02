#include<bits/stdc++.h>
using namespace std;

int main(){
    
     string s = "Hello"; 

     // 1
     string s("Hello");    // Output: Hello

     // 2
     string s("Hello World",3);  // Output: Hel      // first 3 ta character show korbe..

     // 3
     string s = "Hello World";
     string t(s,4);        // Output: o World    // ekhane first 4 ta character remove kore baki gulo show korbe.....

     // 4
     string s(5,'A');      // Output: AAAAA


    cout << s << endl;

    return 0;
}