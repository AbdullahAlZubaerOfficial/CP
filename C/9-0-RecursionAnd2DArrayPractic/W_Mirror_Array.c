// Using Recursion
#include <stdio.h>

void Mirror(int r, int c, int ar[101][101], int i, int j){
    if(i == r) return;            // base case: shob row traverse kore fela

    if(j >= 0){
        printf("%d ", ar[i][j]);
        Mirror(r, c, ar, i, j - 1);  // same row, porer column (reverse)
    } else {
        printf("\n");
        Mirror(r, c, ar, i + 1, c - 1); // next row, last column theke start
    }
}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int ar[101][101];              // max size 101x101
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &ar[i][j]);
        }
    }

    Mirror(r, c, ar, 0, c - 1);    // initial call: row 0, begin at last col

    return 0;
}

/*

// Using normal method

   int r,c;
   scanf("%d %d",&r,&c);

   int ar[r][c];

   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        scanf("%d",&ar[i][j]);
    }
   }

   for(int i=0; i<r; i++){
    for(int j=c-1; j>=0; j--){
        printf("%d ",ar[i][j]);
    }
    printf("\n");
   }

*/

/*
Input: 
3 3
2 3 5
7 9 20
35 1 12

Output:
5 3 2 
20 9 7 
12 1 35 


*/