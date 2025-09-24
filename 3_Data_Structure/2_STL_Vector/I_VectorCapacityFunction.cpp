#include<bits/stdc++.h>
using namespace std;

int main(){
    
   vector<int> v;
   
   v.push_back(10);
   v.push_back(20);

   v.push_back(30);

   v.resize(2);

   for(int i=0; i<v.size(); i++){
     cout << v[i] << " ";
   }
    

    return 0;
}


/*


Output: 10 20


if v.resize(7);  dei tahole output ashbe   10 20 30 0 0 0 0

if v.resize(7,100);    dei tahole output ashbe 10 20 30 100 100 100 100


*/