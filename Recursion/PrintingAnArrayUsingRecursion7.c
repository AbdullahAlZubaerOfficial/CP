
#include <stdio.h>

void array(int ar[], int n, int i){
    if(i==n){
        return;
    }

    printf("%d ",ar[i]);
    array(ar,n,i+1);
}

int main() { 
   
    int n;
    scanf("%d",&n);

    int ar[n];

    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }

    array(ar,n,0);
   
    return 0;
}

/*

Input:
3
1 4 6

Output:
1 4 6


*/