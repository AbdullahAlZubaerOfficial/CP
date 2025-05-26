
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char s[10001];

        scanf("%s", s);

        int capital = 0, small = 0, digits = 0;

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                small++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capital++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                digits++;
            }
        }
        printf("%d %d %d\n", capital, small, digits);
    }

    return 0;
}

/*

Input:
2
Hello123
CODE2025

Output:
1 4 3
8 0 4


*/