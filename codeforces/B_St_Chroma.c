#include <stdio.h>

void solve(int n, int x) {
    // From x-1 to 0 (decreasing part before x)
    for (int i = x - 1; i >= 0; i--) {
        printf("%d ", i);
    }
    // From n-1 to x (decreasing part after x)
    for (int i = n - 1; i >= x; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        solve(n, x);
    }
    return 0;
}
