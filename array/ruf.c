#include "stdio.h"
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arA[n];

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arA[i]);
    }

    int maxA = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arA[i] > maxA)
        {
            maxA = arA[i];
        }
    }

    int arB[n];

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arB[i]);
    }

    int maxB = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arB[i] > maxB)
        {
            maxB = arB[i];
        }
    }

    int size = (maxA > maxB ? maxA : maxB) + 1;

    int freqA[size];
    int freqB[size];

    for (int i = 0; i < size; i++)
    {
        freqA[i] = 0;
        freqB[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        freqA[arA[i]]++;
        freqB[arB[i]]++;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ",freqA[i]);
        // if (freqA[i] != freqB[i])
        // {
        //     printf("no");
        //     return 0;
        // }
    }

    // printf("yes");

    return 0;
}