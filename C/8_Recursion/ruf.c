
#include <stdio.h>

void star(int count){
    if(count == 0){
        return;
    }

    printf("*");
    star(count -1);

}

void OuterLoop(int i,int n){

    if(i>=n){
        return;
    }

    star(i+1);

    printf("\n");

    OuterLoop(i+1,n);

}

int main() { 
         int n;
         scanf("%d",&n);

         OuterLoop(0,n);


        //  for(int i=0; i<n;i++){
        //     for(int j=0; j<i+1; j++){
        //         printf("*");
        //     }
        //     printf("\n");
        //  }
   
    return 0;
}