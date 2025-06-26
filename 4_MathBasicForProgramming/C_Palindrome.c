

// Code: 1

#include <stdio.h>

int main() { 
     
    int n;
    scanf("%d",&n);

    int duplicate = n;

    int revNum = 0;

    while (n>0)
    {
       int lastDigit = n%10;
       n = n/10;
       revNum = (revNum*10) + lastDigit;
    }

    if(revNum == duplicate){
        printf("yes");
    }else{
        printf("no");
    }
    
   
    return 0;
}

// Input: 121
// Output: yes

// Input: 122
// Output: no

// O(log₁₀ n), as discussed before (one iteration per digit)





/*
// code : 2

#include <stdio.h>

int main() { 
   
    char s[101];
    scanf("%s",s);

    int length = strlen(s);

    int flag = 0;

    for(int i=0; i<length/2; i++ ){
        if(s[i] != s[length-1-i]){
            flag = 1;
            break;
        }
    }

    if(flag){
        printf("no");
    }else{
        printf("yes");
    }
   
    return 0;
}

// Input: 121
// Output: yes

// Input: 122
// Output: no

TC ->  O(n), where n is the length of the string.

*/
