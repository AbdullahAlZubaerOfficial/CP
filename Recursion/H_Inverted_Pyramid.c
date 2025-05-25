

#include <stdio.h>


void space(int count){
    if(count==0){
        return;
    }

    printf(" ");
    space(count-1);


}

void star(int count){
    if(count==0){
        return;
    }
    printf("*");
    star(count-1);
}

void outerLoop(int i,int n){
    if(i>n){
        return;
    }


    space(i-1);
    star(2*(n-i)+1);
   

    printf("\n");

    outerLoop(i+1,n);

}

int main() { 
   
    int n;
    scanf("%d",&n);

  outerLoop(1,n);
   
    return 0;
}


// #include <stdio.h>

// int main() { 
   
//       int n;
//         scanf("%d",&n);

//       for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             printf(" ");
//         }
//         for(int j=1; j<=2*(n-i)+1; j++){
//             printf("*");
//         }
//         printf("\n");
//       }
   
//     return 0;
// }

/*
space  star space
 0      5     0
 1      3     1
 2      1     3
 i     2i-1   i

*/