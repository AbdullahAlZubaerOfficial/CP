
#include <stdio.h>

#include<string.h>

   
    char s[10000001];       // global scope

int main() { 

    scanf("%s",s);

    int freq[26] = {0};

    // printf("%s",s);

    int length = strlen(s);

    for(int i=0; i<length; i++){
        // printf("%c",s[i]);
        freq[s[i]-'a']++;

    }

    for(int i=0; i<26; i++){
        if(freq[i] > 0 ){
            printf("%c : %d\n", i+'a',freq[i]);
        }
    }
   
    return 0;
}


/*

J. Count Letters
time limit per test2 seconds
memory limit per test64 megabytes
Given a string S. Determine how many times does each letter occurred in S.

Input
Only one line contains the string S (1 ≤ |S| ≤ 107) where |S| is the length of the string and it consists of only lowercase English letters.

Output
For each character that appears in S, print a single line that contains the following format: "X : Y" where X is the letter and Y is the number of times that letter X occurred in S.

Note: you must print letters in ascending order.

Examples
InputCopy
aaabbc
OutputCopy
a : 3
b : 2
c : 1
InputCopy
regff
OutputCopy
e : 1
f : 2
g : 1
r : 1



*/