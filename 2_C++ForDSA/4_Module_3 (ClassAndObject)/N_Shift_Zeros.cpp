
#include<bits/stdc++.h>
using namespace std;

void CheckZero(int n,int ar[]){

    for(int i=0; i<n; i++){
        if(ar[i]!=0){
            printf("%d ",ar[i]);
        }
    }

}

void CheckEqual(int n,int ar[]){

    for(int i=0; i<n; i++){
        if(ar[i]==0){
            printf("%d ",ar[i]);
        }
    }

}

int main(){
    
   int n;
   cin >> n;
   
   int ar[n];

   for(int i=0; i<n; i++){
    cin >> ar[i];
   }


    CheckZero(n,ar);
    CheckEqual(n,ar);

    return 0;
}


// #include <stdio.h>
// #include<limits.h>

// void CheckZero(int n,int ar[]){
//       for(int i=0; i<n; i++){
//         if(ar[i] != 0){
//             printf("%d ",ar[i]);
//         }

//     }
// }

// void CheckEqual(int n,int ar[]){
    
//     for(int i=0; i<n; i++){
//         if(ar[i]==0){
//             printf("%d ",ar[i]);
//         }
//     }

// }

// int main() { 
   
//     int n;
//     scanf("%d",&n);

//     int ar[n];

//     for(int i=0; i<n; i++){
//         scanf("%d",&ar[i]);
//     }

  
//     CheckZero(n,ar);

//     CheckEqual(n,ar);
   
//     return 0;
// }


/*
N. Shift Zeros
time limit per test1 second
memory limit per test256 megabytes
Given an array A
 of size N
. Print the array elements after shifting all zeroes in array A
 to the right.

Note: Solve this problem using function.

Input
First line will contain a number N
 (1≤N≤103)
 number of elements.

Second line will contain N
 numbers (0≤Ai≤103)
.

Output
Print the array after shifting right all its zeros.

Examples
InputCopy
4
2 0 0 5
OutputCopy
2 5 0 0 
InputCopy
5
1 5 0 7 4
OutputCopy
1 5 7 4 0 

*/