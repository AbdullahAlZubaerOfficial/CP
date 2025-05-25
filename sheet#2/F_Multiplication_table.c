
#include <stdio.h>

int main() { 
   
    int n;
    scanf("%d",&n);

    for(int i=1; i<=12; i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
   
    return 0;
}

/*
Input: 1

Output: 
1 * 1 = 1
1 * 2 = 2
1 * 3 = 3
1 * 4 = 4
1 * 5 = 5
1 * 6 = 6
1 * 7 = 7
1 * 8 = 8
1 * 9 = 9
1 * 10 = 10
1 * 11 = 11
1 * 12 = 12


*/