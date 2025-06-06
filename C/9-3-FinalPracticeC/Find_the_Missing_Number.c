#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // Read number of test cases

    while (t--) { // Loop over each test case
        long long m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c); // Read inputs for each test case

        long long product = (long long)a * b * c; // Calculate product of a, b, c (cast to long long to avoid overflow)

        if (product == 0) { // If product is zero
            if (m == 0) {   // If m is also zero
                printf("0\n"); // Print 0
            } else {
                printf("-1\n"); // Otherwise print -1 (impossible)
            }
        } else {
            if (m % product == 0) { // If m is divisible by product
                printf("%lld\n", m / product); // Print the quotient
            } else {
                printf("-1\n"); // Otherwise print -1 (not divisible)
            }
        }
    }

    return 0; // End of program
}

/*
Input:
3
24 2 3 4
0 0 1 2
10 2 3 2

Output:
1
0
-1

Short Note:
This program checks for each test case whether the given number 'm' is divisible
by the product of a, b, and c. If divisible, it prints the quotient. If product
is zero, it checks if m is zero; prints 0 if yes, else -1.

Time Complexity (TC): O(t) - linear with number of test cases
Space Complexity (SC): O(1) - constant space usage
*/
