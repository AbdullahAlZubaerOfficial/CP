
#include <stdio.h>

int main()
{

    char s1[101];
    char s2[101];

    scanf("%s", s1);
    scanf("%s", s2);

    int length1 = strlen(s1);
    int length2 = strlen(s2);

    printf("%d %d\n", length1, length2);
    printf("%s%s\n", s1, s2);

    char temp = s1[0];
    s1[0] = s2[0];

    s2[0] = temp;

    printf("%s %s", s1, s2);

    // printf("%c%c%c%c %c%c",s2[0],s1[1],s1[2],s1[3],s1[0],s2[1]);

    return 0;
}

/*
Input:
abcd
ef

Output:
4 2
abcdef
ebcd af

*/