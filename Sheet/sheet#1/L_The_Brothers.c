
#include <stdio.h>
#include<string.h>
#include<limits.h>

int main() { 
   
    char f1[101],s1[101];

    scanf("%s %s",f1,s1);

    // printf("%s\n",s1);

    char f2[101],s2[101];

    scanf("%s %s",f2,s2);

    // printf("%s\n",s2);

    if(strcmp(s1,s2)==0){
        printf("ARE Brothers");
    }else{
        printf("NOT");
    }
   
    return 0;
}