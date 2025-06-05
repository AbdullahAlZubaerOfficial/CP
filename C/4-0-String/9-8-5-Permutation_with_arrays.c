#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr1[n], arr2[n];

    // Input first array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int used[n]; // to mark if element in arr2 is already matched
    for (int i = 0; i < n; i++) {
        used[i] = 0;
    }

    int count = 0;

    // For each element in arr1, find a matching unused element in arr2
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr1[i] == arr2[j] && used[j] == 0) {
                used[j] = 1; // mark this element as used
                count++;
                break;
            }
        }
    }

    // If all elements matched, print yes, else no
    if (count == n) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}

/*

Input:
5
5 1 1 9 3
1 9 1 5 3

Output:
yes

Input:
4
4 2 3 7
2 3 4 9

Output:
no

Short Note:
This program checks if two arrays have the same elements (including duplicates) in any order.
It compares elements by marking matched elements in the second array to avoid reuse.
If every element from the first array has a match, it prints "yes"; otherwise, "no".
This approach is simple and beginner-friendly but can be slow for large arrays (O(n²) time).

*/
