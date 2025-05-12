
#include <stdio.h>
#include<string.h>

int main() { 
   char s[50];
//    gets(s);  or
fgets(s,50,stdin);   // fgets last e enter ta input hisebe nie nei
   printf("%s",s);  
   
    return 0;
}