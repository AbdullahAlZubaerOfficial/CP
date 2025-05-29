#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n;
   cin >> n;
   int a[n];

   for(int i=0; i<n; i++){
    cin >> a[i];
   }  

   sort(a,a+n);          // sort(starting, starting + ending index Number);        // ascending order

   sort(a, a+n, greater<int>());  // descending order ...........boro theke choto man.......
   
   for(int i=0; i<n; i++){
    cout << a[i] << " ";
   }
    
    return 0;
}

/*

Input: 
5
10 50 300 40 20

Output: 
10 20 40 50 300

*/