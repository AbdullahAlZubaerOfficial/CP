
#include <stdio.h>

void fun(int* p){
    *p = 20;
}

int main() { 
     
    int x = 10;
    fun(&x);
    printf("%d",x);       //  20

   
    return 0;
}

//  here,

//  bahire function er modhe kono value or man change korle main function theke pawa jabe.....