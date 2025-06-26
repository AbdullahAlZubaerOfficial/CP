#include<bits/stdc++.h>
using namespace std;

int main(){
    
   vector<int> v = {1,2,3,2,5,2};
   replace(v.begin(),v.end(),2,100);
   
   for(int x: v){
    cout << x << " ";
   }
    

    return 0;
}

/*


Output: 1 100 3 100 5 100 

ekhane begin theke end porjonto replace hobe and 2 er jaigai 100 replace hoye jabe....


*/