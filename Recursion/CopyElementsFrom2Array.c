
#include <stdio.h>

void copyElements(int a,int b, int c, int ar1[], int ar2[], int ar3[],int d[],int i){
   int total = a+b+c;
   if(total==i){
    return;
   }


   if(i<a){
    d[i] = ar1[i];
   }else if(i<a+b){
    d[i] = ar2[i-a];
   }else{
    d[i] = ar3[i-a-b];
   }
    

    printf("%d ",d[i]);


    copyElements(a,b,c,ar1,ar2,ar3,d,i+1);

}

int main() { 
   
    int a;
    scanf("%d",&a);

    int ar1[a];

    for(int i=0; i<a; i++){
        scanf("%d",&ar1[i]);
    }

    int b;
    scanf("%d",&b);

    int ar2[b];
   
    for(int i=0; i<b; i++){
         scanf("%d",&ar2[i]);
    }

    int c;
    scanf("%d",&c);

    int ar3[c];
    for(int i=0; i<c; i++){
        scanf("%d",&ar3[i]);
    }

    int d[a+b+c];

    copyElements(a,b,c,ar1,ar2,ar3,d,0);


    // int d[a+b+c];

    // for(int i=0; i<a; i++){
    //     d[i] = ar1[i];
    // }

    // for(int i=0; i<b; i++){
    //     d[i+a] = ar2[i];
    // }

    // for(int i=0; i<c; i++){
    //     d[i+a+b] = ar3[i];
    // }

    // for(int i=0; i<a+b+c; i++){
    //     printf("%d ",d[i]);
    // }
   
    return 0;
}



/*

Input: 
5
1 4 5 8 9
4
1 5 8 9
3
1 4 6

Output: 1 4 5 8 9 1 5 8 9 1 4 6


*/