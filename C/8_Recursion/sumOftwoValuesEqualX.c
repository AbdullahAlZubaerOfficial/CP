
#include <stdio.h>
#include<limits.h>

int foundPair = 0;

void innerLoop(int j,int n,int i,int ar1[],int x){

    if(j>n){
        return;
    }

    if(ar1[i]+ar1[j]==x){
        printf("yes");
        exit(0);

    }

    innerLoop(j+1,n,i,ar1,x);

}

void outerLoop(int i,int n,int ar1[],int x){
    if(i>n-1){
        return;
    }

    innerLoop(i+1,n,i,ar1,x);
    outerLoop(i+1,n,ar1,x);
}

int main() { 
   
    int n;
    scanf("%d",&n);

        int ar1[n];
        for(int i=0; i<n; i++){
            scanf("%d",&ar1[i]);
        }

       int x;
       scanf("%d",&x);

       outerLoop(0,n-1,ar1,x);

    //    for(int i=0; i<n-1; i++ ){
    //     for(int j=i+1; j<n;j++){
    //         if(ar1[i]+ar1[j]==x){
    //             printf("yes");
    //             return 0;
    //         }
    //     }
    //    }

       printf("no");
   
    return 0;
}