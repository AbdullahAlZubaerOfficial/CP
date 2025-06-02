
#include <stdio.h>

int main() { 
   
    char s[10001],t[10001];

    scanf("%s",s);
    scanf("%s",t);

    // int lengthS = strlen(s);
    // int lengthT = strlen(t);


    int lengthS = 0;
    int lengthT = 0;

    for(int i=0; s[i]!='\0'; i++){
            lengthS++;
    }
    for(int i=0; t[i]!='\0'; i++){
            lengthT++;
    }

    printf("%d %d\n",lengthS,lengthT);

    printf("%s %s\n",s,t);
   
    return 0;
}

/*

A. Create A New String
time limit per test1 second
memory limit per test256 megabytes
Given two strings S and T. Print 2 lines that contain the following in the same order:

Print the length of S and T separated by space.
Print a new string that contains S and T separated by a space.
For more clarification see the example below.

Input
The first line contains a string S (1 ≤ |S| ≤ 103) where |S| is the length of S.

The second line contains a string T (1 ≤ |T| ≤ 103) where |T| is the length of T.

Output
Print the answer required above.

Examples
InputCopy
LEVEL
ONE
OutputCopy
5 3
LEVEL ONE
InputCopy
Programming
contest
OutputCopy
11 7
Programming contest



*/