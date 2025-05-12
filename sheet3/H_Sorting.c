
#include <stdio.h>

int main() { 
   int n;
   scanf("%d",&n);
   
   int ar[n];

   for(int i=1; i<=n; i++){
    scanf("%d",&ar[i]);
   }

   for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        if(ar[j]>ar[j+1]){
            int temp = ar[j];
            ar[j] = ar[j+1];
            ar[j+1] = temp;
        }
    }
   }

   for(int i=1; i<=n; i++){
    printf("%d ",ar[i]);
   }
   
    return 0;
}