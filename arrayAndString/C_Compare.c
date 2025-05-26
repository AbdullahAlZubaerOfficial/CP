
#include <stdio.h>

int main() { 
   char a[101],b[101];
   
   scanf("%s %s",a,b);

    int i=0;    // i=0 is used to initialize the index for iterating through the characters of both strings (a and b). Since strings in C are arrays of characters, indexing starts from 0, meaning i=0 points to the first character of each string.

    while (1)   // totokhon porjonto cholbe zothokhon projonto shorto na milbe;
    {

      if(a[i] == b[i]){   // The loop uses i to access characters like a[i] and b[i].   
         // Each time characters match (a[i] == b[i]), i is increased (i++) to move to the next character. 
           i++;
       }

       else if(a[i]=='\0' && b[i]=='\0'){
        printf("%s is smaller",a);
        break;
       }
       else if(a[i]=='\0'){
        printf("%s is smaller",a);
        break;
       }
       else if(b[i]=='\0'){
        printf("%s is smaller",b);
        break;
       }
       else if(a[i]<b[i]){
        printf("%s is smaller",a);
        break;
       }
       else if(a[i]>b[i]){
        printf("%s is smaller",b);
        break;
       }
      

    }
    
   
    return 0;
}


// zetar alphabet sesh er dike seta boro
// ar zar alphabet prothom dike seta choto
// ekhane output e compare kore smaller asbe