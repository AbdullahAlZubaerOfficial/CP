
#include <stdio.h>

int main() { 
   
    long long int n;
    scanf("%lld",&n);

    long long int Sum = (n*(n+1))/2;

    

    printf("%lld",Sum);
   
    return 0;
}

/*

Input: 
100


Output: 
5050


Sum = n × (n + 1) / 2  
For n = 100 → 100 × 101 / 2 = 5050

*/

