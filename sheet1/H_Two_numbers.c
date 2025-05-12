
#include <stdio.h>
#include<math.h>

int main() { 
   int a,b;
   scanf("%d %d",&a,&b);

   double result = (double)a/b;
   
   printf("floor %d / %d = %.0f\n",a,b,floor(result));
   printf("ceil %d / %d = %.0f\n",a,b,ceil(result));
   printf("round %d / %d = %.0f",a,b,round(result));
   
    return 0;
}