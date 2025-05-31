#include<bits/stdc++.h>
using namespace std;

int main(){
    
   long long int n;
   cin >> n;
   
   long long int ar[n];

   for(int i=0; i<n; i++){
    cin >> ar[i];
}

 long long int flag = 1;

    for(int i=0; i<n/2; i++){
    //    cout << ar[i];
    
    //   cout << ar[n-1-i];

    if(ar[i] != ar[n-1-i]){
        flag = 0;
        break;
    }

    }

   
   if(flag){
    cout << "YES";
   }else{
    cout << "NO";
   }

    return 0;
}