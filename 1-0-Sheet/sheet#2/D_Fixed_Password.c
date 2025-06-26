
#include <stdio.h>

int main() { 
   
    int n;
    

    while (scanf("%d",&n)){
        if(n==1999){
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
    
   
    return 0;
}

/*
Input: 
2200
1020
1999
1000
9999


Output: 
Wrong
Wrong
Correct


*/