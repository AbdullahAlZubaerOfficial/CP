#include<bits/stdc++.h>
using namespace std;

int main(){
    
   vector<int> v = {1,2,3,4};
   
   v.erase(v.begin()+2);

   for(int x:v){
    cout << x << " ";
   }
    

    return 0;
}

/*


Output: 1 2 4

3 number index delete hoye geche....


*/