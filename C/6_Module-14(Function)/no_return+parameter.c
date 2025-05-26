
#include <stdio.h>

void sum(int a,int b){
    int ans = a+b;
    printf("%d",ans);  // 
}

int main() { 
     
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
   
    return 0;
}