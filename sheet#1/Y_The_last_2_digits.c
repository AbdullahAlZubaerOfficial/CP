
#include <stdio.h>

int main() { 
   
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    a = a%100;
    b = b%100;
    c = c%100;
    d = d%100;


    long long int result = a;

    result = (result * b)%100;
    result = (result * c)%100;
    result = (result * d)%100;

    printf("%02lld",result);
   
    return 0;
}