#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        int n;
        char s[15]; 

        scanf("%d", &n);
        scanf("%s", s);

        int count = 0;

       
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') count++;
        }

        int totalOnes = count * (n - 2) + n;

        printf("%d\n", totalOnes);
    }

    return 0;
}
