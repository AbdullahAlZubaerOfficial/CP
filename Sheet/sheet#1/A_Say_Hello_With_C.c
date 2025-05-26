
#include <stdio.h>

int main() { 
   
    char s[101];
   
    fgets(s,101,stdin);

    printf("Hello, ");

    for(int i=0; s[i]!='\0'; i++){
        printf("%c",s[i]);
    }
  
   
    return 0;
}