#include<bits/stdc++.h>
using namespace std;

int main(){
    
     list<int> l = {10,20,30,40,50};
     

     cout << l.back() << endl;  // 50

     cout << l.front() << endl; // 10

     cout << *next(l.begin(),2) << endl;  // 30

     cout << *l.begin() << endl;  // 10


    return 0;
}