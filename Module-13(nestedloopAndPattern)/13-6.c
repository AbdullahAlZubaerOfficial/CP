
#include <stdio.h>

int main() { 
     int n;
     scanf("%d",&n);

     int ar[n];

     for(int i=0;i<n; i++){
        scanf("%d",&ar[i]);
     }

     int x;
     scanf("%d",&x);

     for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(ar[i]+ar[j]==x){
                printf("yes\n");
                return 0;
            }
        }
     }

     printf("no\n");

   
    return 0;
}