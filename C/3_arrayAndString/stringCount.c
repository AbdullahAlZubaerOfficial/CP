
#include <stdio.h>
#include <string.h>

int main()
{

    char s[1000001];
    scanf("%s", s);

    int length = strlen(s);

    int sum = 0;

    for (int i = 0; i < length; i++)
    {

        // printf("%c",s[i]);
        sum += s[i] - 48;
        // or
        // sum += s[i] - '0';
    }

    printf("%d", sum);

    return 0;
}

// Input : 359
// Output: 17