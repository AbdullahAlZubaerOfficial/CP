// Using Recursion
#include <stdio.h>

// Recursive function to print matrix rows in reverse order of columns
void Mirror(int r, int c, int ar[101][101], int i, int j) {
    if (i == r) return;               // 🛑 Base case: all rows processed

    if (j >= 0) {
        printf("%d ", ar[i][j]);      // 🖨️ Print current element in reverse column order
        Mirror(r, c, ar, i, j - 1);  // 🔄 Recursive call for same row, previous column
    } else {
        printf("\n");                 // 🖨️ New line after finishing a row
        Mirror(r, c, ar, i + 1, c - 1); // 🔄 Recursive call for next row, last column
    }
}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);           // 📥 Input rows and columns

    int ar[101][101];                 // 📦 2D array with max size 101x101
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &ar[i][j]);   // 📥 Input matrix elements
        }
    }

    Mirror(r, c, ar, 0, c - 1);       // ▶️ Start recursion from first row, last column

    return 0;
}

/*

Input:
3 3
2 3 5
7 9 20
35 1 12

Output:
5 3 2 
20 9 7 
12 1 35 

==============================
Short Note:
- প্রতিটি row এর elements উল্টো দিক থেকে প্রিন্ট করতে রিকার্সন ব্যবহার করা হয়েছে।
- j=column index শেষ থেকে প্রথমে নিয়ে আসা হয়।
- base case হল যখন সব row traverse শেষ হয়।

Time Complexity: O(r*c)
Space Complexity: O(r*c) (array storage) + O(r*c) (recursion stack in worst case)

==============================
Normal (non-recursive) version:

for (int i = 0; i < r; i++) {
    for (int j = c-1; j >= 0; j--) {
        printf("%d ", ar[i][j]);
    }
    printf("\n");
}

*/
