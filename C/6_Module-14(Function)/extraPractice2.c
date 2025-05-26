#include <stdio.h>

int checkEvenOdd2() {
    int num;

    scanf("%d", &num);

    if (num % 2 == 0)
        return 0; // Even
    else
        return 1; // Odd
}

int main() {
    int result = checkEvenOdd2();

    if (result == 0)
        printf("Even Number");
    else
        printf("Odd Number");

    return 0;
}
