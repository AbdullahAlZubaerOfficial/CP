#include <stdio.h> // Standard input-output header file include kora hoise

int main() {
    int n;
    scanf("%d", &n); // User theke input newa hocche (example: user n = 5 input dise)

    int a = 0; // fib(1) = 0 → 1st Fibonacci number
    int b = 1; // fib(2) = 1 → 2nd Fibonacci number
    int result; // Notun Fibonacci value gula ekhane store korbo

    if (n == 1) {
        printf("0\n"); // Jodi user 1 dey, tahole fib(1) = 0 print hobe
    }
    else if (n == 2) {
        printf("1\n"); // Jodi user 2 dey, tahole fib(2) = 1 print hobe
    }

    else {
        // Loop cholbe 3 theke n porjonto (example: n = 5 → i = 3, 4, 5)
        for (int i = 3; i <= n; i++) {
            result = a + b; // result = fib(i-2) + fib(i-1)
            a = b;          // purono b value ta ekhon a hoye jabe
            b = result;     // result (notun Fibonacci) ta b hoye jabe
        }
        printf("%d\n", b); // Last b er value hocche fib(n), tai print b
    }

    return 0; // Program successfully end
}


/*

O. Fibonacci
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print the Fibonacci number of N.

Note: In order to create the Fibonacci sequence use the following function:

fib(1) = 0.
fib(2) = 1.
fib(n) = fib(n - 1) + fib(n - 2).
Input
Only one line containing a number N (1 ≤ N ≤ 50).

Output
Print the Fibonacci number of N.

Examples
InputCopy
1
OutputCopy
0
InputCopy
5
OutputCopy
3

*/