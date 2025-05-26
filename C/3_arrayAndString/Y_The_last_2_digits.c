#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Step-by-step mod korchi
    int result = a % 100;

    result = (result * (b % 100)) % 100;
    result = (result * (c % 100)) % 100;
    result = (result * (d % 100)) % 100;

    // Always print 2 digits
    printf("%02d\n", result);

    return 0;
}

/*

Input:
123 456 789 10

Output: 80
(কারণ (23 * 56 * 89 * 10) % 100 = 80)

*/
