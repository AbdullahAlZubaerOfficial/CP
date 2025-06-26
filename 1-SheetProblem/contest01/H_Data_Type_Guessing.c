
#include <stdio.h>
#include<limits.h>

int main() { 
   long long n,k,a;
   scanf("%lld %lld %lld",&n,&k,&a);
   long long products = n * k;
   if(products%a==0){
    long long result = products/a;
    if(result >= INT_MIN && result <= INT_MAX){
        printf("int\n");
    }else{
        printf("long long\n");
    }
   }
   else{
    printf("double");
   }

   
    return 0;
}