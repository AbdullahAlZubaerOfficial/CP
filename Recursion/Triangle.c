
#include <stdio.h>

void ruf(int n,int i,int j){

    if(i>n){
        return;
    }
    if(j<=n-i){
        printf(" ");
        ruf(n,i,j+1);
        return;
    }

    if(j<=n+i-1){
        printf("*");
        ruf(n,i,j+1);
        return;
    }

  
        printf("\n");
        ruf(n,i+1,1);
        return;
    
    
}

int main() { 
   
        int n;
        scanf("%d",&n);

        int i,j;

        ruf(n,1,1);

      
   
    return 0;
}

/*
  for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i; j++){
                printf(" ");
            }
            for(int j=1; j<=(2*i-1); j++){
                printf("*");
            }
            printf("\n");
        }


*/