
#include <stdio.h>

int main() { 
   int n,x;
   scanf("%d",&n);

   for(int i = 0; i< n;i++){
    scanf("%d",&x);
    while (x!=0)
    {
        printf("%d ",x%10);
        x = x/10;
    }

    printf("\n");
    
   }
  
   
    return 0;
}