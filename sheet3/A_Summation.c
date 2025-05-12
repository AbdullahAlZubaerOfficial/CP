
#include <stdio.h>
#include<stdlib.h>

int main() { 
   long long n;
   scanf("%lld",&n);  

   long long ar[n];

   for(int i=0; i<n; i++){
    scanf("%lld",&ar[i]);
   }

   long long sum = 0;

   for(int i=0; i<n; i++){
    sum = sum + ar[i];
   }


   printf("%lld",llabs(sum));
   
    return 0;
}