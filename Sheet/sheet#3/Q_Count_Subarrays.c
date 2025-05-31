#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Total test cases input

    while (T--) {
        int n;
        scanf("%d", &n); // Array size input

        int a[n]; // Array declare

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]); // Array values input
        }

        int count = 0; // Count total non-decreasing subarrays

        // Traverse every starting index
        for (int i = 0; i < n; i++) {
            // Start with one element (always non-decreasing)
            count++; // Example: [1], [4], [2], [3], [5]

            // Check for non-decreasing subarrays starting at i
            for (int j = i + 1; j < n; j++) {
                if (a[j] >= a[j - 1]) {
                    count++; // Subarray [i...j] is non-decreasing
                } else {
                    break; // Not non-decreasing anymore
                }
            }
        }

        printf("%d\n", count); // Output the count for this test case
    }

    return 0;
}


/*

Q. Count Subarrays
time limit per test1 second
memory limit per test256 megabytes
A sub-array of array is an array composed from a contiguous block of the original array's elements.

In other words A sub-array A[i-j], where (1 ≤ i ≤ j ≤ N), is a sequence of integers Ai, Ai + 1, ..., Aj.

For Example :

IF array = [1,6,3,7] then the subarrays are [1] , [6] , [3] , [7] , [1,6] , [6,3],[3,7], [1,6,3] , [6,3,7] , [1,6,3,7] .

Something like [1,3] would not be a sub-array as it's not a contiguous subsection of the original array.

Given a number N and an array A of N numbers. Print the number of sub-arrays which are non-decreasing.

Note:

A sub-array A[i-j] is non-decreasing if (Ai  ≤  Ai + 1  ≤  Ai + 2  ≤  ...  ≤  Aj).
Input
First line contains a number T (1 ≤ T ≤ 5) number of test cases.

Each test case contains two lines:

First line contains a number N (1 ≤ N ≤ 102) number of elements.
Second line contains N numbers ( - 105 ≤ Ai ≤ 105)
Output
For each test case print a single line contains the number of sub-arrays which are non-decreasing..

Example
InputCopy
2
5
1 4 2 3 5
1
5
OutputCopy
9
1
Note
First example:

All valid sub-arrays are :

- [1] , [1,4] , [4] , [2] , [3] , [5] , [2,3] , [3,5] , [2,3,5]

Second example:

Only single sub-array [5] is non-decreasing.

Note that singleton sub-arrays ( have only one element) are identically non-decreasing.




*/