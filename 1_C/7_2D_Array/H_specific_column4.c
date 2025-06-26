#include <stdio.h>

int main() { 
   
    int r, c;                      // Declare variables for rows and columns
    scanf("%d %d", &r, &c);       // Input number of rows and columns

    int ar[r][c];                 // Declare 2D array for the matrix

    for(int i = 0; i < r; i++) {    // Loop through rows
        for(int j = 0; j < c; j++) { // Loop through columns
            scanf("%d", &ar[i][j]);  // Input each element of the matrix
        }
    }

    int specific_column;            // Variable to store the column index to print
    scanf("%d", &specific_column); // Input the specific column number

    for(int i = 0; i < r; i++) {   // Loop through each row for that column
        printf("%d\n", ar[i][specific_column]); // Print elements of that column
    }
   
    return 0;
}

/*

Input: 
3 3
1 4 5
2 5 6
7 8 9
1

Output: 
4
5
8

Short Note:
- This program reads a matrix and a specific column index.
- It then prints all elements from that specific column.
- Indexing is zero-based, so column '1' means the second column.

Time Complexity (TC):
O(r*c) for input + O(r) for printing the column, overall O(r*c).

Space Complexity (SC):
O(r*c) for storing the matrix.

*/
