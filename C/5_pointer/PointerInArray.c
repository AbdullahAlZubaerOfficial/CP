
#include <stdio.h>

int main() { 
   int ar[5] = {10,20,30,40,50};
   
   printf("%p\n",&ar[0]);  // memory address stored of 10 is 0061FF0C
   printf("%p",&ar[1]);  // memory address stored of 20 is 0061FF10
   
    return 0;
}