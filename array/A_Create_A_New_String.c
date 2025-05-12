
#include <stdio.h>

int main() { 
     char s[1001],a[1001];

     gets(s);
     gets(a);

     int length1 = strlen(s);
     int length2 = strlen(a);

     printf("%d %d\n",length1,length2);
     printf("%s %s",s,a);

   
    return 0;
}