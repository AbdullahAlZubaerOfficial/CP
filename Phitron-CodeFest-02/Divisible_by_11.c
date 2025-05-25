#include <stdio.h>
#include <string.h> 

int main() { 
   
    char s[101];

    scanf("%s", s); 

    int length = strlen(s);

    int sumLeftToRight = 0;
    int sumRightToLeft = 0;

    for (int i = length - 1; i >= 0; i--) {
        if (i % 2 == 0) {
            sumLeftToRight = sumLeftToRight + s[i] - '0';
        } else {
            sumRightToLeft = sumRightToLeft + s[i] - '0';
        }
    }

    int AbsoluteValue = sumLeftToRight - sumRightToLeft;

    if (AbsoluteValue % 11 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
