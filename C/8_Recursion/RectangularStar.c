
#include <stdio.h>

void star(int count){
    if(count==0){
        return;
    }
    printf("*");
    star(count-1);

}

void OuterLoop(int i,int n){

    if(i>=n){
        return;
    }

    star(n);
    printf("\n");
    OuterLoop(i+1,n);

}

int main() { 
   
        int n;
        scanf("%d",&n);

        OuterLoop(0,n);

        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         printf("*");
        //     }
        //     printf("\n");
        // }
   
    return 0;
}

// #include <stdio.h>

// void RectangularStar(int n, int i, int j) {
//     if (i >= n) return;       // সব সারি প্রিন্ট হয়ে গেলে থামো
    
//     if (j >= n) {             // এক সারির সব কলাম প্রিন্ট হয়ে গেলে
//         printf("\n");          // নতুন লাইনে যাও
//         RectangularStar(n, i + 1, 0);  // পরের সারি শুরু করো (কলাম আবার ০ থেকে)
//         return;
//     }
    
//     printf("*");              // তারকা প্রিন্ট করো
//     RectangularStar(n, i, j + 1);     // একই সারিতে পরের কলামে যাও
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     RectangularStar(n, 0, 0); // প্রথমে (০, ০) থেকে শুরু
//     return 0;
// }
// /*

// Input: 
// 4
// ****
// ****
// ****
// **** 

// Output:
// ****
// ****
// ****
// ****

// */