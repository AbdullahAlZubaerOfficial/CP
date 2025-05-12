#include <stdio.h>
#include <stdlib.h>

#define MAXN 200005

int p[MAXN], pos[MAXN];

int main() {
    int t;
    scanf("%d", &t);  // number of test cases
    
    while (t--) {
        int n, q;
        scanf("%d %d", &n, &q);  // length of p and number of queries
        
        for (int i = 1; i <= n; i++) {
            scanf("%d", &p[i]);
            pos[p[i]] = i;  // store the position of each value
        }
        
        while (q--) {
            int l, r, x;
            scanf("%d %d %d", &l, &r, &x);
            
            // If x is not in the range [l, r], output -1
            if (pos[x] < l || pos[x] > r) {
                printf("-1\n");
                continue;
            }
            
            // To make the binary search successful, we need the x to be at the correct position
            int min_dist = 0;
            for (int i = l; i <= r; i++) {
                if (p[i] != x) {
                    min_dist++;
                }
            }
            
            printf("%d\n", min_dist);  // minimum rearrangements required
        }
    }
    
    return 0;
}
