
#include <stdio.h>
#include <stdio.h>

int main() { 
   int a;
   long long b;
   char ch;
   float d;
   double e;
   
   scanf("%d %lld %c %f %lf", &a, &b, &ch, &d, &e);

   printf("%d\n", a);
   printf("%lld\n", b);
   printf("%c\n", ch);
   printf("%.2f\n", d);
   printf("%.1lf\n", e);
   
   return 0;
}
