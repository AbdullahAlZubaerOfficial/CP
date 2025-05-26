
#include <stdio.h>

// ⭐ star() function: i + 1 bar star print kore
void star(int count){
    if(count == 0){
        return;             // base case: count 0 hole function stop
    }

    printf("*");            // ekta star print kore
    star(count - 1);        // baki star print korar jonno abar nijeke call kore
}

// 📤 OuterLoop() function: row-wise pattern print kore
void OuterLoop(int i, int n){
    if(i >= n){
        return;             // base case: i jodi n er soman ba beshi hoy, function stop
    }

    star(i + 1);            // prottek row-e i+1 ta star print hoy
    printf("\n");           // ekta new line dey

    OuterLoop(i + 1, n);    // next row er jonno i increment kore call dey
}

int main() { 
    int n;
    scanf("%d", &n);        // user theke input ney (kotota line print korbe)

    OuterLoop(0, n);        // 0 theke start kore n line porjonto pattern print kore

    // 🔁 Loop-based version (same kaj loop diye)
    /*
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    */

    return 0;
}



// #include <stdio.h>

// void ruf(int n,int i,int j){

//     if(i>=n){
//         return;
//     }

//     if(j>=i+1){

//         printf("\n");
//         ruf(n,i+1,0);
//         return;

//     }

//     printf("*");
//     ruf(n,i,j+1);
    
// }

// int main() { 
   
//         int n;
//         scanf("%d",&n);

//         int i,j;

//         ruf(n,0,0);


   
//     return 0;
// }

// /*
// Input: 4

// Output: 
// *
// **
// ***
// ****


// */