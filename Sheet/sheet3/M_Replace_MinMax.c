
#include <stdio.h>
#include<limits.h>

int main() { 
   int n;
   scanf("%d",&n);
   
   int ar[n];
   for(int i=0; i<n; i++){
    scanf("%d",&ar[i]);
   }

   int min = INT_MAX;
   int max = INT_MIN;

   for(int i=0; i<n; i++){
    if(ar[i]<min){
        min = ar[i];
    }
    if(ar[i]>max){
        max = ar[i];
    }
   }

   for(int i=0; i<n; i++){
    if(ar[i]==min){
        ar[i] = max;
    }
    else if(ar[i]==max){
        ar[i] = min;
    }
  
   }

   for(int i=0; i<n; i++){
    printf("%d ",ar[i]);
   }
   
    return 0;
}