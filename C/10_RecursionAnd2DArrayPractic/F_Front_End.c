
#include <stdio.h>

int main() { 
     
    int n;
    scanf("%d",&n);

    int ar[n];

    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }

    int left = 0, right = n-1;

    while(left<=right){
        printf("%d ",ar[left++]);
        if(left <= right){
            printf("%d ",ar[right--]);
        }
    }
   
    return 0;
}