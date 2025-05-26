
#include <stdio.h>

int main() { 
   
    int n;
    scanf("%d",&n);

    int realN = n;

    int revNum = 0;

    while(n>0){
        int lastDigit = n%10;

        n = n/10;

        revNum = (revNum*10) + lastDigit;

    }

    printf("%d\n",revNum);

    if(realN == revNum){
        printf("YES");
    }else{
        printf("NO");
    }
   
    return 0;
}

/*
Input: 12121

Output: 
12121
YES


Input: 160

Output: 
61
NO

*/