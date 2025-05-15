
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

    int diagonalize = ar[0][0];

    int scaller = 1;

    if(r==c){
          for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
           if((i != j) && ( ar[i][j] != 0) ){
             scaller = 0;
             break;
           }
           if((i==j) && (ar[i][j]!=diagonalize)){
            scaller = 0;
            break;
           }
        }
    }

    }
    else{
        scaller = 0;
    }

   
    if(scaller){
        printf("This is a Scaller Matrix");
    }
    else{
        printf("This is not a Scaller Matrix");
    }

   
    return 0;
}

/*
Input:
3 3
2 0 0
0 2 0
0 0 2

Output: This is a Scaller Matrix

Input:
3 3
2 4 0
9 0 0
0 5 9

Output: This is not a Scaller Matrix


Input: 
2 3
5 6 7
8 9 4

Output: This is not a Scaller Matrix


*/