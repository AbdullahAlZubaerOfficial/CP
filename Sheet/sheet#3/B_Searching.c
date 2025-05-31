
#include <stdio.h>

int main() { 
       int n;
       scanf("%d",&n);
       
           int ar1[n];
           for(int i=0; i<n; i++){
               scanf("%d",&ar1[i]);
           }

           int index;
           scanf("%d",&index);

               for(int i=0; i<n; i++){
                      if(ar1[i] == index){
                        printf("%d",i);
                        return 0;
                      }
                   }

                   printf("-1");


   
    return 0;
}