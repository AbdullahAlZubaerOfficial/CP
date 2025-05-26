
#include <stdio.h>

void star(int count){
    if(count == 0){
        return;
    }

    printf("*");

    star(count-1);
}

void outerLoop(int i,int n){
    if(i<1){
        return;
    }

    star(i);
    printf("\n");

    outerLoop(i-1,1);

}

int main() { 
   
    int n;
    scanf("%d",&n);

    outerLoop(n,1);

    // for(int i=n; i>=1; i--){
    //     for(int j=1; j<=i; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
   
    return 0;
}


// #include <stdio.h>

// void ruf(int n,int i,int j){
//     if(i<1){
//         return;
//     }
//     if(j>i){
//         printf("\n");
//         ruf(1,i-1,1);
//         return;
//     }

//     printf("*");
//     ruf(n,i,j+1);
    
// }

// int main() { 
//        int n;
//        scanf("%d",&n);
       
//        int i,j;

//        ruf(n,n,1);

//     // for(int i=n; i>=1; i--){
//     //     for(int j=1; j<=i; j++){
//     //         printf("*");
           
//     //     }
//     //     printf("\n");
//     // }

   
//     return 0;
// }

// /*
// Input: 4

// Output: 
// ****
// ***
// **
// *

// */
