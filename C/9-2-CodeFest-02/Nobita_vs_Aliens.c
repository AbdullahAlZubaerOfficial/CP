#include <stdio.h>

int main() {
    int n, k;                  // n: number of elements, k: maximum allowed sum for pairs
    scanf("%d %d", &n, &k);    // Read input values
    
    int ar[n];                 // Array to store elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);   // Read each element
    }

    // Sorting array using simple bubble sort or selection sort approach
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ar[i] > ar[j]) {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    int count = 0;             // Counter for valid pairs
    int i = 0, j = n - 1;     // Two pointers: i starts from beginning, j from end

    while (i < j) {
        int sum = ar[i] + ar[j];  // Calculate sum of the two elements

        if (sum <= k) {           // If sum is less than or equal to k
            count++;              // Increase count of pairs
            i++;                  // Move forward from start pointer
            j--;                  // Move backward from end pointer
        } else {
            j--;                  // If sum is too large, move end pointer backward to reduce sum
        }
    }

    printf("%d\n", count);       // Print the total number of valid pairs
    return 0;
}

/*
Input:
5 7
1 2 3 4 5

Output:
2

Short Note:
This code finds the maximum number of pairs in a sorted array such that the sum of
each pair is less than or equal to k. It uses two pointers, one from the start and one
from the end of the sorted array, to efficiently count valid pairs.

Time Complexity (TC): O(n^2) due to the sorting with nested loops + O(n) for two-pointer traversal
Space Complexity (SC): O(n) for storing the array
*/
