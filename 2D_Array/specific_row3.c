
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

     int specific_row;
     scanf("%d",&specific_row);

     for(int i=0; i<r; i++){
        printf("%d ",ar[specific_row][i]);
     }

   
    return 0;
}

/*

Input: 
3 3
1 4 5
2 5 6
7 8 9
2

Output: 7 8 9

*/