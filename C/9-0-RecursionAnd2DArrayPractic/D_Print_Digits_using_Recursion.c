
#include <stdio.h>

void printDigit(int n)
{

    if (n == 0)
    {
        return;
    }

    printDigit(n / 10);

    int lastDigit = n % 10;

    printf("%d ", lastDigit);
}

int main()
{

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        printDigit(n);

        if (n == 0)
        {
            printf("0");
        }

        printf("\n");
    }

    return 0;
}

/*
Input:
3
121
39
123456

Output:
1 2 1
3 9
1 2 3 4 5 6

*/
