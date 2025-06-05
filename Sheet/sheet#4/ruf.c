#include <stdio.h>
#include<ctype.h>

int main() {
    char ch;

    printf("Enter any lowercase letter: ");
    scanf(" %c", &ch);  

    if (ch >= 'a' && ch <= 'z') {
        printf("Uppercase letter: %c\n", toupper(ch));
    } else {
        printf("Not a lowercase letter.\n");
    }

    return 0;
}
