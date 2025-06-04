
#include <stdio.h>

int main() { 
   
    int n;
    scanf("%d",&n); // ➤ Prothome string er length n input nei

    char s[1000001]; // ➤ Maximum 10^6 length porjonto string er jonno space nilam
    scanf("%s",s);   // ➤ String input nilam

    int count = 0;   // ➤ Subsequence character count start korlam

    // ➤ Full string traverse kortesi
    for(int i=0; s[i] != '\0'; i++){
        // ➤ First character er jonno s[i-1] invalid hoy, but C te eta undefined behavior. So eta fix kora uchit.
        // ➤ Jodi current character ager character theke alada hoy tahole count barabo
        if(s[i] != s[i-1]){
            count++;
        }
    }
   
    printf("%d",count); // ➤ Result print korlam

    return 0;
}


/*

N. Max Subsequence
time limit per test1 second
memory limit per test256 megabytes
Given a number N
 and a string S
 of size N
. Determine the maximum possible size of the sub-sequence T
 derived from S
 such that no two adjacent characters in T
 are the same.

Note: A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements.

For example: The list of all subsequence for the word "apple" would be "a", "ap", "al", "ae", "app", "apl", "ape", "ale", "appl", "appe", "aple", "apple", "p", "pp", "pl", "pe", "ppl", "ppe", "ple", "pple", "l", "le", "e".

Input
The first line contains a number N
 (1≤N≤105)
 denoting the size of the string.

The second line contains a string S
 consists of lowercase English letters.

Output
Print a single line containing one number that represents the maximum size of the subsequence that satisfies the provided condition.

Examples
InputCopy
5
ababb
OutputCopy
4
InputCopy
5
aaaac
OutputCopy
2
Note
Test 1 : all subsequence strings such that no two adjacent characters in it is the same.

a
b
ab
aba
abab
bab
ba
so the greatest one is "abab" and its size 4 so the answer is 4.




*/