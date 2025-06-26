#include<bits/stdc++.h>
using namespace std;

int main(){
    
   vector<int> v = {1,2,3,4};
   
   v.pop_back();

   for(int x:v){
    cout << x << " ";
   }
    

    return 0;
}

/*


Output: 1 2 3

Remove the last element.......


*/