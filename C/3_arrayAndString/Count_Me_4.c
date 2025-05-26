
#include <stdio.h>

int main()
{
    char s[101];

    scanf("%s", s);

    int freq[26] = {0};

    for (int i = 0; s[i] != 0; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            freq[s[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c - %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}

/*

Input: programming

Output:
a - 1
g - 2
i - 1
m - 2
n - 1
o - 1
p - 1
r - 2



*/