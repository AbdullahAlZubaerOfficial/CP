#include <stdio.h>

int checkEvenOdd4(int num) {
    if (num % 2 == 0)
        return 0; // Even
    else
        return 1; // Odd
}

int main() {
    int input;
  
    scanf("%d", &input);

    int result = checkEvenOdd4(input);

    if (result == 0)
        printf("Even Number ");
    else
        printf("Odd Number ");

    return 0;
}
