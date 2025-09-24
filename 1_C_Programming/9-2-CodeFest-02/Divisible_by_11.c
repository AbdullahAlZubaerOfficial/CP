#include <stdio.h>
#include <string.h> 

int main() { 
    char s[101];              // Array to store the input number as a string

    scanf("%s", s);           // Read the string input

    int length = strlen(s);   // Calculate the length of the string

    int sumLeftToRight = 0;   // Sum of digits at even positions from right (0-based)
    int sumRightToLeft = 0;   // Sum of digits at odd positions from right (0-based)

    // Loop from the last character to the first
    for (int i = length - 1; i >= 0; i--) {
        if (i % 2 == 0) {     // If position is even index (from left)
            sumLeftToRight += s[i] - '0';  // Add digit to sumLeftToRight
        } else {              // If position is odd index (from left)
            sumRightToLeft += s[i] - '0';  // Add digit to sumRightToLeft
        }
    }

    int AbsoluteValue = sumLeftToRight - sumRightToLeft;  // Calculate difference

    if (AbsoluteValue % 11 == 0) {      // Check if difference is divisible by 11
        printf("YES");                   // Print YES if divisible
    } else {
        printf("NO");                    // Print NO otherwise
    }

    return 0;    // End of program
}

/*
Input:
121

Output:
YES

Short Note:
This program checks if the number represented by the input string is divisible by 11.
It calculates the alternating sum of digits (difference between sum of digits in even and odd positions)
and checks if the result is divisible by 11, which is a well-known divisibility rule for 11.

Time Complexity (TC): O(n) where n is length of the input string
Space Complexity (SC): O(n) for storing the input string
*/
