
#include <stdio.h>

int main()
{

    int a, c, b;
    scanf("%d %c %d", &a, &c, &b);

    // printf("%d %c %d",a,c,b);

    if (c == '>')
    {
        if (a > b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else if (c == '<')
    {
        if (a < b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else if (c == '=')
    {

        if (a == b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }

    return 0;
}

/*

Input: 5 > 3
Output: Right ✅

Input: 10 < 2
Output: Wrong ❌

Input: 7 = 7
Output: Right ✅

*/

