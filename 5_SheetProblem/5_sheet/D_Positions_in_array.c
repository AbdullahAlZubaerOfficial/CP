
#include <stdio.h>

int main() { 
   long long n;
   scanf("%lld",&n);
   
   long long ar[n];

   for(int i=0; i<n; i++){
    scanf("%lld",&ar[i]);
   }

   for(int i=0;i<n;i++){
    if(ar[i]<=10){  
        printf("A[%d] = %lld\n",i,ar[i]);
    }
   }
   
    return 0;
}