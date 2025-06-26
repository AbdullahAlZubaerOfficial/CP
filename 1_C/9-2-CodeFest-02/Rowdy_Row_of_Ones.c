#include <stdio.h>

int main() { 
    int r, c;
    scanf("%d %d", &r, &c);        // Read number of rows and columns
    
    int ar[r][c];                  // Declare 2D array
    
    // Input matrix elements
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &ar[i][j]);
        }
    }

    int maxOnes = 0;               // To store max count of 1's found in a row
    int row = 0;                   // To store the row index with max 1's
    
    // Loop through each row
    for (int i = 0; i < r; i++) {
        int count = 0;             // Count number of 1's in current row
        
        for (int j = 0; j < c; j++) {
            if (ar[i][j] == 1) {
                count++;           // Increment count if element is 1
            }
        }
        
        // Update maxOnes and row if current row has more 1's
        if (count > maxOnes) {
            maxOnes = count;
            row = i;
        }
    }

    printf("%d", row);             // Print the row index with maximum number of 1's

    return 0;
}

/*
Input:
3 4
0 1 0 1
1 1 1 0
0 0 1 1

Output:
1

Short Note:
This program reads a 2D matrix of 0s and 1s and finds the row that contains the maximum
number of 1's. It counts 1's in each row and keeps track of the row with the highest count.

Time Complexity (TC): O(r * c) as it checks every element once
Space Complexity (SC): O(r * c) for storing the matrix
*/
