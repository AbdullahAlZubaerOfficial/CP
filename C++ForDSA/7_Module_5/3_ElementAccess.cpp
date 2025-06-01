#include<bits/stdc++.h>
using namespace std;

int main(){
    
   string s;
   
   cin >> s;

   cout << s[0] << endl;  // Input: Hello      Output: H
   cout << s[1] << endl;  // output: e    ..........

   cout << s.at(0) << endl;  // Output: H

   cout << s.back()  << endl;   // or, s[s.size()-1]    // Output: o             last character
   cout << s.front() << endl;                           // Output: H             first character
    
   
    return 0;
}