
#include <stdio.h>

int main() { 
   
    long long int n,m;
    scanf("%lld %lld",&n,&m);

    long long int lastDigitN = n%10;

    long long int lastDigitM = m%10;

    printf("%lld",lastDigitN+lastDigitM);
   
    return 0;
}


/*

Input: 
12345 67890


Output: 5


*/

