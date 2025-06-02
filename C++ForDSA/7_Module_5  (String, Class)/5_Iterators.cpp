#include<bits/stdc++.h>
using namespace std;

int main(){
    
   string s = "Hello";
   
   for(int i=0; i<s.size(); i++){
    cout << s[i] << endl; 
   }
   /*

   Output: 
   H
   e
   l
   l
   o

   */

   cout << *s.begin()  << endl;     // Output: H       // string 0 number index character print korbe.......

   cout << *s.end() << endl;    // Output: Null   // string er last character er porer ghore index print kore....
    
   cout << *(s.end()-1) << endl; // Output: o


   for(string:: iterator it = s.begin(); it < s.end(); it++){    // string:: iterator  etar poriborte auto o likha jai......
    cout << *it << endl; 
   }

   /*

   Output: 
   H
   e
   l
   l
   o

   */


    return 0;
}