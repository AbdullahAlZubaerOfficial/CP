
#include <stdio.h>

int main() { 
   
    char s[1000001];

    fgets(s,1000001,stdin);

    // printf("%s",s);

    for(int i=0; s[i] != '\\'; i++){
        printf("%c",s[i]);
    }
   
    return 0;
}


/*

B. Let's use Getline
time limit per test1 second
memory limit per test64 megabytes
Given a string S. Print the string S from the beginning to the first '\' character without printing the '\'.

Hint: use function getline(cin, s).

Input
Only one line contains a string S (1 ≤ |S| ≤ 106) where |S| is the length of the string.

It's guaranteed that S will contain '\' symbol.

Output
Print the answer required above.

Examples
InputCopy
Egyptian collegiate programming\ contest
OutputCopy
Egyptian collegiate programming
InputCopy
google \or facebook
OutputCopy
google 



*/