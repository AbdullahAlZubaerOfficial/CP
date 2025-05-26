#include "stdio.h"

int main(){
    
    int a,b;

    scanf("%d %d",&a,&b);

    int ar[a];

    for(int i=0; i<a; i++){

        scanf("%d",&ar[i]);

    }

    int freq[b];

    for(int i=1; i<=b; i++){
        freq[i] = 0;
    }

    for(int i=0; i<a; i++){
        freq[ar[i]]++;
    }

    for(int i=1; i<=b; i++){
        printf("%d\n",freq[i]);
    }

    return 0;
}