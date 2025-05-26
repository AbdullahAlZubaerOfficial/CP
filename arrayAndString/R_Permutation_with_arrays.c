// #include "stdio.h"
// #include <limits.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int arA[n];
//     int maxA = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arA[i]);
//         if (arA[i] > maxA) {
//             maxA = arA[i];
//         }
//     }

//     int arB[n];
//     int maxB = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arB[i]);
//         if (arB[i] > maxB) {
//             maxB = arB[i];
//         }
//     }

//     int size = (maxA > maxB ? maxA : maxB) + 1; // বড় ইনডেক্স পর্যন্ত জায়গা নিতে হবে
//     int freqA[size];
//     int freqB[size];

//     // সবগুলোকে 0 দিয়ে ইনিশিয়ালাইজ করো
//     for (int i = 0; i < size; i++) {
//         freqA[i] = 0;
//         freqB[i] = 0;
//     }

//     for (int i = 0; i < n; i++) {
//         freqA[arA[i]]++;
//         freqB[arB[i]]++;
//     }

//     for (int i = 0; i < size; i++) {
        

//         if (freqA[i] != freqB[i]) {
//             printf("no\n");
//             return 0;
//         }
//     }

//     printf("yes\n");
//     return 0;
// }

// Frequency মানে হচ্ছে → কোন সংখ্যা কয়বার এসেছে?

#include "stdio.h"

int main(){
    int n;
    scanf("%d",&n);

    int arA[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arA[i]);
    }

    int arB[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&arB[i]);
    }

    int count = 0;
    int used[n];

    for(int i=0; i<n; i++){
        used[i] = 0;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arA[i] == arB[j] && used[j]==0){
               
                used[j] = 1;
                count++;
                break;

            }
        }
    }

  
    if(count == n){
        printf("yes");
    }else{
        printf("no");
    }

    return 0;
}


/*
Input: 
4
4 2 3 7
2 3 4 9

Output:no


Input: 
5
5 1 1 9 3
1 9 1 5 3

Output: yes


*/