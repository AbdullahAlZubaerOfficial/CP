#include <stdio.h>

int main() { 
   int r, c;
   scanf("%d %d", &r, &c);

   int ar[r][c];

   for(int i = 0; i < r; i++) {
      for(int j = 0; j < c; j++) {
         scanf("%d", &ar[i][j]);
      }
   }

   int flag = 100;

   if(r == c) {

      for(int i = 0; i < r; i++) {
         for(int j = 0; j < c; j++) {

            if(i + j == r - 1) {
               // secondary diagonal element, no check
            }
            else {
               if(ar[i][j] != 0) {
                  flag = 200;
               }
            }

         }
      }

   } else {
      flag = 200;
   }

   if(flag == 100) {
      printf("This is a secondary diagonal matrix");
   }
   else {
      printf("This is not a secondary diagonal matrix");
   }

   return 0;
}



/*

Input: 
3 3
0 0 4
0 7 0
9 0 0

Output: This is a secondary diagonal matrix


Input: 
3 3
4 0 0  
0 5 0  
0 5 8

Output: This is not a secondary diagonal matrix  

*/