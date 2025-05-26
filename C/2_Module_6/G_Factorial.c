
#include <stdio.h>

int main() { 
   int n,x;
   scanf("%d",&n);  

   for(int i = 0; i<n; i++){
    scanf("%d",&x);

    int fact = 1;
    for(int j=1;j<=x;j++){
        fact=fact*j;
    }
    printf("%d\n",fact);

   }
   
    return 0;
}