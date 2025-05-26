#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);

    int len = strlen(s);

    for (int i = 0; i < len / 2; i++)
    { // ekhane half ongsho mile kina dekhse, jemon abba ekhane ab porjonto loop cholbe
        if (s[i] == s[len - 1 - i])
        { // ekhane ab and ba er olta ab soman kina dekhse ...........

            printf("YES"); // ab and ab soman tai yes
            return 0;
        }
    }

    printf("NO\n"); // else no

    return 0;
}

// Input: abba
// Output: YES

// Input: icpcassiut
// Output: NO
