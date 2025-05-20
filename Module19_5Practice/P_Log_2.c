#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    int ans = 0;
    while (n > 1) {
        n /= 2; 
        ans++;    
    }

    printf("%d\n", ans); 
    return 0;
}
