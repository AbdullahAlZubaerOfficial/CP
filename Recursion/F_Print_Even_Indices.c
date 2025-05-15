
#include <stdio.h>

void EvenIndices(int ar[], int n, int i){

    if(i>=n){
        return;
    }

    
    EvenIndices(ar,n,i+1);

    if(i%2==0){
        printf("%d ",ar[i]);

    }

}

int main() { 
 
    int n;
    scanf("%d",&n);

    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }

    EvenIndices(ar,n,0);
   
    return 0;
}

/*

Input: 
4
1 4 2 7

Output:
2 1

Input: 
7
1 5 8 2 3 9 11

Output: 
11 3 8 1



Explaination: ei code ta even index number gulor olta print kortese.......

*/