#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n); // number of test cases

    while (n--) {
        char s[51], t[51], result[101]; // max 50 + 50 chars
        scanf("%s %s", s, t);

        int lenS = strlen(s);
        int lenT = strlen(t);
        int i = 0, j = 0, k = 0;

        // Merge characters alternately
        while (i < lenS && j < lenT) {
            result[k++] = s[i++];
            result[k++] = t[j++];
        }

        // If s has extra characters
        while (i < lenS) {
            result[k++] = s[i++];
        }

        // If t has extra characters
        while (j < lenT) {
            result[k++] = t[j++];
        }

        result[k] = '\0'; // end of string

        printf("%s\n", result);
    }

    return 0;
}
