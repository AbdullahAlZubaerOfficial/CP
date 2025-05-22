
#include <stdio.h>

void ruf(int n,int i,int j){

    if(i>=n){
        return;
    }

    if(j>=i+1){

        printf("\n");
        ruf(n,i+1,0);
        return;

    }

    printf("*");
    ruf(n,i,j+1);
    
}

int main() { 
   
        int n;
        scanf("%d",&n);

        int i,j;

        ruf(n,0,0);


   
    return 0;
}

/*
Input: 4

Output: 
*
**
***
****


*/