#include <stdio.h>

int main() { 
   
    int r, c;
    scanf("%d %d", &r, &c);            // Read number of rows and columns

    int ar[r][c];                      // Declare 2D array

    for(int i = 0; i < r; i++) {       // Loop to input matrix elements
        for(int j = 0; j < c; j++) {
            scanf("%d", &ar[i][j]);
        }
    }

    int diagonalize = ar[0][0];        // Store first diagonal element
    int scaller = 1;                   // Flag to check if matrix is scalar

    if (r == c) {                      // Only square matrices can be scalar matrices
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if ((i != j) && (ar[i][j] != 0)) {  // Non-diagonal element must be 0
                    scaller = 0;
                    break;
                }
                if ((i == j) && (ar[i][j] != diagonalize)) {  // Diagonal elements must be equal
                    scaller = 0;
                    break;
                }
            }
            if (scaller == 0) break;  // Exit early if not scalar
        }
    }
    else {
        scaller = 0;                  // Not square => not scalar
    }

    if (scaller) {
        printf("This is a Scaller Matrix");
    }
    else {
        printf("This is not a Scaller Matrix");
    }

    return 0;
}

/*

Input:
3 3
2 0 0
0 2 0
0 0 2

Output:
This is a Scaller Matrix

Input:
3 3
2 4 0
9 0 0
0 5 9

Output:
This is not a Scaller Matrix

Input:
2 3
5 6 7
8 9 4

Output:
This is not a Scaller Matrix


Short Note:
- A scalar matrix is a diagonal matrix where all diagonal elements are equal and all off-diagonal elements are zero.
- This program checks that condition.
- It only works for square matrices.

Time Complexity (TC):
O(r*c) to check all elements.

Space Complexity (SC):
O(r*c) for storing the matrix.

*/
