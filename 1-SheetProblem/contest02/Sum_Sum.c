
#include <stdio.h>

int main() { 
   int n,x,pos=0,neg=0;

   scanf("%d",&n);
   for(int i=0; i<n; i++){
    scanf("%d",&x);
    if(x>0){
        pos=pos+x;
    }
    else{
        neg=neg+x;
    }
   }
   printf("%d ",pos);
   printf("%d",neg);
   
    return 0;
}