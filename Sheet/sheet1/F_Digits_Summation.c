#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long first = a%10;
    long long second = b%10;
    

    printf("%lld\n", first+second );

    return 0;
}
