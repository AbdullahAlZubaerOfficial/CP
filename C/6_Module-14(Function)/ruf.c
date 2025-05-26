#include <stdio.h>

// 1. No return, No parameter
void checkEvenOdd1() {
    int num;
    printf("Enter a number (Function 1): ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Even Number 🟢\n");
    else
        printf("Odd Number 🔵\n");
}

// 2. Return, No parameter
int checkEvenOdd2() {
    int num;
    printf("Enter a number (Function 2): ");
    scanf("%d", &num);
    if (num % 2 == 0)
        return 0; // even
    else
        return 1; // odd
}

// 3. No return, With parameter
void checkEvenOdd3(int num) {
    printf("Function 3 input: %d\n", num);
    if (num % 2 == 0)
        printf("Even Number 🟢\n");
    else
        printf("Odd Number 🔵\n");
}

// 4. With return and parameter
int checkEvenOdd4(int num) {
    if (num % 2 == 0)
        return 0; // even
    else
        return 1; // odd
}




int main() {
    checkEvenOdd1(); // Method 1

    

    int result2 = checkEvenOdd2(); // Method 2
    if (result2 == 0)
        printf("Even Number 🟢\n");
    else
        printf("Odd Number 🔵\n");



    int input3;
    printf("Enter a number (Function 3): ");
    scanf("%d", &input3);
    checkEvenOdd3(input3); // Method 3



    int input4;
    printf("Enter a number (Function 4): ");
    scanf("%d", &input4);
    int result4 = checkEvenOdd4(input4); // Method 4
    if (result4 == 0)
        printf("Even Number 🟢\n");
    else
        printf("Odd Number 🔵\n");

    return 0;
}
