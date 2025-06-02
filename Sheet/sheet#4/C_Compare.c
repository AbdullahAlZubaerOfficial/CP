

#include <stdio.h>

int main() { 
   
    char s[101],t[101];
    scanf("%s %s",s,t);

    if(strcmp(s,t)<0){
        printf("%s",s);
    }
    else{
        printf("%s",t);
    }
   
    return 0;
}


// #include <stdio.h>

// int main() { 
//     // দুটি স্ট্রিং ইনপুট নেওয়ার জন্য character array
//     char s[101], t[101];
//     scanf("%s %s", s, t); // দুটি স্ট্রিং ইনপুট নেওয়া

//     int i = 0; // তুলনার জন্য index ধরলাম

//     while (1) {
//         // যদি দুইটি স্ট্রিং একসাথে শেষ হয়, অর্থাৎ দুইটিই সমান
//         if (s[i] == '\0' && t[i] == '\0') {
//             printf("%s", s); // দুইটিই এক হওয়ায় যেকোনো একটা প্রিন্ট করলেই হবে
//             break;
//         }
//         // যদি s স্ট্রিং আগে শেষ হয়ে যায়, s ছোট
//         else if (s[i] == '\0') {
//             printf("%s", s);
//             break;
//         }
//         // যদি t স্ট্রিং আগে শেষ হয়, তাহলে t ছোট
//         else if (t[i] == '\0') {
//             printf("%s", t);
//             break;
//         }
//         // যদি s এর current character বড় হয়, তাহলে t ছোট
//         else if (s[i] > t[i]) {
//             printf("%s", t);
//             break;
//         }
//         // যদি t এর current character বড় হয়, তাহলে s ছোট
//         else if (s[i] < t[i]) {
//             printf("%s", s);
//             break;
//         }
//         // যদি দুই character সমান হয়, তাহলে পরবর্তী character তুলনা করব
//         else if (s[i] == t[i]) {
//             i++;
//         }
//     }

//     return 0;
// }


/*

C. Compare
time limit per test1 second
memory limit per test256 megabytes
Given two strings X and Y . Print the smallest lexicographical one.

Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

Input
Only one line contains two strings X, Y(1 ≤ |X|, |Y| ≤ 20) consists of lowercase English letters.

Output
Print the smallest lexicographical string.

Note: If both of X and Y are equal, print any of them.

Example
InputCopy
acm
acpc
OutputCopy
acm
Note
For more information visit Lexicographical order: https://en.wikipedia.org/wiki/Lexicographical_order




*/