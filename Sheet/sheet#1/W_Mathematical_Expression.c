
#include <stdio.h>

int main() { 
   
    int a,b,e;


    char c,d;

    scanf("%d %c %d %c %d",&a,&c,&b,&d,&e);

    // printf("%d %c %d %c %d",a,c,b,d,e);


    if(c=='+'){
        if((a+b)==e){
            printf("Yes");
        }else{
            printf("%d",a+b);
        }
    }
    else if(c=='-'){
        if((a-b)==e){
            printf("Yes");
        }else{
            printf("%d",a-b);
        }
    }
    else if(c=='*'){
          if((a*b)==e){
            printf("Yes");
        }else{
            printf("%d",a*b);
        }
    }

  
    return 0;
}

/*

Input: 3 + 4 = 7
Output: Yes ✅

Input: 5 * 2 = 11
Output: 10 ❌

*/