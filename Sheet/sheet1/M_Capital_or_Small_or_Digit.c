
#include <stdio.h>

int main() { 
     
    char ch;
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        printf("ALPHA\nIS SMALL");
    }
    else if(ch>='A' && ch<='Z'){
        printf("ALPHA\nIS CAPITAL");
    }
    else{
        printf("IS DIGIT");
    }
   
    return 0;
}