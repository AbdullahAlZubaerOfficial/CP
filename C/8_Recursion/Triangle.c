#include <stdio.h>  // Input-output functions use korte

// Ei function ta 'count' number of spaces print kore
void space(int count) {
    if (count == 0) return;    // Base case: jodi 0 hoy, r kichu korbe na
    printf(" ");               // Ekta space print kore
    space(count - 1);          // Recursive call: ekta space komiye abar call
}

// Ei function ta 'count' number of stars (*) print kore
void star(int count) {
    if (count == 0) return;    // Base case: 0 hole function theke ber hoye jabe
    printf("*");               // Ekta star print kore
    star(count - 1);           // Recursive call: ekta star komiye abar call
}

// Ei function ta each line handle kore and recursively next line call kore
void outerLoop(int i, int n) {
    if (i > n) return;         // Base case: jodi i > n hoy, recursion stop

    space(n - i);              // Line er surute 'n - i' number of space print kore
    star(2 * i - 1);           // Tarpor 2*i - 1 number of star print kore
    printf("\n");              // Line seshe new line dey

    outerLoop(i + 1, n);       // Next line er jonno i 1 barie abar call kore
}

int main() {
    int n;
    scanf("%d", &n);           // User theke input ney, je koto line er pyramid hobe
    outerLoop(1, n);           // Pyramid print start kore line 1 theke
    return 0;                  // Program end
}


// #include <stdio.h>

// void ruf(int n,int i,int j){

//     if(i>n){
//         return;
//     }
//     if(j<=n-i){
//         printf(" ");
//         ruf(n,i,j+1);
//         return;
//     }

//     if(j<=n+i-1){
//         printf("*");
//         ruf(n,i,j+1);
//         return;
//     }

  
//         printf("\n");
//         ruf(n,i+1,1);
//         return;
    
    
// }

// int main() { 
   
//         int n;
//         scanf("%d",&n);

//         int i,j;

//         ruf(n,1,1);

      
   
//     return 0;
// }

/*
  for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i; j++){
                printf(" ");
            }
            for(int j=1; j<=(2*i-1); j++){
                printf("*");
            }
            printf("\n");
        }


*/