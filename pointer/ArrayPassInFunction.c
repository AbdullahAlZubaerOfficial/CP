
#include <stdio.h>

void fun(int a[],int n){
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}

int main() { 

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    fun(a,n);
     
    return 0;
}

/**
 
Input: 5
       10 20 30 40 50

Output:10 20 30 40 50
  
 */



// Note: function theke Array return kora jai na.......