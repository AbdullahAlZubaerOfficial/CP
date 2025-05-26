
#include <stdio.h>

int main() { 
   int n,x,y;  
   scanf("%d",&n);

   for(int i=0; i<n; i++){
    scanf("%d %d",&x,&y);
    int sum = 0;
    if(x>y){
        int temp = x;
        x = y;
        y = temp;
    }

    for(int j=x+1; j<y; j++){
        if(j%2!=0){
            sum = sum +j;
        }
    }
    printf("%d\n",sum);

   }
   
    return 0;
}