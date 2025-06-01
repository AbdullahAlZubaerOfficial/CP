#include<bits/stdc++.h>
using namespace std;

int main(){
    
   string s = "Hello World";
   
   // important
   cout << s.size() << endl;  // Hello World length hoche 11
   
   s.clear(); // string Hello World ta clear hoye jabe.....

   if(s.empty()== true){    // empty or size die check kora jai...
    cout << "Empty" << endl;
   }else{
    cout << "Not Empty" << endl;
   }

   s.resize(4);   // Hello World theke ekhon shudhu Hell print hobe.....

   s.resize(15,'x'); // Hello Worldxxxx        ekhane Hello World er size 11 and baki je 4 ta space oi jaigai x bosie dise 4 bar......

  
   // optional
   cout << s.max_size() << endl;   // random vabe memory max size 2147483647

   cout << s.capacity() << endl; // hello world er capacity 15.....ekhane dynamic memory allocate kore.....nijer moto kore size barie nei.....input onushare.....


   




    return 0;
}