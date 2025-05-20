
#include <stdio.h>

int main() { 
   char s1[101],s2[101];
   
   gets(s1);
   gets(s2);

   int length1 = strlen(s1);
   int length2 = strlen(s2);

   printf("%d %d\n",length1,length2);
   printf("%s%s\n",s1,s2);

    int temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    
    printf("%s %s",s1,s2);
   
    return 0;
}