
#include <stdio.h>

int main() { 
     
    int n;
    scanf("%d",&n);

        int ar1[n];
        for(int i=0; i<n; i++){
            scanf("%d",&ar1[i]);
        }

        

            for(int i=0; i<n; i++){
                    if(ar1[i]>0){

                        printf("%d ",1);

                    }
                    else if(ar1[i]<0){
                        printf("%d ",2);
                    }
                    else if(ar1[i] == 0){
                        printf("%d ",0);
                    }
                }
   
    return 0;
}