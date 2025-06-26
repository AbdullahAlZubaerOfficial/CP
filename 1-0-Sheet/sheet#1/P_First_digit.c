
#include <stdio.h>

int main() { 
   
    int n;
    scanf("%d",&n);

    int firstDigit = n/1000;

    if(firstDigit%2==0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
   
    return 0;
}

/*

Input: 
4567  

Output: EVEN

Input: 7123
Output: ODD

*/

