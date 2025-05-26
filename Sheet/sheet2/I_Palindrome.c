#include <stdio.h>

int main() {
    int N, reversed = 0, original, last_digit;
    scanf("%d", &N);
    original = N;

    
    while (N > 0) {
        last_digit = N % 10;
        reversed = reversed * 10 + last_digit;
        N = N / 10;
    }

    printf("%d\n", reversed);

    
    if (original == reversed) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
