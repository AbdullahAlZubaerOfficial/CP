
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

        int maxOnes = 0;
        int row = 0;
    
        
               for(int i=0; i<r; i++){
                    int count = 0;
                for(int j=0; j<c; j++){

             
                if(ar[i][j]==1){
                    count++;
                }

                if(count>maxOnes){
                    maxOnes = count;
                    row = i;
                }

               
                }
                // printf("\n");
               }

               printf("%d",row);
   
    return 0;
}