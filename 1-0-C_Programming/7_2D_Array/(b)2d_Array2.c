#include <stdio.h>                    // Standard input-output header include

int main() { 
   
    int r, c;                        // Declare two integers r (rows) and c (columns)
    scanf("%d %d", &r, &c);         // Take input for number of rows and columns

    int ar[r][c];                   // Declare 2D array with r rows and c columns

    for(int i = 0; i < r; i++){     // Loop through each row from 0 to r-1
        for(int j = 0; j < c; j++){ // Loop through each column from 0 to c-1
            scanf("%d", &ar[i][j]); // Take input for element at position [i][j]
        }
    }

    for(int i = 0; i < r; i++){     // Loop through each row again to print
        for(int j = 0; j < c; j++){ // Loop through each column
            printf("%d ", ar[i][j]); // Print the element at position [i][j] with space
        }
        printf("\n");               // Print newline after each row
    }
   
    return 0;                      // End of main function, return 0 to OS
}

/*

Input:
3 3
1 4 5
2 5 6
7 8 9

Output:
1 4 5
2 5 6
7 8 9

Short Note:
- This program reads a 2D array (matrix) from input and prints it.
- Uses nested loops to handle row-wise and column-wise input/output.

Time Complexity (TC):
O(r * c) - Because we iterate through all elements once.

Space Complexity (SC):
O(r * c) - Space used to store the matrix elements.

*/
