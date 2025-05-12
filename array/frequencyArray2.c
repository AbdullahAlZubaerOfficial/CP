
#include <stdio.h>

int main() { 
   int n; 
   scanf("%d",&n);
   
   int ar[n];

   for(int i=0; i<n; i++){
    scanf("%d",&ar[i]);
   }

   int fre[6] = {0};

   for(int i=0; i<n;i++){
    if(ar[i]==0){
        fre[0]++;
    }
    else if(ar[i]==1){
        fre[1]++;
    }
    else if(ar[i]==2){
        fre[2]++;
    }
    else if(ar[i]==3){
        fre[3]++;
    }
    else if(ar[i]==4){
        fre[4]++;
    }
    else if(ar[i]==5){
        fre[5]++;
    }
   }

   printf("%d -> %d\n",0,fre[0]);
   printf("%d -> %d\n",1,fre[1]);
   printf("%d -> %d\n",2,fre[2]);
   printf("%d -> %d\n",3,fre[3]);
   printf("%d -> %d\n",4,fre[4]);
   printf("%d -> %d\n",5,fre[5]);

   
    return 0;
}