#include<bits/stdc++.h>
using namespace std;

int main(){
    
   vector<int> v = {1,2,3,4,5,6};
   
   cout << v[3] << endl; // 4

   cout << v.back() << endl; // 6                     // access the last element
   cout << v[v.size()-1] << endl;  // 6

   cout << v[0] << endl;    // 1             // access the first element
   cout << v.front() << endl;    // 1

    

    return 0;
}