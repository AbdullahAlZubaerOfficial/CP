
#include <stdio.h>

int main()
{

    char s[101];

    scanf("%s", s);

    int count = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }

    printf("%d", count);

    return 0;
}

// Input : Abdullah
// Output: 8