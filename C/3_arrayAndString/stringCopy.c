
#include <stdio.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int lengthB = strlen(b);
    for (int i = 0; i < lengthB; i++)
    {
        a[i] = b[i];
    }

    printf("%s %s", a, b);

    return 0;
}

/*
Input:
abcd
jklm

Output:
jklm jklm

*/