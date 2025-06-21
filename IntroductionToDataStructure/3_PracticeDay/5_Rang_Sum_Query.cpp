#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;


    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    // prefix sum array
    vector<long long> prefixSum(n);
    prefixSum[0] = a[0];

    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + a[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--; r--;  // zero-based indexing

        long long sum;
        if (l == 0) {
            sum = prefixSum[r];
        } else {
            sum = prefixSum[r] - prefixSum[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}

// TC -> O(n+q)
// SC -> O(n)

/*


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