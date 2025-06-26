#include <stdio.h>      // Standard input-output header for printf and scanf
#include <string.h>     // String header for string functions (not used explicitly here)

int main() {
    int n;              // Variable to store number of test cases
    scanf("%d", &n);    // Read number of test cases from user
    
    while (n--) {       // Loop for each test case
        char s[1001];   // Array to store the input string (max length 1000 + 1 for '\0')
        scanf("%s", s); // Read the input string
        
        int freq[26] = {0};  // Frequency array for characters 'a' to 'z', initialized to 0
        for (int i = 0; s[i] != '\0'; i++) {   // Iterate through each character in the string
            freq[s[i] - 'a']++;   // Increment frequency count of the character
        }

        int oddCount = 0;   // Counter for characters with odd frequency
        for (int i = 0; i < 26; i++) {  // Check frequency of each character
            if (freq[i] % 2 != 0) {     // If frequency is odd
                oddCount++;             // Increment odd frequency count
            }
        }

        int add = (oddCount > 1) ? oddCount - 1 : 0;  // Calculate additions needed:
                                                     // If more than 1 odd freq char, add oddCount-1, else 0
        
        printf("%d\n", add);   // Print the result for the current test case
    }
    
    return 0;   // End of program
}

/*
Input:
2
abc
aabbccdde

Output:
2
0

Short Note:
This code reads multiple strings and calculates how many character counts have odd frequency.
If a string can be rearranged into a palindrome, at most one character may have an odd count.
The code calculates how many odd counts need to be adjusted (additions or removals) to make it a palindrome.
The output for each string is how many such changes are needed.

Time Complexity (TC): O(n * m)
- n is number of test cases
- m is length of each string (up to 1000)
For each test case, frequency counting and checking odd counts is O(m + 26) ≈ O(m)

Space Complexity (SC): O(1)
- Frequency array size is fixed at 26 regardless of input size
- Input string uses O(m) space

*/
