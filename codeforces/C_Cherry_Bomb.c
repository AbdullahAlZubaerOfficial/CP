#include <stdio.h>

#define int long long

int min(int a, int b) {
    return a < b ? a : b;
}
int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int t;
    scanf("%lld", &t);

    while (t--) {
        int n, k;
        scanf("%lld %lld", &n, &k);

        int a[n], b[n];
        for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
        for (int i = 0; i < n; i++) scanf("%lld", &b[i]);

        int x = -1; 
        int fixed = 0; 

        for (int i = 0; i < n; i++) {
            if (b[i] != -1) {
                int sum = a[i] + b[i];
                if (x == -1) x = sum;
                else if (x != sum) {
                    fixed = -1;
                    break;
                }
                fixed++;
            }
        }

        if (fixed == -1) {
            printf("0\n"); 
            continue;
        }

        
        int cnt = 0;
        if (x == -1) {
         
            for (x = 0; x <= 2 * k; x++) {
                int valid = 1;
                for (int i = 0; i < n; i++) {
                    if (b[i] == -1) {
                        int bi = x - a[i];
                        if (bi < 0 || bi > k) {
                            valid = 0;
                            break;
                        }
                    }
                }
                if (valid) cnt++;
            }
            printf("%lld\n", cnt);
        } else {
            int valid = 1;
            for (int i = 0; i < n; i++) {
                if (b[i] == -1) {
                    int bi = x - a[i];
                    if (bi < 0 || bi > k) {
                        valid = 0;
                        break;
                    }
                } else if (a[i] + b[i] != x) {
                    valid = 0;
                    break;
                }
            }
            printf("%lld\n", valid);
        }
    }
    return 0;
}
