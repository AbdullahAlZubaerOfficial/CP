#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n,q;
  cin >> n >> q;
  
  vector<long long>v(n+1),pre(n+1);
  
  for(int i =1; i<=n; i++){
    cin >> v[i];
    pre[i] = pre[i-1] + v[i];
  }
  
  
  
  while(q--){
    
    int l,r;
    
    cin >> l >> r;
    
    cout << pre[r] - pre[l-1] << endl;
    
  }
  
  
}


/*

prefix sum is a technique to optimize range sum queries.

say, 6 4 2 7 2 7
er ক্রমোযোজিত গনসংখ্যা 6 10 12 19 21 28
now if we want to fund the sum of elements from index 2 to 4 we can do it in o(1) time
by using the prefix sum array.

  prefix[i] = prefix[i-1] + arr[i]

so, prefix[4] - prefix[1] = 19 - 10 = 9



Y. Range sum query
time limit per test1.5 seconds
memory limit per test256 megabytes
Given 2 numbers N
 and Q
, an array A
 of N
 number and Q
 number of pairs L
, R
. For each query Q
 print a single line that contains the summation of all numbers from index L
 to index R
.

Input
First line contains two numbers N
, Q
 (1≤N,Q≤105)
 where N
 is number of elements in A
 and Q
 is number of query pairs.

Second line contains N
 numbers(1≤Ai≤109)
.

Next Q
 lines contains L,R
 (1≤L≤R≤N)
.

Output
For each query Q
 print a single line that contains the summation of all numbers from index L
 to index R
.

Examples
InputCopy
6 3
6 4 2 7 2 7
1 3
3 6
1 6
OutputCopy
12
18
28
InputCopy
4 3
5 5 2 3
1 3
2 3
1 4
OutputCopy
12
7
15





*/