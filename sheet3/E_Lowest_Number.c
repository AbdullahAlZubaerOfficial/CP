
#include <stdio.h>
#include<limits.h>

int main() { 
   int n;
   scanf("%d",&n);
   
   int ar[n];
   for(int i=1; i<=n; i++){
      scanf("%d",&ar[i]);
   }

   int min = INT_MAX;
   int minIndex = 0;

   for(int i=1; i<=n; i++){
      if(ar[i]<min){
         min=ar[i];
         minIndex = i;
      }
   }

   printf("%d %d",min,minIndex);
   
    return 0;
}