#include <stdio.h>                     // Standard input-output header include

int main() { 
   int r, c;                           // Declare variables for rows (r) and columns (c)

   scanf("%d %d", &r, &c);            // Take input for number of rows and columns

   int ar[r][c];                      // Declare a 2D array with r rows and c columns

   for(int i = 0; i < r; i++){        // Loop through each row
       for(int j = 0; j < c; j++){    // Loop through each column
           scanf("%d", &ar[i][j]);    // Input element at position [i][j]
       }
   }

   if(r == 1){                       // Check if number of rows is 1
       printf("yes row matrix");     // If true, print yes row matrix
   }
   else{
       printf("no row matrix");      // Otherwise, print no row matrix
   }

   return 0;                         // End of program
}

/*

Input: 
1 4
1 4 5 8

Output: 
yes row matrix

Input:
3 3
1 4 5
2 5 6
7 8 9

Output: 
no row matrix

Short Note:
- This program checks if the input matrix is a row matrix.
- A row matrix has exactly 1 row.
- It reads a matrix and then prints "yes row matrix" if rows=1, else "no row matrix".

Time Complexity (TC):
O(r*c) due to input reading of all elements.

Space Complexity (SC):
O(r*c) for storing the matrix elements.

*/
