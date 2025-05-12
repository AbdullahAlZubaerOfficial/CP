#include <stdio.h>

void checkEvenOdd3(int num) {
  

    if (num % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");
}

int main() {
    int input;
   
    scanf("%d", &input);

    checkEvenOdd3(input);
    return 0;
}
