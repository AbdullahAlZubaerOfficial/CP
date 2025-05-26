
#include <stdio.h>
#include<math.h>

int main() { 
   
   long long int a,b,c,d;

   scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

   double firstPower = b* log(a);
   double secondPower = d*log(c);

   if(firstPower>secondPower){
    printf("YES");
   }else{
    printf("NO");
   }

//    printf("%d %d",firstPower,secondPower);
   
    return 0;
}