#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int ar[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &ar[i]);
        }

        // Subarray-wise ordered maximums
        for (int i = 0; i < n; i++) {
            int maxValue = ar[i];
            for (int j = i; j < n; j++) {
                if (ar[j] > maxValue) {
                    maxValue = ar[j];
                }
                printf("%d ", maxValue); // Print after each extension
            }
        }
        printf("\n");
    }

    return 0;
}
