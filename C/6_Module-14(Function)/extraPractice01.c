#include <stdio.h>

void checkEvenOdd1() {
    int num;
  
    scanf("%d", &num);
    
    if (num % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");
}

int main() {
    checkEvenOdd1();
    return 0;
}
