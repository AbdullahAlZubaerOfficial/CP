
#include <stdio.h>

int main() { 
     
    int n;
    scanf("%d",&n);

    int ar[n];

    for(int i=0;i<n; i++){
        scanf("%d",&ar[i]);
    }

    int val;
    scanf("%d",&val);

    for(int i=0; i<n; i++){
        for(int j=i+1;j<n;j++){
            if(ar[i]+ar[j]==val){
                printf("yes");
                return 0;
            }
        }
    }
    printf("no");
    
    return 0;
}