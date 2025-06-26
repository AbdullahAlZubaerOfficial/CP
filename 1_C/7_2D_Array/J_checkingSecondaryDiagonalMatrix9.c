#include <stdio.h>

int main() { 
   int r, c;
   scanf("%d %d", &r, &c);               // Read number of rows and columns

   int ar[r][c];                         // Declare 2D array

   for(int i = 0; i < r; i++) {          // Input matrix elements
      for(int j = 0; j < c; j++) {
         scanf("%d", &ar[i][j]);
      }
   }

   int flag = 100;                       // Flag to check matrix type, 100 = valid secondary diagonal

   if (r == c) {                        // Only square matrices can be secondary diagonal
      for(int i = 0; i < r; i++) {
         for(int j = 0; j < c; j++) {
            if (i + j == r - 1) {
               // Element is on secondary diagonal, no check needed
            }
            else {
               if (ar[i][j] != 0) {    // Non-secondary diagonal elements must be zero
                  flag = 200;          // Mark as invalid secondary diagonal
                  break;
               }
            }
         }
         if(flag == 200) break;          // Early exit if invalid
      }
   }
   else {
      flag = 200;                       // Non-square matrix cannot be secondary diagonal
   }

   if(flag == 100) {
      printf("This is a secondary diagonal matrix");
   }
   else {
      printf("This is not a secondary diagonal matrix");
   }

   return 0;
}

/*

Input: 
3 3
0 0 4
0 7 0
9 0 0

Output: 
This is a secondary diagonal matrix


Input: 
3 3
4 0 0  
0 5 0  
0 5 8

Output: 
This is not a secondary diagonal matrix  

*/

/* Explanation:
- A secondary diagonal matrix has non-zero elements only on the secondary diagonal.
- The secondary diagonal elements are at indices where i + j = n - 1 (for n x n matrix).
- All other elements must be zero.
- This code checks that condition.
*/
