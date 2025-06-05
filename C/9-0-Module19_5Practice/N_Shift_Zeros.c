
#include <stdio.h>

int main() { 
     
    int n;
    scanf("%d",&n);
    int ar[n];

    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }

    for(int i=0; i<n; i++){
        if(ar[i] !=0){
            printf("%d ",ar[i]);
        }
    }
    for(int i=0; i<n; i++){
        if(ar[i]==0){
            printf("0 ");
        }
    }

    printf("\n");
   
    return 0;
}