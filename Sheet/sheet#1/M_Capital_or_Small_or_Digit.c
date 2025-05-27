
#include <stdio.h>
#include<string.h>
#include<limits.h>

int main() { 
   
    char s[101];

    scanf("%s",s);

    int length = strlen(s);

    for(int i=0; i<length; i++){
       if(s[i]-'0'>=0 && s[i]-'0'<=9){
        printf("IS DIGIT");
       }
       else if(s[i]>='A' && s[i] <= 'Z'){
        printf("ALPHA\nIS CAPITAL");
       }
       else if(s[i]>='a' && s[i]<='z'){
        printf("ALPHA\nIS SMALL");
       }
    }
   
    return 0;
}

/*

Input: 
A
  
Output: 
ALPHA  
IS CAPITAL


Input: a

Output: 
ALPHA  
IS SMALL

Input: 9 
Output: IS DIGIT


*/

