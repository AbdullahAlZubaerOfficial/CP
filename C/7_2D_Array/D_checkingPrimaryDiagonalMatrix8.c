#include <stdio.h>

int main() { 
   int r, c;                              // Declare variables for rows and columns
   scanf("%d %d", &r, &c);               // Take input for rows and columns

   int ar[r][c];                         // Declare 2D array of size r*c

   for(int i = 0; i < r; i++) {          // Loop over each row
      for(int j = 0; j < c; j++) {       // Loop over each column
         scanf("%d", &ar[i][j]);         // Take input element for matrix position [i][j]
      }
   }

   int flag = 100;                       // Initialize flag to 100 (assume matrix is diagonal)

   if(r == c) {                         // Check if matrix is square
      for(int i = 0; i < r; i++) {     // Loop over rows
         for(int j = 0; j < c; j++) {  // Loop over columns
            if(i != j && ar[i][j] != 0) {  // Check off-diagonal elements
               flag = 200;              // If any off-diagonal element is non-zero, set flag to 200
            }
         }
      }
   } 
   else {
      flag = 200;                       // If not square, it's not a diagonal matrix
   }

   if(flag == 100) {
      printf("This is a primary diagonal matrix");  // Print if primary diagonal matrix
   }
   else {
      printf("This is not a primary diagonal matrix");  // Print otherwise
   }

   return 0;
}

/*

Input: 
3 3
4 0 0
0 5 0
0 0 8

Output:
This is a primary diagonal matrix

Input: 
3 3
4 0 0  
0 5 0  
0 5 8

Output:
This is not a primary diagonal matrix  

Short Note:
- A primary diagonal matrix is a square matrix where all off-diagonal elements are zero.
- The program first checks if the matrix is square.
- Then, it checks all off-diagonal elements for zero.
- If all off-diagonal elements are zero, it confirms the matrix is a primary diagonal matrix.

Time Complexity (TC):
O(r*c) - must check all elements.

Space Complexity (SC):
O(r*c) - storing the matrix.

*/
