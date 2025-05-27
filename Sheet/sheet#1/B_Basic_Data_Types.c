
#include <stdio.h>

int main() { 
   
    int a;
    scanf("%d",&a);

    printf("%d\n",a);

    long long int b;

    scanf("%lld",&b);

    printf("%lld\n",b);

    char s[101];
    scanf("%s",s);

    printf("%s\n",s);

    float c;
    scanf("%f",&c);

    printf("%.2f\n",c);

    double d;

    scanf("%lf",&d);

    printf("%.1lf",d);

   
    return 0;
}


/*

Input: 
100
123456789123456
HelloWorld
3.1416
12345.6789


Output: 
100
123456789123456
HelloWorld
3.14
12345.7


*/

