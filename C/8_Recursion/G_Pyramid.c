
#include <stdio.h>

void space(int count){
    if(count==0){
        return;
    }

    printf(" ");
    space(count-1);

}

void star(int count){

    if(count==0){
        return;
    }

    printf("*");

    star(count-1);

}

void outerLoop(int i,int n){

    if(i>n){
        return;
    }

    space(n - i);
    star(2 * i - 1);
 

    printf("\n");

    outerLoop(i+1,n);

}

int main() { 
       int n;
       scanf("%d",&n);

       outerLoop(1,n);

       
    //    for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         printf(" ");
    //     }
    //     for(int j=1; j<=(2*i-1); j++){
    //         printf("*");
    //     }
    //     printf("\n");
    //    }
   
    return 0;
}