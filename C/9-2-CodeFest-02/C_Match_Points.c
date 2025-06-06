#include <stdio.h>
#include <stdlib.h>

// Comparator function for qsort: sorts integers in ascending order
int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, z;                      // n: number of elements, z: the minimum difference required
    scanf("%d %d", &n, &z);       // Read input values
    
    int x[n];                     // Array to store the elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);       // Read each element into the array
    }

    // Step 1: Sort the array in ascending order
    qsort(x, n, sizeof(int), cmp);

    // Step 2: Use two pointers to find pairs where difference >= z
    int i = 0, j = n / 2, count = 0;  // i starts from first half, j starts from middle
    
    while (i < n / 2 && j < n) {
        if (x[j] - x[i] >= z) {  // Check if difference condition is met
            count++;             // Valid pair found, increment count
            i++;                 // Move both pointers forward
            j++;
        } else {
            j++;                 // If difference condition not met, move j forward to find larger difference
        }
    }

    // Step 3: Output the number of valid pairs found
    printf("%d\n", count);

    return 0;
}

/*
Input:
6 5
1 10 3 15 7 8

Output:
3

Short Note:
The code sorts an array and uses a two-pointer technique to count the maximum number of pairs (i, j)
where the difference between elements x[j] and x[i] is at least z. The array is split in half to try pairing
elements from the first half with elements from the second half.

Time Complexity (TC): O(n log n) due to sorting + O(n) for the two-pointer traversal.
Space Complexity (SC): O(n) for storing the array.
*/
