#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);          // Read number of rows and columns from input

    int a[100][100];                 // Declare a 2D array of max size 100x100 to store the matrix
    int isJadu = 1;                  // Flag variable initialized to 1 (true) to check the special pattern

    for (int i = 0; i < r; i++) {   // Loop over each row
        for (int j = 0; j < c; j++) {// Loop over each column in current row
            scanf("%d", &a[i][j]);   // Read matrix element at position (i, j)
        }
    }

    if (r != c) {                   // Check if the matrix is not square
        isJadu = 0;                 // If not square, set flag to 0 (false) because pattern requires square matrix
    }

    for (int i = 0; i < r; i++) {   // Loop over each row again for checking pattern
        if (!isJadu) break;          // If flag already false, break out of loop early to save time
        for (int j = 0; j < c; j++) {// Loop over each column in current row
            if (i == j || i + j == r - 1) {  // Check if current element is on either main or secondary diagonal
                if (a[i][j] != 1) {          // Diagonal elements must be 1
                    isJadu = 0;              // If not 1, set flag to false
                    break;                   // Exit inner loop immediately
                }
            } else {                        // For all other elements not on diagonals
                if (a[i][j] != 0) {         // Those elements must be 0
                    isJadu = 0;              // If not 0, set flag to false
                    break;                   // Exit inner loop immediately
                }
            }
        }
    }

    if (isJadu) {                      // After checking all elements, if flag still true
        printf("YES\n");               // Print YES indicating matrix matches the pattern
    } else {
        printf("NO\n");                // Otherwise print NO indicating it does not match
    }

    return 0;                          // Return 0 to indicate successful program termination
}

/*
Input Example:
3 3
1 0 1
0 1 0
1 0 1

Output:
YES

Short Note:
This program verifies if a square matrix has 1s on both diagonals and 0s elsewhere.
If yes, prints "YES", otherwise prints "NO".

Time Complexity: O(r*c) - every element checked once
Space Complexity: O(r*c) - stores the matrix
*/
