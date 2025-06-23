#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

   
    sort(ar, ar + n);

    for (int i = 0; i < q; i++) {

        int val;
        cin >> val;

        int flag = 0;
        int l = 0, r = n - 1;

        while (l <= r) {

            int mid = (l + r) / 2;

            if (ar[mid] == val) {
                flag = 1;

                break;
            } else if (ar[mid] > val) {
                r = mid - 1;

            } else {
                l = mid + 1;

            }
        }

        if (flag == 1) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }

    return 0;
}

/*

Z. Binary Search
time limit per test1 second
memory limit per test256 megabytes
Given 2 numbers N
 and Q
, array A of N numbers and Q queries each one contains a number X
.

For each query print a single line that contains "found" if the number X
 exists in array A
 otherwise, print "not found".

Input
First line contains two numbers N
, Q
 (1≤N,Q≤105)
.

Second line contains N
 numbers (1≤Ai≤109)
.

Next Q
 lines contains X
 (1≤X≤109)
.

Output
Print the answer for each query in a single line.

Example
InputCopy
5 3
1 5 4 3 2
5
3
6
OutputCopy
found
found
not found



*/