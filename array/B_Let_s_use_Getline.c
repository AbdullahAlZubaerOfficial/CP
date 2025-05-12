#include <stdio.h>

int main() { 
    char s[100001];
    fgets(s, 100000, stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\\' ) {
            break;
        }
        printf("%c", s[i]);
    }

    return 0;
}
