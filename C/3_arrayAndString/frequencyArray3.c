
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int fre[6] = {0};

    for (int i = 0; i < n; i++)
    {
        // int val = ar[i];
        // fre[val]++;

        fre[ar[i]]++;
    }

    for (int i = 0; i < 6; i++)
    {

        printf("%d -> %d\n", i, fre[i]);
    }

    return 0;
}

/*

Input:
10
1 2 0 2 0 3 1 2 5 0

Output:
0 -> 3
1 -> 2
2 -> 3
3 -> 1
4 -> 0
5 -> 1

*/