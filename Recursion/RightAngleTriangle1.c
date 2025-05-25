
#include <stdio.h>

void star(int count){

    if(count==0){
        return;
    }

    printf("*");
    star(count-1);

}

void space(int count){
    if(count==0){
        return;
    }
    printf(" ");

    space(count-1);

}

void OuterLoop(int i,int n){

    if(i>n){
        return;
    }

    space(n-i);
    star(i);

    printf("\n");
    OuterLoop(i+1,n);

}

int main() { 
       int n;
       scanf("%d",&n);

    OuterLoop(0,n);
       
    //    for(int i=0;i<=n; i++){
    //     for(int j=0; j<=n-i; j++){
    //         printf(" ");
    //     }
    //     for(int j=0; j<i; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    //    }
   
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