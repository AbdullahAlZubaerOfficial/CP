
#include <stdio.h>
#include<math.h>

int main() { 
     int n,m;
     scanf("%d %d",&n,&m);

     double divide = (double)n/m;


     int floored =(int)floor(divide);

     int ceiled = (int)ceil(divide);

     int rounded = (int)round(divide);

     printf("floor %d / %d = %d\n",n,m,floored);
     printf("ceil %d / %d = %d\n",n,m,ceiled);
     printf("round %d / %d = %d\n",n,m,rounded);
   
    return 0;
}