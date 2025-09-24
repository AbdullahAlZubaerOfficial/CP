
#include <stdio.h>
#include<stdlib.h>

int main() { 
   int a,b;
   scanf("%d %d",&a,&b);
   if(abs(a-b)<=1 && (a+b)>0){
    printf("YES");
   }  
   else{
    printf("NO");
   }
   
    return 0;
}