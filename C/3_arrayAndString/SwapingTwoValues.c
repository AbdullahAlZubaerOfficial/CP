
#include <stdio.h>

int main() { 
   int a = 10;
   int b = 20;
   
   int tmp = a;
   a = b;
   b = tmp;

   printf("a = %d\nb = %d",a,b);
   
    return 0;
}