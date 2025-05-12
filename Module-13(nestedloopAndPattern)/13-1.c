
#include <stdio.h>

int main() { 
     int n;
     scanf("%d",&n);

     int star = 1 ;

     for(int i=1; i<=n; i++){
        for(int j=1; j<=star;j++){
            printf("*");
        }
        printf("\n");
        star++;
     }
   
    return 0;
}