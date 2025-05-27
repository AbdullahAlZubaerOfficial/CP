
#include <stdio.h>

int main() { 
   
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    printf("Difference = %lld",((a*b)-(c*d)));

   
    return 0;
}

/*

Input: 
10 20 30 40


Output: Difference = -1000


a = 10, b = 20 → a*b = 200  
c = 30, d = 40 → c*d = 1200  
Difference = 200 - 1200 = -1000


*/

