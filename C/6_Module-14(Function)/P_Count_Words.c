
#include <stdio.h>

int main() { 
   char s[1000001];
   
   fgets(s,1000001,stdin);

   int count = 0;
   int word = 0;

   for(int i=0; s[i]!='\0';i++){
      if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
        if(!word){
            count++;
           word = 1;
        }
      }
      else {
        word = 0;
      }
   }

   printf("%d",count);
   
   
    return 0;
}