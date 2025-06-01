#include<bits/stdc++.h>
using namespace std;

int main(){
    
   long long int n;
   cin >> n;

    long long int ar[n];
   
   for(int i=0; i<n; i++){
    cin >> ar[i];
   }

   sort(ar,ar+n);

   for(int i=0; i<n; i++ ){
    cout << ar[i] << " ";
   }


   cout << endl;

   sort(ar, ar+n,greater<int>());

   for(int i=0; i<n; i++){
    cout << ar[i] << " ";
   }
    

    return 0;
}