#include <stdio.h>

int main() { 
     int r, c;                       // Declare variables for rows and columns
     scanf("%d %d", &r, &c);        // Input number of rows and columns

     int ar[r][c];                  // Declare 2D array for the matrix elements

     for(int i = 0; i < r; i++) {    // Loop through rows
        for(int j = 0; j < c; j++) { // Loop through columns
            scanf("%d", &ar[i][j]);  // Input each element of the matrix
        }
     }

     int specific_row;               // Variable to store the row index to print
     scanf("%d", &specific_row);    // Input the specific row number

     for(int i = 0; i < c; i++) {   // Loop through columns of the specific row
        printf("%d ", ar[specific_row][i]); // Print each element of that row
     }

    return 0;
}

/*

Input: 
3 3
1 4 5
2 5 6
7 8 9
2

Output: 
7 8 9 

Short Note:
- This program reads a matrix and a specific row index.
- Then it prints all elements of that specific row.
- Indexing is zero-based, so row '2' means the third row.

Time Complexity (TC):
O(r*c) for input + O(c) for printing the row, overall O(r*c).

Space Complexity (SC):
O(r*c) for storing the matrix.

*/
