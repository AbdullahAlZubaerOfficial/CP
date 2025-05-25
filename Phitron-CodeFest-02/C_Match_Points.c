#include <stdio.h>
#include <stdlib.h>

// Comparator function for qsort
int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, z;
    scanf("%d %d", &n, &z);

    int x[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    // Step 1: Sort the array
    qsort(x, n, sizeof(int), cmp);

    // Step 2: Two pointer approach
    int i = 0, j = n / 2, count = 0;

    while (i < n / 2 && j < n) {
        if (x[j] - x[i] >= z) {
            count++;
            i++;
            j++;
        } else {
            j++; // যদি শর্ত না মেটে তাহলে j বাড়াও
        }
    }

    // Step 3: Output result
    printf("%d\n", count);

    return 0;
}
