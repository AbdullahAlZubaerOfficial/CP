
#include <stdio.h>

int main() { 
     
    int r,c;
    scanf("%d %d",&r,&c);

    int ar[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c;j++){
            scanf("%d",&ar[i][j]);
        }
    }

    int total_val = r*c;
    int zero = 0;

    for(int i=0; i<r; i++){
        for(int j=0; j<c;j++){
          if(ar[i][j]==0){
            zero++;
          }
        }
    }

    if(total_val == zero){
    printf("This is a zero matrix");
    }
    else{
        printf("This is not a zero matrix");
    }
    
   
    return 0;
}

/*

Input: 
2 3
0 0 0
0 0 0

Output: This is a zero matrix

Input: 
2 3
5 0 5
0 0 0

Output: This is not a zero matrix

*/