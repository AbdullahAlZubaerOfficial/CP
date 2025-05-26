
#include <stdio.h>

int main() { 
   long long n;
   scanf("%lld",&n);
   
   long long ar[n];

   for(int i=0; i<n;i++){
    scanf("%lld",&ar[i]);
   }

   long long divided2 = 0,divided3 =0;

   for(int i=0; i<n; i++){
    if(ar[i]%2==0){
        divided2++;
    }
    else if(ar[i]%3==0){
        divided3++;
    }

    else if(ar[i]%2==0 && ar[i]%3==0){
        printf("2");
    }

   }

   printf("%lld %lld",divided2,divided3);
   
    return 0;
}