#include<bits/stdc++.h>
using namespace std;

int main(){
    
   vector<int> v = {1,2,3,4,5,6};
   
   v.erase(v.begin()+1,v.begin()+5);

   for(int x: v){
    cout << x << " ";
   }

    

    return 0;
}

/*


Output: 1 6

ekhane index 2 theke index 5 porjonto value delete hoye geche......


*/