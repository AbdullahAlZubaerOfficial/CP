
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[101], s2[101];

    scanf("%s %s", s1, s2);

    int val = strcmp(s1, s2);

    if (val < 0)
    {
        printf("A is smaller");
    }
    else if (val == 0)
    {
        printf("Equal");
    }
    else if (val > 0)
    {
        printf("B is smaller");
    }

    return 0;
}

/*

Input:
apple banana

Output: A is smaller

কারণ 'a' < 'b' alphabetically 🍏 < 🍌


Input:
cat cat

Output: Equal


*/
