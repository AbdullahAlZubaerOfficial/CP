
#include <stdio.h>

void reverse(int i){
    if(i==6){
        return;
    }
     
    reverse(i+1);
    printf("%d\n",i);
     
}

int main() { 
     
    int i=1;

    reverse(i);
   
    return 0;
}

/*

Output:
5
4
3
2
1


if

   printf("%d\n",i);
   reverse(i+1);
   
   mane printf er niche reverse hoto tahole output ashto olta 
   1
   2
   3
   4
   5


*/