
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
 

   for(int i=0; i<r; i++){
    sum = sum + ar[i][i];
   }

    int diagonalize = ar[0][0];

    int isUnit = 1;

    if(r==c){
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if((i!=j) && (ar[i][j]!=0)){
                    isUnit = 0;
                    break;
                }
                if((i==j) && (ar[i][j] != diagonalize)){
                    isUnit = 0;
                    break;
                }
            }
        }
    }else{
        isUnit = 0;
    }


    if(isUnit && sum == 3){
        printf("This is Unit Matrix");
    }
    else{
        printf("This is not Unit Matrix");
    }

//    printf("%d",sum);  // sum = 3
   
    return 0;
}

/*
Input:
3 3
1 0 0
0 1 0
0 0 1

Output: This is a Unit Matrix

Input:
3 3
2 4 0
9 0 0
0 5 9

Output: This is not a Unit Matrix

Input:
3 3
2 0 0
0 2 0
0 0 2

Output: This is not a Unit Matrix

Input: 
2 3
5 6 7
8 9 4

Output: This is not a Unit Matrix


*/