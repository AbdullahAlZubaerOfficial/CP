
#include <stdio.h>

int main() { 
   long long a,b;
   char s;
   scanf("%lld %c %lld",&a,&s,&b);
   
   if(s=='+'){
    printf("%lld",a+b);
   }
   else if(s=='-'){
    printf("%lld",a-b);
   }
   else if(s=='*'){
    printf("%lld",a*b);
   }
   else if(s=='/'){
    printf("%lld",a/b);
   }
   
    return 0;
}