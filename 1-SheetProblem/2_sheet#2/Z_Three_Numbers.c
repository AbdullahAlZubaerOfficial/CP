#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b); // Input values

    int count = 0;

    // Loop over all possible values of i and j
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= a; j++) {
            int z = b - i - j; // Calculate z

            // Check if z is within valid range
            if (z >= 0 && z <= a) {
                count++; // Valid (i, j, z) triplet
            }
        }
    }

    printf("%d\n", count); // Output the result
    return 0;
}

/*

Z. Three Numbers
time limit per test3 seconds
memory limit per test256 megabytes
Given two numbers K
 and S
. Determine how many different values of X,Y
 and Z
 such that (0≤X,Y,Z≤K)
 and X+Y+Z=S
.

Input
Only one line containing two numbers K
 and S
 (0≤K≤3000,0≤S≤3K)
.

Output
Print the answer required above.

Examples
InputCopy
2 1
OutputCopy
3
InputCopy
9 4
OutputCopy
15
Note
In the first test case all values of X,Y,Z
 that satisfy the conditions are :

0 0 1

0 1 0

1 0 0

In the second test case all values of X,Y,Z
 that satisfy the conditions are :

*/