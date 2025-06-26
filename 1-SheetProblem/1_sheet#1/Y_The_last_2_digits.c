
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


/*

Input: 12345 67890 54321 98765

Output: 50

a = 12345 % 100 = 45  
b = 67890 % 100 = 90  
c = 54321 % 100 = 21  
d = 98765 % 100 = 65  


Calculation: 
a = 45, b = 90, c = 21, d = 65
Result = (((45 * 90) % 100) * 21 % 100) * 65 % 100

Final Output: e.g., 25

*/