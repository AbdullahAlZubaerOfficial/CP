#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char s[n + 1];
    scanf("%s", s);

    int freq[26] = {0};

    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < freq[i]; j++) {
            putchar(i + 'a');
        }
    }

    return 0;
}


/*


O. Sort String
time limit per test7 seconds
memory limit per test4 MB
Given a number N
 and a string S
 of size N
. Print S
 after sorting it.

Note : don't use built-in function and it's recommended to not solve this problem with python language.

Input
The first line contains a number N
 (1≤N≤107)
 size of string S
.

The second line contains a string S
 consists of lowercase English letters.

Output
Print S
 after sorting it.

Examples
InputCopy
4
deab
OutputCopy
abde
InputCopy
5
egypt
OutputCopy
egpty



*/