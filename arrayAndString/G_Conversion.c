
#include <stdio.h>

int main() { 
     char s[100001];

     fgets(s,100001,stdin);

     for(int i=0; s[i]!='\0'; i++){
        if(s[i] == ','){
            printf(" ");
        }
        else if(s[i] >= 'a' && s[i]<='z'){
            printf("%c",s[i]-32);
        }
        else if(s[i]>='A' && s[i]<='Z'){
            printf("%c",s[i]+32);
        }
        else{
            printf("%c",s[i]);
        }
     }
   
    return 0;
}

/*
Input:
happy,NewYear,enjoy

Output: 
HAPPY nEWyEAR ENJOY


*/