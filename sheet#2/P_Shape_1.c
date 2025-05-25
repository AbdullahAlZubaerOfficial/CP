
#include <stdio.h>

int main() { 
   
    int n;
    scanf("%d",&n);

   for(int i=0; i<n; i++){
    for(int j=n-1; j>i-1; j--){
        printf("*");
    }
    printf("\n");
   }
   
    return 0;
}