
#include <stdio.h>
#include<limits.h>

int main() { 
     
    int t;
    scanf("%d",&t);

    while (t--)
    {
        int n;
        scanf("%d",&n);
        int ar[n];
        for(int i=0; i<n; i++){
            scanf("%d",&ar[i]);
        }
        
        int minMax = INT_MAX;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
               int sum = ar[i] + ar[j] + (j-i);
               if(sum<minMax){
                minMax = sum;
               }
            }

        }

        printf("%d\n",minMax);

    }
    
   
    return 0;
}