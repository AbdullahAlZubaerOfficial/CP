
#include <stdio.h>

int main() { 
   
    int n;
    scanf("%d",&n);

    int years = n/365;

    printf("%d years\n",years);

    int monthRemains = n%365;

    int month = monthRemains/30;

    printf("%d months\n",month);

  
    int days = monthRemains%30;

   

    printf("%d days",days);
   
    return 0;
}

/*

Input: 
400  

Output: 
1 years
1 months
5 days

*/

