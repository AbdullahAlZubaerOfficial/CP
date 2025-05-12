
#include <stdio.h>

int main() { 
   int n;
   scanf("%d",&n);
   
   int ar[n];

   for(int i=0; i<n; i++){
    scanf("%d",&ar[i]);
   }

   int freq[6] = {0};

   for(int i=0; i<n; i++){

    freq[ar[i]]++;

    //  if(ar[i]==0){
    //     freq[0]++;
    //  }
    //  else if(ar[i]==1){
    //     freq[1]++;
    //  }
    //  else if(ar[i]==2){
    //     freq[2]++;
    //  }
    //  else if(ar[i]==3){
    //     freq[3]++;
    //  }
    //  else if(ar[i]==4){
    //     freq[4]++;
    //  }
    //  else if(ar[i]==5){
    //     freq[5]++;
    //  }
   }

   for(int i=0; i<=5; i++){
    printf("%d -> %d\n",i,freq[i]);
   }

//    printf("%d -> %d\n",0,freq[0]);
//    printf("%d -> %d\n",1,freq[1]);
//    printf("%d -> %d\n",2,freq[2]);
//    printf("%d -> %d\n",3,freq[3]);
//    printf("%d -> %d\n",4,freq[4]);
//    printf("%d -> %d\n",5,freq[5]);

 
   
    return 0;
}