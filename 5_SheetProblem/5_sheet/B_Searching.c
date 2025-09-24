#include <stdio.h>

void solve() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        if (n == 1) {
            if (x == 0) {
                printf("-1\n");
            } else {
                printf("%d\n", x);
            }
        } else if (n == 2) {
            if (x == 0) {
                printf("2\n");
            } else {
                printf("%d\n", x + 1);
            }
        } else {
            if (x == 0) {
                if (n % 2 == 1) {
                    printf("%d\n", n - 1);
                } else {
                    printf("%d\n", n);
                }
            } else {
                printf("%d\n", x + n - 1);
            }
        }
    }
}

int main() {
    solve();
    return 0;
}