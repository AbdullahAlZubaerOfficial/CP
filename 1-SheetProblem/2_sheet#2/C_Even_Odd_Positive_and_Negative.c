
#include <stdio.h>

int main() { 
   
        int n;
        scanf("%d",&n);

            int ar1[n];
            for(int i=0; i<n; i++){
                scanf("%d",&ar1[i]);
            }

            int even = 0, odd = 0, positive = 0, negative = 0;
                for(int i=0; i<n; i++){
                        if(ar1[i]%2==0){
                            even++;
                        }else {
                            odd++;
                        }

                        if(ar1[i]>0){
                            positive++;
                        }else if(ar1[i]<0){
                            negative++;
                        }
                    }

                    printf("Even: %d\n",even);
                    printf("Odd: %d\n",odd);
                    printf("Positive: %d\n",positive);
                    printf("Negative: %d\n",negative);
   
    return 0;
}

/*
Input: 
5
-5 0 -3 -4 12

Output:
Even: 3
Odd: 2
Positive: 1
Negative: 3

*/