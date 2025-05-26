
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

   int number;
   scanf("%d",&number);

   int found = 0;

   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        if(ar[i][j]==number){
            found = 1;
            break;
        }
    }
    
   }

   if(found){
    printf("will not take number");
   }
   else{
    printf("will take number");
   }
   
    return 0;
}