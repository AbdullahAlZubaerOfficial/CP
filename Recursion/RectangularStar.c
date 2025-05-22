#include <stdio.h>

void RectangularStar(int n, int i, int j) {
    if (i >= n) return;       // সব সারি প্রিন্ট হয়ে গেলে থামো
    
    if (j >= n) {             // এক সারির সব কলাম প্রিন্ট হয়ে গেলে
        printf("\n");          // নতুন লাইনে যাও
        RectangularStar(n, i + 1, 0);  // পরের সারি শুরু করো (কলাম আবার ০ থেকে)
        return;
    }
    
    printf("*");              // তারকা প্রিন্ট করো
    RectangularStar(n, i, j + 1);     // একই সারিতে পরের কলামে যাও
}

int main() {
    int n;
    scanf("%d", &n);
    RectangularStar(n, 0, 0); // প্রথমে (০, ০) থেকে শুরু
    return 0;
}
/*

Input: 
4
****
****
****
**** 

Output:
****
****
****
****

*/