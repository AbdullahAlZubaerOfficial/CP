
#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

/*
J. Primes from 1 to n
time limit per test3 seconds
memory limit per test256 megabytes
Given a number N
. Print all prime numbers between 1 and N
 inclusive.

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime .

The first few prime numbers are


Input
Only one line containing a number N
 (2≤N≤103)
.

Output
Print all prime numbers between 1 and N
 (inclusive) separated by a space.

Example
InputCopy
10
OutputCopy
2 3 5 7 



*/