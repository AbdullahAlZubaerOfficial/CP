
#include <stdio.h>
#include<limits.h>

int main() { 
   int n,x;
   scanf("%d",&n);
   int min = INT_MAX;
   
   for(int i = 0; i< n; i++){
    scanf("%d",&x);
    if(x<min){
        min = x;
    }
   }  

   printf("%d ",min);
   
    return 0;
}