
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

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}

/*

Input: 
3 3
1 4 5 
2 5 6
7 8 9

Output:
1 4 5 
2 5 6
7 8 9

*/