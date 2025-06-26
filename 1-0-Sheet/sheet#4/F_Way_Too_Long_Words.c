
#include <stdio.h>
#include<string.h>


int main() { 
   
    int n;
    scanf("%d",&n);

    while (n--)
    {
        char s[1000001];
        scanf("%s",s);
        
        // printf("%s\n",s);
        int length = strlen(s);

        if(length<=10){
            printf("%s\n",s);
        }else{
            printf("%c%d%c\n",s[0],length-2,s[length-1]);
        }
    }
    
   
    return 0;
}