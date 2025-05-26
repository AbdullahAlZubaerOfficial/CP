
#include <stdio.h>

void star(int j,int count){

    if(j>count){
        return;
    }

    printf("%d",j);

    star(j+1,count);

}

void space(int count){
    if(count ==0){
        return;
    }

    printf(" ");

    space(count-1);

}

void outerLoop(int i,int n){

    if(i>n){
        return;
    }

    space(n-i);

    star(1,i);

    printf("\n");

    outerLoop(i+1,n);

}

int main() { 
         int n;
         scanf("%d",&n);


         outerLoop(1,n);

        //  for(int i=1; i<=n; i++){
        //     for(int j=1; j<=n-i; j++){
        //         printf(" ");
        //     }
        //     for(int j=1; j<=i; j++){
        //         printf("%d",j);
        //     }
        //     printf("\n");
        //  }
   
    return 0;
}