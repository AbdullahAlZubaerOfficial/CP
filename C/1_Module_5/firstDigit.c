
#include <stdio.h>

int main() { 
   int s,n;
   scanf("%d",&n);

   s = n/1000;
   if(s%2==0){
    printf("EVEN");
   }
   else{
    printf("ODD");
   }

   
    return 0;
}


//  if i want last digit it will be n%10
//  if i want last 2 digit it will be n%100
//  if i want last 3 digit it will be n%1000
