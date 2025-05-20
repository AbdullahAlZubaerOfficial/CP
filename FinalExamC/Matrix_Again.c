
#include <stdio.h>

int main() { 
   int r,c;
   scanf("%d %d",&r,&c);

   int ar[r][c];
   
   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        scanf("%d",&ar[i][j]);
    }
   }

   int last_row = r-1;
   int last_column = c-1;


   for(int i=0; i<c; i++){
    printf("%d ",ar[last_row][i]);
   }

   printf("\n");

   for(int i=0; i<r; i++){
    printf("%d ",ar[i][last_column]);
   }

   
    return 0;
}