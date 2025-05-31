
#include <stdio.h>

int main() { 
   
        int n;
        scanf("%d",&n);

            int ar[n];
            for(int i=0; i<n; i++){
                scanf("%d",&ar[i]);
            }

                for(int i=0; i<n/2; i++){
                        if(ar[i] != ar[n-1-i]){
                            printf("NO");
                            return 0;
                        }
                    }

                    printf("YES");

   
    return 0;
}