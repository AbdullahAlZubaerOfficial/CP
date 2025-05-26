
#include <stdio.h>

void Recursion(int n){
    if(n==0){
        return;
    }


           printf("I love Recursion\n");

    Recursion(n-1);
 

}

int main() { 

   int n;
   scanf("%d",&n);


   Recursion(n);
    
   
    return 0;
}

/*
Input: 3

Output: 
I love Recursion
I love Recursion
I love Recursion


*/