
#include <stdio.h>

int main() { 
   
    int n,m;
    scanf("%d %d",&n,&m);


    if(n%m==0 || m%n==0){
        printf("Multiples");
    }else{
        printf("No Multiples");
    }
   
    return 0;
}

/*

Input: 
6 3
  

Output: Multiples


*/

