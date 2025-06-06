#include <stdio.h>

int main() { 
     
    int r, c;                        // Declare variables for rows and columns
    scanf("%d %d", &r, &c);         // Input number of rows and columns

    int ar[r][c];                   // Declare 2D array for matrix elements

    for(int i = 0; i < r; i++) {     // Loop through rows
        for(int j = 0; j < c; j++) { // Loop through columns
            scanf("%d", &ar[i][j]);  // Input each element
        }
    }

    int total_val = r * c;           // Total number of elements in matrix
    int zero = 0;                   // Counter for zero elements

    for(int i = 0; i < r; i++) {     // Loop through rows
        for(int j = 0; j < c; j++) { // Loop through columns
            if(ar[i][j] == 0) {      // Check if element is zero
                zero++;              // Increment zero count
            }
        }
    }

    if(total_val == zero) {          // If all elements are zero
        printf("This is a zero matrix");  // Print zero matrix
    }
    else {
        printf("This is not a zero matrix"); // Otherwise print not zero matrix
    }
    
    return 0;
}

/*

Input: 
2 3
0 0 0
0 0 0

Output:
This is a zero matrix

Input: 
2 3
5 0 5
0 0 0

Output:
This is not a zero matrix

Short Note:
- A zero matrix is one in which all elements are zero.
- The program counts all zero elements and compares with total elements.
- If all elements are zero, it's a zero matrix, else not.

Time Complexity (TC):
O(r*c) — checks all elements once.

Space Complexity (SC):
O(r*c) — stores the matrix in memory.

*/
