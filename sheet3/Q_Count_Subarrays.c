
#include <stdio.h>

void fun(){
     
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int ar[n];
        
        for(int i=0; i<n; i++){
            scanf("%d",&ar[i]);
        }

        int count = 0;
        int length = 1;

        for(int i=1; i<n; i++){
            if(ar[i]>=ar[i-1]){
                length++;
            } else {
                count += (length*(length+1))/2;
                length = 1;
            }
        }
        count+=(length*(length+1))/2;
            printf("%d\n",count);
    }
}

int main() { 
  

    fun();
   
    return 0;
}