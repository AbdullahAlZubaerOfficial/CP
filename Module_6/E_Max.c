
#include <stdio.h>
#include<limits.h>

int main() { 
   int n,x;
   scanf("%d",&n);
   int mx = INT_MIN;
   for(int i = 0; i<n; i++){
    scanf("%d",&x);
    if(x>mx){
        mx = x;
    }

   }
   printf("%d",mx);
   
    return 0;
}