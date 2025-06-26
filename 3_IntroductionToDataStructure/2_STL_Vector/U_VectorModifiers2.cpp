#include<bits/stdc++.h>
using namespace std;

int main(){
    
   vector<int> v = {1,2,3,2,5,2};
   
   auto it = find(v.begin(),v.end(),5);

   cout << *it << endl;
    

    return 0;
}

/*


Output: 5  


*/