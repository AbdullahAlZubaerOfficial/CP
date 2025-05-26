
#include <stdio.h>

void hello(){
    printf("Hello\n");
    hello();
}

int main() { 
     
    printf("Hi\n");
    hello();
   
    return 0;
}

/**
 * output: Hi
 *         Hello
 *         Hello
 *         Hello
 *         .
 *         .
 *         .
 *         . 
 * Infinite time cholte thakbe ei function ta tai ei function ke thamanor jonno amader
 * condition die dite hobe.....condition ta PrintFrom1toN3.c ei program e dea ache
 */