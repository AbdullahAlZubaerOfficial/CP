#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[100][100];
    int isJadu = 1;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if (r != c) {
        isJadu = 0;
    }

    for (int i = 0; i < r; i++) {
        if (!isJadu) break;
        for (int j = 0; j < c; j++) {
            if (i == j || i + j == r - 1) {
                if (a[i][j] != 1) {
                    isJadu = 0;
                    break;
                }
            } else {
                if (a[i][j] != 0) {
                    isJadu = 0;
                    break;
                }
            }
        }
    }

    if (isJadu) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
