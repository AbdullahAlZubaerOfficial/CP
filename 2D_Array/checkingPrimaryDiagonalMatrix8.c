#include <stdio.h>

int main() { 
   int r, c;
   scanf("%d %d", &r, &c);

   int ar[r][c];

   for(int i = 0; i < r; i++) {
      for(int j = 0; j < c; j++) {
         scanf("%d", &ar[i][j]);
      }
   }

   int flag = 100;

   if(r == c) {

      for(int i = 0; i < r; i++) {
         for(int j = 0; j < c; j++) {

            if(i != j && ar[i][j] != 0) {
               flag = 200;
            }

         }
      }

   } else {
      flag = 200;
   }

   if(flag == 100) {
      printf("This is a primary diagonal matrix");
   }
   else {
      printf("This is not a primary diagonal matrix");
   }

   return 0;
}

/*

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
    
        int sum = 0;
            
                  if(r==c){
                     for(int i=0; i<r; i++){
                    for(int j=0; j<c; j++){
                        if(i!=j){
                           sum = sum + ar[i][j];
                        }
                    }
                    // printf("\n");
                   }
                  }

                  if(sum==0){
                    printf("This is a primary diagonal matrix");
                  }
                  else{
                    printf("This is not a primary diagonal matrix");
                  }
   
    return 0;
}



*/

/*

Input: 
3 3
4 0 0
0 5 0
0 0 8

Output: This is a primary diagonal matrix


Input: 
3 3
4 0 0  
0 5 0  
0 5 8

Output: This is not a primary diagonal matrix  

*/