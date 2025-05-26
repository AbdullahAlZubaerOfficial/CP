
#include <stdio.h>
#include<string.h>
#include<limits.h>

int main() { 
   
    int a,s,b;
    scanf("%d%c%d",&a,&s,&b);

    if(s=='+'){
        printf("%d",a+b);
    }else if(s=='-'){
        printf("%d",a-b);
    }else if(s=='*'){
        printf("%d",a*b);
    }else if(s=='/'){
        printf("%d",a/b);
    }
   
    return 0;
}