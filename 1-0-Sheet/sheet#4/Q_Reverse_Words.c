

#include <stdio.h>

int main() { 
   
    char s[1000001];
    scanf("%[^\n]",s);

    int length = strlen(s);

    int start = 0;

    for(int i=0; i<=length; i++){
        if(s[i] == ' ' || s[i]== '\0'){
            // printf("%c",s[i]);
            for(int j=i-1; j>=start;j--){
                putchar(s[j]);
            }
            if(s[i]==' '){
                putchar(' ');
            }
            start = i + 1;
        }
    }
   
    return 0;
}


/*

Q. Reverse Words
time limit per test1 second
memory limit per test256 megabytes
Given a string S
. For each word in S
 reverse its letters then print it.

Note: words are separated by space.

Input
Only one line contains a strings S
 (1≤|S|≤106)
 where |S| is the length of the string and it consists of lowercase and uppercase English letters, spaces.

Output
Print the answer required above.

Examples
InputCopy
I love you
OutputCopy
I evol uoy
InputCopy
You love me
OutputCopy
uoY evol em
InputCopy
We are a happy family
OutputCopy
eW era a yppah ylimaf



*/