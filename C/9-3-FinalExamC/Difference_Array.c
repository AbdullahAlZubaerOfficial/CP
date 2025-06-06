#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t); // number of test cases

    while (t--) {
        int n;
        scanf("%d", &n); // Size of array

        int a[1000], b[1000], c[1000];

       
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (b[i] > b[j]) {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        
        for (int i = 0; i < n; i++) {
            int diff = a[i] - b[i];
            if (diff < 0) {
                diff = -diff; 
            }
            c[i] = diff;
        }

       
        for (int i = 0; i < n; i++) {
            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}
