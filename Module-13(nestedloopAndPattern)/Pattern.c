#include <stdio.h>

int main() { 
   int n;
   scanf("%d", &n);

   
   int space = n - 1;
   int star = 1;

   for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= space; j++) {
         printf(" ");
      }

      char ch = (i % 2 == 0) ? '-' : '#';

      for (int j = 1; j <= star; j++) {
         printf("%c", ch);
      }

      printf("\n");
      space--;
      star += 2;
   }

   space = 1;
   star -= 4;

   for (int i = n - 1; i >= 1; i--) {
      for (int j = 1; j <= space; j++) {
         printf(" ");
      }

      char ch = (i % 2 == 0) ? '-' : '#';

      for (int j = 1; j <= star; j++) {
         printf("%c", ch);
      }

      printf("\n");
      space++;
      star -= 2;
   }

   return 0;
}
