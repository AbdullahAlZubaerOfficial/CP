#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int ar[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &ar[i]);
        }

        // Subarray-wise ordered maximums
        for (int i = 0; i < n; i++) {
            int maxValue = ar[i];
            for (int j = i; j < n; j++) {
                if (ar[j] > maxValue) {
                    maxValue = ar[j];
                }
                printf("%d ", maxValue); // Print after each extension
            }
        }
        printf("\n");
    }

    return 0;
}


/*

L. Max Subarray
time limit per test1 second
memory limit per test256 megabytes
A sub-array of array is an array composed from a contiguous block of the original array's elements.

In other words A sub-array A[i-j], where (1 ≤ i ≤ j ≤ N), is a sequence of integers Ai, Ai + 1, ..., Aj.

For Example :

IF array = [1,6,3,7] then the subarrays are [1] , [6] , [3] , [7] , [1,6] , [6,3],[3,7], [1,6,3] , [6,3,7] , [1,6,3,7] .

Something like [1,3] would not be a sub-array as it's not a contiguous subsection of the original array.

Given a number N and an array A of N numbers. Print the maximum number of every sub-array separated by space.

Input
First line contains a number T (1 ≤ T ≤ 5) number of test cases.

Each test case contains two lines:

First line contains a number N (1 ≤ N ≤ 100) number of elements.
Second line contains N numbers ( - 105 ≤ Ai ≤ 105).
Output
For each test case print a single line contains the maximum number of every sub-array separated by space.

print the answer in any order.

Example
InputCopy
2
4
1 6 3 7
3
3 1 2
OutputCopy
1 6 3 7 6 6 7 6 7 7
3 3 3 1 2 2 
Note
First Case :

All Sub arrays are :

[1] , [6] , [3] , [7] , [1,6] , [6,3],[3,7], [1,6,3] , [6,3,7] , [1,6,3,7]

- Sub-array [1] it maximum number is 1.

- Sub-array [6] it maximum number is 6.

- Sub-array [3] it maximum number is 3.

- Sub-array [7] it maximum number is 7.

- Sub-array [1,6] it maximum number is 6.

- Sub-array [6,3] it maximum number is 6.

- Sub-array [3,7] it maximum number is 7.

- Sub-array [1,6,3] it maximum number is 6.

- Sub-array [6,3,7] it maximum number is 7.

- Sub-array [1,6,3,7] it maximum number is 7.

so the maximum numbers are [ 1,6,3,7,6,6,7,6,7,7] you can print them in any order.





*/