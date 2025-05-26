
#include <stdio.h>

void fun(int x){
    x = 20;
    printf("Fun function er address : %p\n",&x); // memory stored as 0061FF00
}

int main() { 
     
    int x = 10;
    fun(x);
    printf("Main function er address: %p",&x);  // memory stored as 0061FF1C
   
    return 0;
}


//      here ,
//      bahirer function theke kono value or man change korle main function e pawa jabe na.......