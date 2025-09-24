#include <stdio.h>
#include <string.h> // strlen function er jonno ei header file lagbe

int main() { 
   
    int n;
    scanf("%d", &n); // User theke koyta test case input nibe

    while (n--) // Prottek test case er jonno loop cholbe
    {
        char s[101]; // Prothom string s
        char t[101]; // Ditiyo string t
        scanf("%s %s", s, t); // Duita string input nibe

        int length1 = strlen(s); // s string er length ber korlam
        int length2 = strlen(t); // t string er length ber korlam

        // Duita string er moddhe jar length chhoto, tar upor loop chalabo
        int minLength = (length1 < length2) ? length1 : length2;

        // Alternating way te character gulo print korchi
        for(int i = 0; i < minLength; i++){
            printf("%c%c", s[i], t[i]); // prothom string er i-th char + ditiyo string er i-th char
        }

        // Jodi s string boro hoy, tahole extra part print korchi
        if(length1 > minLength){
            printf("%s", s + minLength); // s er minLength index theke baki part print
        }
        else {
            // Nahole t er extra part print korchi
            printf("%s", t + minLength); // t er minLength index theke baki part print
        }

        // Prottek test case er output seshe new line
        printf("\n");
    }

    return 0;
}


/*

K. I Love strings
time limit per test2 seconds
memory limit per test64 megabytes
Given two strings S and T. Print a new string that contains the following:

The first letter of the string S followed by the first letter of the string T.
the second letter of the string S followed by the second letter of the string T.
and so on...
In other words, the new string should be ( S0 + T0 + S1 + T1 + .... ).
Note: If the length of S is greater than the length of T then you have to add the rest of S letters at the end of the new string and vice versa.

Input
The first line contains a number N (1 ≤ N ≤ 50) the number of test cases.

Each of the N following lines contains two string S, T (1 ≤ |S|, |T| ≤ 50) consists of lower and upper English letters.

Output
For each test case, print the required string.

Example
InputCopy
2
ipAsu ccsit
ey gpt
OutputCopy
icpcAssiut
egypt



*/