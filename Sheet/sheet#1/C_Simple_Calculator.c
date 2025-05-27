
#include <stdio.h>

int main() { 
       long long int n,m;
       scanf("%lld %lld",&n,&m);
       
       printf("%lld + %lld = %lld\n",n,m,n+m);
       printf("%lld * %lld = %lld\n",n,m,n*m);
       printf("%lld - %lld = %lld\n",n,m,n-m);

   
    return 0;
}

/*

Input: 
1000000000 2000000000


Output: 
1000000000 + 2000000000 = 3000000000
1000000000 * 2000000000 = 2000000000000000000
1000000000 - 2000000000 = -1000000000


*/

