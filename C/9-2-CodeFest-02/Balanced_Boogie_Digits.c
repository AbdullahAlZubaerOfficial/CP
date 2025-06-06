#include <stdio.h>

int main() { 
    int n, m;                  // Declare variables to store the range limits
    scanf("%d %d", &n, &m);    // Read the range values from input
    
    int found = 0;             // Flag to check if any valid number is found
    
    for (int i = n; i <= m; i++) {    // Iterate through all numbers from n to m
        int even = 0, odd = 0;         // Counters for even and odd digits
        
        int x = i;                    // Copy current number to a temporary variable
        
        while (x > 0) {               // Extract digits one by one
            int digit = x % 10;       // Get last digit
            if (digit % 2 == 0) {     // Check if digit is even
                even++;               // Increment even counter
            } else {
                odd++;                // Otherwise increment odd counter
            }
            x = x / 10;               // Remove last digit
        }
        
        // Check if even and odd digit counts are equal and not zero
        if (even == odd && even != 0) {  
            printf("%d\n", i);        // Print the valid number
            found = 1;                // Mark that at least one valid number found
        }
    }
    
    if (!found) {                    // If no valid number found in the entire range
        printf("-1");                // Print -1 as per problem statement
    }
    
    return 0;                       // End of program
}

/*
Input:
10 30

Output:
12
21
23
32

Short Note:
This program checks for numbers in a given range [n, m] whose digits contain an equal count of even and odd digits (and at least one of each).
If such numbers exist, they are printed line by line; otherwise, -1 is printed.
This logic involves digit extraction and counting even/odd digits for each number.

Time Complexity (TC): O((m-n+1) * d)
- d is the number of digits in the number (at most 10 for int)
- For each number in the range, digits are checked

Space Complexity (SC): O(1)
- Uses constant extra space for counters and variables
*/
