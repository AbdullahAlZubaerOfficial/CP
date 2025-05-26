
#include <stdio.h>

void mello(){
    printf("Mello\n");
}

void gello(){
    printf("Gello\n");
    mello();
}

void hello(){
    printf("Hello\n");
    gello();
}

int main() { 
    
    printf("Yes running\n");
    hello();
   
    return 0;
}

/**
 * Output: 
 * 
 * yes running
 * hello
 * gello
 * mello
 * 
 */