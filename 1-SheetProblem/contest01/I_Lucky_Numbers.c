
#include <stdio.h>

int main() { 
   int n;
   scanf("%d",&n);

   int a = n/10;    // first digit;
   int b = n%10;     // second digit;

   if((a!=0 && b%a==0) || (b!=0 && a%b==0)){
    printf("YES\n");
   }
   else{
    printf("NO");
   }

   
    return 0;
}