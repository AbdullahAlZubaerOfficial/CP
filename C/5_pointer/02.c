
#include <stdio.h>

int main() { 
   int x = 10;
   
   int* ptr;

   ptr = &x;

   printf("%p\n",ptr);  // memory address stored as 0061FF18

   printf("%d",*ptr);  // 10
   
    return 0;
}