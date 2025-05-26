
#include <stdio.h>

int main() { 
     
    int n;
    scanf("%d",&n);

    while (n--)
    {
       
        char s[101];


        scanf("%s",s);

        for(int i=0; s[i]!='\0'; i++){
            printf("%c",s[i]);
           
            if(s[i+1]!='\0'){   

//                 🧠 উদাহরণ দিয়ে বুঝি:
// ধরো ইনপুট দিলা: "123"

// c
// Copy
// Edit
// s[0] = '1'
// s[1] = '2'
// s[2] = '3'
// s[3] = '\0'
// লুপ চলবে:

// i = 0 → print 1 → s[1] আছে → print space ✅

// i = 1 → print 2 → s[2] আছে → print space ✅

// i = 2 → print 3 → s[3] নেই → no space ❌

// done.

// Output: 1 2 3



                printf(" ");
            }
           
        }

         printf("\n");
     

    }
    

   
    return 0;
}

/*
Input: 
3
123
1245
436784

Output: 
1 2 3
1 2 4 5
4 3 6 7 8 4

*/