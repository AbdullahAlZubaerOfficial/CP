
#include <stdio.h>

void SumOfArray(int n,int ar1[],int sum,int i){
    if(i==n){
          printf("%d",abs(sum));
        
        return;
    }
    sum = sum+ar1[i];

    SumOfArray(n,ar1,sum,i+1);

}

int main() { 

    
    int n;
    scanf("%d",&n);

        int ar1[n];
        for(int i=0; i<n; i++){
            scanf("%d",&ar1[i]);
        }

        int sum =0;

        SumOfArray(n,ar1,sum,0);

        // int sum =0;

        // for(int i=0; i<n; i++){
        //         sum = sum+ar1[i];
        // }

        // printf("%d",abs(sum));

      


   
    return 0;
}