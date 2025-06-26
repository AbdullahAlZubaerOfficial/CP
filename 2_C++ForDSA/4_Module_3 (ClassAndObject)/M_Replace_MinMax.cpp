#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n;
   cin >> n;
   
   int ar[n];

   for(int i=0; i<n; i++){
    scanf("%d",&ar[i]);
   }

   int min = INT_MAX;
   int max = INT_MIN;

   int minIndex = 0;
   int maxIndex = 0;

   for(int i=0; i<n; i++){
    if(ar[i]<min){
        min = ar[i];
        minIndex = i;
    }

    if(ar[i]>max){
        max = ar[i];
        maxIndex = i;
    }

   }

  
    swap(ar[minIndex],ar[maxIndex]);

   for(int i=0; i<n; i++){
    cout<< ar[i] << " ";
   }
    

    return 0;
}

/*
M. Replace MinMax
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Find minimum number in these numbers.
Find maximum number in these numbers.
Swap minimum number with maximum number.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

It's guaranteed that all numbers are distinct.

Output
Print the array after the replacement operation.

Example
InputCopy
5
4 1 3 10 8
OutputCopy
4 10 3 1 8 

*/