
#include <stdio.h>

// multiples means bohugonok

int main() { 
   int a,b;
   scanf("%d %d",&a,&b);

   if(a%b==0 || b%a==0){
    printf("Multiples");
   }
   else{
    printf("No Multiples");
   }


    return 0;
}