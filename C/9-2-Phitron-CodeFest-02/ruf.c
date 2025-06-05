
#include <stdio.h>

int main() { 
       int n,m;
       scanf("%d %d",&n,&m);

           int ar1[n];
           for(int i=0; i<n; i++){
               scanf("%d",&ar1[i]);
           }

           
                  for(int i=0; i<n-1; i++){
                   for(int j=i+1; j<n; j++){
                      if(ar1[i]>ar1[j]){
                        int temp = ar1[i];
                        ar1[i] = ar1[j];
                        ar1[j] = temp;

                      }
                   }
                 
                  }


                  int count = 0; 
                  int i=0; int j= n-1;

                  while(i<j){
                    int sum = ar1[i] + ar1[j];

                    if(sum<=m){
                        count++;
                        i++;
                        j--;
                    }else{
                        j--;
                    }
                    
                  }

                  printf("%d",count);

   
    return 0;
}