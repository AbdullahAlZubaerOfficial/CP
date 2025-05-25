
#include <stdio.h>

void printSum(int i,long long int n,long long int ar1[],long long sum){

    if(i>n){
        printf("%lld\n",sum);
        return;
    }

    printSum(i+1,n,ar1,ar1[i]+sum);

}

int main() { 
   
    long long int n,m; 
    scanf("%lld %lld",&n,&m);

           long long int ar1[n];
            for(int i=0; i<n; i++){
                scanf("%lld",&ar1[i]);
            }

            printSum(n-m,n-1,ar1,0);

            // int sum = 0;

            //     for(int i=n-m; i<n; i++){
            //             // printf("%d",&ar1[i]);
            //             sum = sum+ar1[i];
            //         }

            //         printf("%d",sum);
    
    return 0;
}