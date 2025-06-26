#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n;
   cin >> n;
   
   int ar[n];

   int mx = INT_MIN;

   for(int i=0; i<n; i++){
     cin >> ar[i];
   }

   for(int i=0; i<n; i++){
   //  if(ar[i]>max){
   //     max = ar[i];
   //  }

    mx = max(mx,ar[i]);

   }

   cout << mx;
    

    return 0;
}

/*
Input: 
5
1 8 5 7 5

Output: 8

*/