
#include <stdio.h>

int main() { 
   int n;
   scanf("%d",&n);
   
   int ar[n];
   for(int i=0; i<n; i++){
    scanf("%d",&ar[i]);
   }

   int even = 0,odd=0,positive=0,negative=0;

   for(int i=0; i<n; i++){
    if(ar[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
    
    if(ar[i]>=0){
        positive++;
    }
    else{
        negative++;
    }
   }

   printf("Even: %d\n",even);
   printf("Odd: %d\n",odd);
   printf("Positive: %d\n",positive);
   printf("Negative: %d\n",negative);
   
    return 0;
}