#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n); 

    long long ar[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%lld", &ar[i]);
    }

    // Palindrome check
    for (int i = 0; i < n / 2; i++) {
        if (ar[i] != ar[n - 1 - i]) {
            printf("NO\n");
            return 0;  
        }
    }

    printf("YES\n");  // If loop completes, it's a palindrome
    return 0;
}
