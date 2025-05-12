
#include <stdio.h>

int main() { 
   int a[5] = {10,20,30,40,50};
   
   *(a)=100; // *(a+1) dile 1 number index er man change hoto, *(a+2) dile 2 number index man change hoto..........

   for(int i=0; i<5; i++){
    printf("%d ",a[i]);   // 100 20 30 40 50
   }
   
    return 0;
}