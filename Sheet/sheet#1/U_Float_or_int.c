
#include <stdio.h>

int main() { 
   
    float n;
    scanf("%f",&n);

    int integerPart = (int)n;

    float floatPart = n-integerPart;

    if(floatPart==0.0){
        printf("int %d",integerPart);
    }
    else if(
        printf("float %d %.3f",integerPart,floatPart)
    )
   
    return 0;
}