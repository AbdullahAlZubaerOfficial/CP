#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAXN 200005

int a[MAXN], b[MAXN], tmp[MAXN];

int min(int a, int b) { return a < b ? a : b; }

int can_collect(int* garden, int n, int* b, int m) {
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (garden[i] >= b[j]) {
            j++;
        }
        i++;
    }
    return j == m;
}

int cmp_desc(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int cmp_asc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        
        for (int i = 0; i < n; ++i)
            scanf("%d", &a[i]);

        for (int i = 0; i < m; ++i)
            scanf("%d", &b[i]);
        
        qsort(b, m, sizeof(int), cmp_asc);
        
        if (can_collect(a, n, b, m)) {
            printf("0\n");
            continue;
        }

        int left = 1, right = 1000000000, answer = -1;
        while (left <= right) {
            int mid = (left + right) / 2;

            int success = 0;
            for (int i = 0; i <= n; ++i) {
                int len = 0;
                for (int j = 0; j < i; ++j)
                    tmp[len++] = a[j];
                tmp[len++] = mid;
                for (int j = i; j < n; ++j)
                    tmp[len++] = a[j];

                if (can_collect(tmp, len, b, m)) {
                    success = 1;
                    break;
                }
            }

            if (success) {
                answer = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        printf("%d\n", answer);
    }
    return 0;
}
