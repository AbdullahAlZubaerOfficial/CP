#include<bits/stdc++.h>
using namespace std;

int main(){
    
   long long int l,n,m;
   
   cin >> l >> n >> m;

   long long int count = 1;

   for(long long int i=l; i<=n; i++){
    count = (count * i)%m;
   }
    
   cout << count;

    return 0;
}