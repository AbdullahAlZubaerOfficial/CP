#include<bits/stdc++.h>
using namespace std;

int main(){
    
   vector<int> v = {1,2,3,4,5};
   vector<int> v2;
   
   v2 = v;

   for(int i=0; i<v2.size(); i++){
    cout << v2[i] << " ";
   }
    

    return 0;
}

// VectorModifiers

/*


Output: 1 2 3 4 5   


*/