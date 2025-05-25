
#include <stdio.h>
#include<string.h>

#include<limits.h>

int main() { 
   
    char s[101];
    scanf("%s",s);

    int length = strlen(s);

    for(int i=0; i<length; i++){
        if(s[i]>='a' && s[i]<='z'){
            printf("%c",s[i]-32);
        }
        else if(s[i]>='A' && s[i]<='Z'){
            printf("%c",s[i]+32);
        }
    }
   
    return 0;
}