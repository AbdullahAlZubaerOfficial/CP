
#include <stdio.h>
#include<limits.h>

int main() { 
   
    char s[101],t[101];

    scanf("%s %s",s,t);

    int lengthS = strlen(s);
    int lengthT = strlen(t);

    // strcat(s,t);

    printf("%d %d\n",lengthS,lengthT);

    printf("%s%s\n",s,t);

    printf("%c%s %c%s",t[0], s+1,s[0],t+1);

   
    return 0;
}

/*

D. Strings
time limit per test2 seconds
memory limit per test64 megabytes
Given two strings A and B. Print three lines contain the following:

The size of the string A and size of the string B separated by a space
The string produced by concatenating A and B (A + B).
The two strings separated by a single space respectively, after swapping their first character.
For more clarification see the example below.

Input
The first line contains a string A (1 ≤ |A| ≤ 10) where |A| is the length of A.

The second line contains a string B (1 ≤ |B| ≤ 10) where |B| is the length of B.

Output
Print the answer required above.

Example
InputCopy
abcd
ef
OutputCopy
4 2
abcdef
ebcd af
Note
Declaration: 

string a = "abc";
Size: 

int len = a.size();
Concatenate two strings: 

string a = "abc";
string b = "def";
string c = a + b; // c = "abcdef".
Accessing i element: 

string s = "abc";
char   c0 = s[0];   // c0 = 'a'
char   c1 = s[1];   // c1 = 'b'
char   c2 = s[2];   // c2 = 'c'
s[0] = 'z';         // s = "zbc"



*/