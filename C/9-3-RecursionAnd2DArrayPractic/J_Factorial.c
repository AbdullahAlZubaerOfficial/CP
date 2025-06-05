
#include <stdio.h>

long long int factorial(long long int n){
    if(n==1 || n==0){
        return 1;
    }

    long long int multiply =  factorial(n-1);
    return n*multiply;
}

int main() { 
   long long int n;
   scanf("%lld",&n);
   
   long long int ans = factorial(n);

   printf("%lld",ans);
   
    return 0;
}

/*
Input: 5
Output: 120

*/