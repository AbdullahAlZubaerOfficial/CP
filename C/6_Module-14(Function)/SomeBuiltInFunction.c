#include <stdio.h>
#include <math.h>

int main() {
    double n;
    scanf("%lf", &n);

    printf("%.2f\n", ceil(n));
    printf("%.2f\n", floor(n));
    printf("%.2f\n", round(n));
    printf("%.2f\n", sqrt(n));
    printf("%.2f\n", pow(n, 2));
    printf("%.2f\n", fabs(n)); // Use fabs for double

    return 0;
}
