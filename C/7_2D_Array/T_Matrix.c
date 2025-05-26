
#include <stdio.h>

int main() { 
     
    int n;
    scanf("%d",&n);

    int ar[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&ar[i][j]);
        }
    }

    int primary = 0;
    int secondary = 0;

    for(int i=0; i<n; i++){
        // printf("%d ",ar[i][i]);
         primary = primary + ar[i][i];
    }

    for(int i=0; i<n; i++){
        // printf("%d ",ar[i][n-1-i]);
        secondary = secondary + ar[i][n-1-i];
    }

    printf("%d",abs(primary-secondary));

    // printf("%d\n",primary);
    // printf("%d",secondary);
   
    return 0;
}