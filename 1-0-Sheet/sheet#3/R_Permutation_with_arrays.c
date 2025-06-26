
#include <stdio.h>      // 🔹 Input/output functions (scanf, printf er jonno)
#include <stdlib.h>     // 🔹 Not used here, but usually for memory and sort functions

int main() {
    int n;
    scanf("%d", &n);    // 🔸 User theke n input ney (array size)

    int a[n], b[n];     // 🔸 n size er dui array declare kora holo: A and B

    // 🔸 A array er value input nilam
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);    // example: 5 1 1 9 3
    }

    // 🔸 B array er value input nilam
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);    // example: 1 9 1 5 3
    }

    // 🔸 A array ke sort kora hocche (ascending order e)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {           // jodi age er value boro hoy porer theke
                int temp = a[j];             // swap kori
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // 🔸 B array keo same bhabe sort korchi
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (b[j] > b[j + 1]) {           // jodi age er value boro hoy porer theke
                int temp = b[j];             // swap kori
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    // 🔸 Compare korchi A & B sorted arrays same kina
    int same = 1;         // dhori duita array same

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {     // jodi kono index e mismatch hoy
            same = 0;           // same na
            break;
        }
    }

    // 🔸 Print output
    if (same) {
        printf("yes\n");   // ✅ jodi duita array same thake
    } else {
        printf("no\n");    // ❌ jodi same na hoy
    }

    return 0;
}


/*

R. Permutation with arrays
time limit per test1 second
memory limit per test256 megabytes
Given a number N
 and two arrays A
, B
 of N
 numbers. Determine if B
 is a permutation of A
 or not.

Note: A permutation is an arrangement of all or part of a set of objects.

For example: The array [2, 1, 3], [3, 2, 1] and [2, 3, 1] are permutation of the array [1, 2, 3].

Input
First line contains a number N
 (1≤N≤103)
 Number of elements.

Second line contains N
 numbers (1≤Ai≤107)
 elements of array A
.

Third line contains N
 numbers (1≤Bi≤107)
 elements of array B
.

Output
Print "yes" if array B
 is a permutation of A
 otherwise, print "no" without quotations.

Examples
InputCopy
4
4 2 3 7
2 3 4 9
OutputCopy
no
InputCopy
5
5 1 1 9 3
1 9 1 5 3
OutputCopy
yes



*/