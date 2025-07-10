#include<bits/stdc++.h>
using namespace std;

int main(){


/*

    Sample 1: 
    
    list<int> l = {10,20,30,40,50,60,70};
    
    l.erase(next(l.begin(),3));   // ekhane 3 number index theke 40 delete hoye jabe

    for(int val : l){
        cout << val << " ";
    }

    // Output: 10 20 30 50 60 70 
    
*/



/*

Sample 2:

 list<int> l = {10,20,30,40,50,60,70};
 l.erase(next(l.begin(),2),next(l.begin(),5)); // 2 number index theke 5 number index porjonto value delete hoye jabe.....orthath 30,40,50 delete hoye jabe

 for(int val : l){
    cout << val << " ";
 }

 // Output: 10 20 60 70 

*/



/*

Sample 3:

list<int> l = {10,20,20,20,50,60,70};

replace(l.begin(),l.end(),20,100);    // 20 er jaigai 100 replace hoye jabe......

for(int val : l){
    cout << val << " ";
}

// Output: 10 100 100 100 50 60 70 

*/


//  Sample 4:

list<int> l = {10,20,20,20,50,60,70};
auto it = find(l.begin(),l.end(),20);    // ekhane 20 khuje pawa jbe tai Found dekhabe output e

if(it == l.end()){
    cout << "Not Found" ;    
}
else{
  cout << "Found";
}

// Output: Found


    return 0;
}