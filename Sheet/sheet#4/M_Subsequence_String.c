#include <stdio.h>
#include <string.h>

int main() {
    char s[10001]; // input string
    scanf("%s", s);

    char target[] = "hello"; // target subsequence
    int j = 0; // index for target

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == target[j]) {
            j++; // matched one character
        }
        if (j == 5) break; // matched full "hello"
    }

    if (j == 5) {
        printf("YES\n"); // all 5 characters matched
    } else {
        printf("NO\n"); // couldn't match full "hello"
    }

    return 0;
}


/*

M. Subsequence String
time limit per test1 second
memory limit per test256 megabytes
Given String S
. Determine if there is a Subsequence in S
 that is equal to "hello" or not.

Note: A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements.

For example: The list of all subsequence for the word "apple" would be "a", "ap", "al", "ae", "app", "apl", "ape", "ale", "appl", "appe", "aple", "apple", "p", "pp", "pl", "pe", "ppl", "ppe", "ple", "pple", "l", "le", "e".

Input
Only one line contains a string S
 (5≤|S|≤104)
 where |S| is the length of the string and it consists of lowercase English letters.

Output
Print "YES" if there exists an Subsequence equal to "hello" otherwise, print "NO".

Examples
InputCopy
ahhellllloou
OutputCopy
YES
InputCopy
hlelo
OutputCopy
NO



*/