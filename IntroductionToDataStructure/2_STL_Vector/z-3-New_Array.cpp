#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n;
   cin >> n;
   
  
    //  int ar1[n];
    //  int ar2[n];

    vector<int> ar1(n);
    vector<int> ar2(n);

     for(int i=0; i<n; i++){
        cin >> ar1[i];
     }

     for(int i=0; i<n; i++){
        cin >> ar2[i];
     }

     for(int i=0; i<n; i++){
        cout  << ar2[i] << " ";
        //    if (i != n - 1 || n > 0) cout << " ";
     }
     for(int i=0; i<n; i++){
        cout  << ar1[i] << " ";
        // if (i != n - 1) cout << " ";
     }


   
    

    return 0;
}

/*


L. New Array
time limit per test1 second
memory limit per test256 megabytes
Given two arrays A
 and B
 of size N
. Print a new array C
 that holds the concatenation of array B
 followed by array A
.

Note: Solve this problem using function.

Input
First line will contain a number N
 (1≤N≤103)
.

Second line will contain N
 numbers (1≤Ai≤105)
 array A
 elements.

Third line will contain N
 numbers (1≤Bi≤105)
 array B
 elements.

Output
Print array C
 elements separated by space.

Example
InputCopy
2
1 2
3 4
OutputCopy
3 4 1 2   


*/