#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) { // Loop over each test case
        int n;
        scanf("%d", &n); // Read size of the array

        int a[1000], b[1000], c[1000]; // Declare three arrays of size 1000

        // Input elements into array 'a' and copy to array 'b'
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]); // Read element i into a[i]
            b[i] = a[i];        // Copy element a[i] into b[i]
        }

        // Sort array 'b' in ascending order using a simple bubble/selection sort
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (b[i] > b[j]) {       // If element at i is greater than at j
                    int temp = b[i];     // Swap elements
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        // Calculate absolute difference between elements in 'a' and sorted 'b'
        for (int i = 0; i < n; i++) {
            int diff = a[i] - b[i]; // Find difference
            if (diff < 0) {         // If difference is negative
                diff = -diff;       // Make it positive (absolute value)
            }
            c[i] = diff;            // Store difference in array 'c'
        }

        // Print the differences for this test case
        for (int i = 0; i < n; i++) {
            printf("%d ", c[i]);    // Print each difference followed by a space
        }
        printf("\n");              // Print newline after each test case
    }

    return 0; // End of program
}

/*
Input:
1
5
3 1 4 5 2

Output:
2 0 1 2 3 

Short Note:
This program takes multiple test cases. For each, it reads an array,
creates a sorted copy, calculates absolute differences between the original
and sorted arrays element-wise, and prints those differences.

Time Complexity (TC): O(t * n^2) due to nested loops for sorting
Space Complexity (SC): O(n) for storing arrays
*/
