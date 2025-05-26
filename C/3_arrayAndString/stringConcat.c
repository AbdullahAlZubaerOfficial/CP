
#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];

    scanf("%s %s", &a, &b);

    int length_a = strlen(a);
    int length_b = strlen(b);

    for (int i = 0; i <= length_b; i++)
    {
        a[i + length_a] = b[i];
    }
    printf("%s %s", a, b);

    return 0;
}

// #include <stdio.h>

// int main() {
//    char a[101],b[101];
//    scanf("%s %s",a,b);

//    printf("%s%s %s",a,b,b);

//     return 0;
// }

/*
Input: abcd jklm
Output: abcdjklm jklm

*/