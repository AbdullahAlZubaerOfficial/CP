#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int totalF = m1 + m2;
        int new = (m1 * d) / totalF;
        int fewer = d - new;

        printf("%d\n", fewer);
    }

    return 0;
}

/*

Input:
2
2 2 4
3 2 5

Output:
2
2



 Explanation:

First Case:

m1 = 2, m2 = 2, d = 4

totalF = 2 + 2 = 4

new = (2 × 4) / 4 = 2

fewer = 4 - 2 = 2 ✅

Second Case:

m1 = 3, m2 = 2, d = 5

totalF = 3 + 2 = 5

new = (3 × 5) / 5 = 3

fewer = 5 - 3 = 2 ✅


*/