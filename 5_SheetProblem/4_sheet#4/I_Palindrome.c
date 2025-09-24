
#include <stdio.h>

int main() { 
   
    char s[1001];

    scanf("%s",s);

    int length = strlen(s);

    int found = 1;

    for(int i=0; i<length/2; i++){
        // printf("%c",s[i]);
        if(s[i] != s[length-1-i]){
            found = 0;
            break;
        }
    }


    if(found){
        printf("YES");
    }else{
        printf("NO");
    }
   
    return 0;
}


/*

I. Palindrome
time limit per test1 second
memory limit per test256 megabytes
Given a string S. Determine whether S is Palindrome or not

Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

Input
Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

Output
Print "YES" if the string is palindrome, otherwise print "NO".

Examples
InputCopy
abba
OutputCopy
YES
InputCopy
icpcassiut
OutputCopy
NO
InputCopy
mam
OutputCopy
YES



*/