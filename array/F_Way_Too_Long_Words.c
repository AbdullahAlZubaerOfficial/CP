#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        char s[101];
        scanf("%s", s);
        
        int len = strlen(s);
        
        if (len > 10) {
            printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
        } else {
            printf("%s\n", s);
        }
    }
    
    return 0;
}


/*
Input:
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

Output: 
word
l10n
i18n
p43s


*/