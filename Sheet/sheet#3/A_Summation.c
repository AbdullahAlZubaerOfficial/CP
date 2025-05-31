
#include <stdio.h>
#include<math.h>

int main() { 
   long long int n;
   scanf("%lld",&n);
   
       long long int ar1[n];
       for(int i=0; i<n; i++){
           scanf("%lld",&ar1[i]);
       }

       long long int sum = 0;

           for(int i=0; i<n; i++){
                   sum = sum + ar1[i];
               }


               printf("%lld",llabs(sum));
   
    return 0;
}