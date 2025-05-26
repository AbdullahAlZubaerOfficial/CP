
#include <stdio.h>

void printSum(int i,long long int n,long long int ar1[],long long int sum){
    if(i>n){
        printf("%lld",sum);
        return;
    }


    printSum(i+1,n,ar1,sum+ar1[i]);

}

int main() { 
   
       long long int n;
        scanf("%lld",&n);

           long long int ar1[n];
            for(int i=0; i<n; i++){
                scanf("%lld",&ar1[i]);
            }

            printSum(0,n-1,ar1,0);

            // int sum = 0;

            //     for(int i=0; i<n; i++){
            //         sum = sum + ar1[i];
            //     }

            //     printf("%d",sum);
   
    return 0;
}