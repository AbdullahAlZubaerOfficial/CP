#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n;
   cin >> n;
   
   vector<int> ar(n+1),pre(n+1);
   for(int i = 1; i<=n; i++){
    cin >> ar[i];
    pre[i] = pre[i-1] + ar[i];
    
   }

   for(int i=1; i<=n; i++){
    cout << pre[i] << " ";
   }

    

    return 0;
}

// sheet: https://docs.google.com/document/d/1SInJU7vWMgmLO-lulcQ2aGAeLze-0632fS8Iz-14t_A/edit?tab=t.0

/*

Problem-1: Running Sum of an Array
Description:
Given an array nums of integers, define a running sum of the array as runningSum[i] = sum(nums[0]…nums[i]). Write a C++ program to compute the running sum of the given array and print the result.
Note: Solve this problem using function and Vector. 
Input
The first line contains an integer n representing the size of the array.
The second line contains n integers representing the elements of the array nums.
Output
Print the running sum of the array as a sequence of integers separated by spaces.
Example:

Input: 
4
1 2 3 4

Output:
1 3 6 10

Explanation:
Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].






*/