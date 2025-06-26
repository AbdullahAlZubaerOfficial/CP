
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Input N

    int a = 0, b = 1; // First two Fibonacci numbers

    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%d", a); // Print first number (0)
        } else if (i == 2) {
            printf(" %d", b); // Print second number (1)
        } else {
            int next = a + b; // Calculate next Fibonacci number
            printf(" %d", next);
            a = b;  // Move to next
            b = next;
        }
    }

    printf("\n"); // New line after output
    return 0;
}


/*

Y. Easy Fibonacci
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print first N numbers of the Fibonacci sequence.

Note: In order to create the Fibonacci sequence use the following function:

fib(1) = 0.
fib(2) = 1.
fib(n) = fib(n - 1) + fib(n - 2).
Input
Only one line containing a number N (1 ≤ N ≤ 45).

Output
Print the first N numbers from the Fibonacci Sequence .

Example
InputCopy
7
OutputCopy
0 1 1 2 3 5 8 

*/