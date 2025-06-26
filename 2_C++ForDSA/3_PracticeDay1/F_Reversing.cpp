#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n;
   
   cin >> n;

   int ar[n];

   for(int i=0; i<n; i++){
    cin >> ar[i];
   }

   int i= 0; 
   int j = n-1;

   while(i<j){
    // int temp = ar[i];
    // ar[i] = ar[j];

    // ar[j] = temp;

    swap(ar[i],ar[j]);

    i++;
    j--;
    
   }

   for(int i=0; i<n; i++){
    cout<< ar[i] << " ";
   }
    

    return 0;
}

/*
Input: 
4
5 1 3 2

Output: 2 3 1 5


*/