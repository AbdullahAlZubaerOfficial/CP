
#include <stdio.h>

void hello(int i){
    if(i==6){    // base case for stoping infinite recursion
        return;
    }
    printf("%d\n",i);
    hello(i+1);
}

int main() { 
     
    int i=1;
    hello(i);
   
    return 0;
}

/**
 * Output:  1
 *          2
 *          3
 *          4
 *          5
 * 
 */