
#include <stdio.h>
#include<limits.h>

int main() { 
   int n;
   scanf("%d",&n);
   
   int ar[n];

   for(int i=0; i<n; i++){
    scanf("%d",&ar[i]);
   }

   int max = INT_MIN;

   for(int i=0; i<n; i++){

    if(ar[i]>max){
        max = ar[i];
    }

   }

   printf("%d",max);
   
    return 0;
}