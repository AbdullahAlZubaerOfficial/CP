#include<bits/stdc++.h>
using namespace std;

int main(){
    
   vector<int> v;
   v.push_back(10);
   v.push_back(20);
   v.push_back(30);
   
   cout << v.size() << endl;

   v.clear();

   cout << v.size() << endl;

   cout << v[0] << endl;
   cout << v[1] << endl;
    

    return 0;
}

/*


Output: 
3
0
10
20

clears the vector elements. Do not delete the memory only clear the value......


*/