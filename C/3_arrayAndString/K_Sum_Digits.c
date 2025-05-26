
#include <stdio.h>

int main() { 
   int n;
   scanf("%d",&n);


   int sum=0;

   char digit;

   for(int i=0; i<n; i++){
    scanf(" %c",&digit);

    sum = sum + digit -'0';
   
   }

   printf("%d",sum);


   
    return 0;
}