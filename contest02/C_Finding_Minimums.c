#include <stdio.h>
#include <limits.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i += K) {
        int min = INT_MAX;

        for (int j = i; j < i + K && j < N; j++) {
            if (arr[j] < min) {
                min = arr[j];
            }
        }

        printf("%d ", min);
    }

    printf("\n");
    return 0;
}
