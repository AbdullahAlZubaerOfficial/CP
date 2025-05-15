
#include <stdio.h>

void hello(int i){

    if(i==0){   // end condition
        return;
    }

    printf("%d\n",i);
    hello(i-1);    // increment or decrement
}

int main() { 
     
    int i=5;  // initialization or starting
    hello(i);
   
    return 0;
}

/**
 * Output:  5
 *          4
 *          3
 *          2
 *          1
 * 
 * if jodi na bujte paro tahole phitron theke recurstion er ei topic er animated video ta dekhe ashte paro
 */