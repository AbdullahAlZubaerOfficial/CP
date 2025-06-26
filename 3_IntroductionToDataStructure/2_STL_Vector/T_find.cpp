#include<bits/stdc++.h>
using namespace std;

int main(){
    
   vector<int>  v= {1,2,3,2,5,2};
   
   auto it = find(v.begin(),v.end(),100);

   if(it==v.end()){
    cout << " Not Found";
   }else{
    cout << "Found";
   }
    

    return 0;
}

/*


Output : Not Found


ekhane begin theke end porjonto check korbe array modhe and check korar
por dekhlo 100 nai array modhe.....tai Not Found


*/

