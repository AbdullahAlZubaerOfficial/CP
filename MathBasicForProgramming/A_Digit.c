
#include <stdio.h>
int main() { 
   
    int n;
    scanf("%d",&n);

    int count = 0;

   while (n>0)
   {
    int lastDigit = n%10;  // if 9876  Output: 6

    count++;

     n= n/10; 
   }

    printf("%d",count);
   
    return 0;
}

// TC -> O(log10N)         , Because of n = n/10;



  

// #include <stdio.h>

// int main() { 
   
//    char s[101];

//    scanf("%s",s);

//    int count = 0;

//    for(int i=0; s[i] != '\0'; i++){
//       count++;
//    }

//    printf("%d",count);
   
//     return 0;
// }


// Code: TC -> O(n), where n is the length of the input string.