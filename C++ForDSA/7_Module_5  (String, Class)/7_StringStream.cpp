#include<bits/stdc++.h>
using namespace std;

int main(){
    
   string s;
   getline(cin,s);
   
//    cout << s << endl;

   stringstream ss(s);    // eta word by word vag kore..........

   string word ;
   
   // Input: Hello I am Abdullah Al Zubaer

   ss >> word;
   cout << word << endl;    // Hello
   ss >> word;
   cout << word << endl;    // I
   ss >> word;
   cout << word << endl;    // am
   ss >> word;
   cout << word << endl;    // Abdullah


   int count = 0;

   while(ss >> word){
    cout << word << endl; 
    count++;       
   }  // Output:
      // Hello 
      // I 
      // am
      // Abdullah
      // Al
      // Zubaer



    cout << count << endl;    // Output: 6

    return 0;
}