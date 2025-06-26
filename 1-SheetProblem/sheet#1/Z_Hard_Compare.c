
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


/*

 a = 2^10 = 1024  
 b = 2^3 = 8

 (a>b) ? yes : no


Input: 2 10 2 3
Output: yes


*/