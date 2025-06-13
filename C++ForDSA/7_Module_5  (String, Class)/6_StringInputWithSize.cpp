#include<bits/stdc++.h>
using namespace std;

int main(){
    
  
    int x;
   
    cin >> x;
    string s;

   cin.ignore();
   
   getline(cin,s);   

                           // getline er problem hoche eta enter ta ke o input hisebe nie nei......example 10                              but jokhon cin.ignore()  use korbo tokhon ei problem hobe na....Output: 10
                                                                                                                             //  Hello        output: 10                                                                                 Hello 


                         // Input: Hello World 
   cout << s << endl;  // Output: Hello World
    
   

    return 0;
}