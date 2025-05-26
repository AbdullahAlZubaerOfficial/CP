
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int years = n / 365;
    int remaining_days = n % 365;

    int month = remaining_days / 30;
    int days = remaining_days % 30;

    printf("%d years\n", years);
    printf("%d months\n", month);
    printf("%d days\n", days);

    return 0;
}

/*

Input:
400


Output:
1 years
1 months
5 days


*/