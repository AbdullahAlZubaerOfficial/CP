
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

    int specific_column;
    scanf("%d",&specific_column);

    for(int i=0; i<r; i++){
        printf("%d\n",ar[i][specific_column]);
    }
   
    return 0;
}

/*

Input: 
3 3
1 4 5
2 5 6
7 8 9
1

Output: 
4
5
8


*/