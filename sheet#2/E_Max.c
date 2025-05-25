
#include <stdio.h>
#include<limits.h>

int main() { 
   
        int n;
        scanf("%d",&n);

            int ar1[n];
            for(int i=0; i<n; i++){
                scanf("%d",&ar1[i]);
            }

            int max = INT_MIN;

                for(int i=0; i<n; i++){
                       if(ar1[i]>max){
                        max = ar1[i];
                         
                       }
                    }
   
                    printf("%d",max);
    return 0;
}

/*
Input: 
5
1 8 5 7 5

Output: 8 

*/