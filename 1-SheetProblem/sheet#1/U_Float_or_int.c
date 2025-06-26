#include <stdio.h>

int main() { 
    float n;
    scanf("%f", &n);

    int integerPart = (int)n;
    float floatPart = n - integerPart;

    if(floatPart == 0.0){
        printf("int %d", integerPart);
    } else {
        printf("float %d %.3f", integerPart, floatPart);
    }

    return 0;
}


/*

Input: 12.345
Output: float 12 0.345

Input: 99.0
Output: int 99


*/