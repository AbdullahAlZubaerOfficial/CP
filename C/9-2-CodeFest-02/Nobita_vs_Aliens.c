#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int ar[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }


    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ar[i] > ar[j]) {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }

            
    // printf("%d ",ar[i]);
    // printf("%d ",ar[j]);
        }
    }


    int count = 0;
    int i = 0, j = n - 1;

    while (i < j) {
        int sum = ar[i] + ar[j];

        // printf("%d",sum);

        if (sum <= k) {
            count++;

            i++;  // ⬅️ এগিয়ে যাওয়া: ছোট দিক থেকে পরের সংখ্যায় যাওয়া
        j--;      // ⬅️ পেছিয়ে আসা: বড় দিক থেকে পরের সংখ্যায় যাওয়া
    } else {
        j--;        // ⬅️ শুধু বড় দিকটা বাদ দিচ্ছি
        }
    }

    printf("%d\n", count); 
    return 0;
}

