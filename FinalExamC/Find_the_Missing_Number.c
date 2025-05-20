#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long product = (long long)a * b * c;

        if (product == 0) {
            if (m == 0) {
                printf("0\n");
            } else {
                printf("-1\n");
            }
        } else {
            if (m % product == 0) {
                printf("%lld\n", m / product);
            } else {
                printf("-1\n");
            }
        }
    }

    return 0;
}
