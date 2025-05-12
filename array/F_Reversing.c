
#include <stdio.h>

int main() { 
   long long n;
   scanf("%lld",&n);
   
   long long ar[n];

   for(int i=0; i<n; i++){
    scanf("%lld",&ar[i]);
   }

   for(int i=n-1; i>=0; i--){
    printf("%lld ",ar[i]);
   }
   
    return 0;
}