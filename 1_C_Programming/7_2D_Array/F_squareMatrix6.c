#include <stdio.h>

int main() { 
   int r, c;                       // Declare variables for rows and columns
   scanf("%d %d", &r, &c);        // Input number of rows and columns

   int ar[r][c];                  // Declare 2D array for the matrix elements

   for(int i = 0; i < r; i++) {    // Loop through rows
    for(int j = 0; j < c; j++) {   // Loop through columns
        scanf("%d", &ar[i][j]);    // Input each element of the matrix
    }
   }
   
   if(r == c) {                    // Check if number of rows equals columns
    printf("yes square matrix");  // If yes, print it is a square matrix
   }
   else {
    printf("no square matrix");   // Otherwise, print it is not a square matrix
   }

    return 0;
}

/*

Input: 
3 3
1 4 5
2 5 6
7 8 9

Output:
yes square matrix


Input: 
1 4
1 4 5 8

Output:
no square matrix


Short Note:
- A square matrix has equal number of rows and columns.
- This program checks the equality of rows and columns to determine that.

Time Complexity (TC):
O(r*c) — for inputting the matrix elements.

Space Complexity (SC):
O(r*c) — for storing the matrix.

*/
