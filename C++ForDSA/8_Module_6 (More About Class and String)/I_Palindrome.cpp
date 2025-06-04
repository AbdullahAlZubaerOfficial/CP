
#include<bits/stdc++.h>
using namespace std;

class palindrom
{

   public:

   string s;
   int found;

   palindrom(string str){
    s = str;
    
   int length = s.size();

    found = 1;

   for(int i=0; i<length/2; i++){
    if(s[i]!= s[length-1-i]){
        found = 0;
        break;
    }
   }
   }


   string palindromreturn(){
    if(found){
        return "YES";
    }
    else{
        return  "NO";
    }
   }


};

int main(){
    
   string s;
   cin >> s;
   
   palindrom ec(s);

   
    cout << ec.palindromreturn() << endl;

    

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    
//    string s;
//    cin >> s;
   
//    int length = s.size();

//    int found = 1;

//    for(int i=0; i<length/2; i++){

//        if(s[i]!=s[length-1-i]){
//         found = 0;
//         break;
//        }

//    }

//    if(found){
//     cout << "YES";
//    }else{
//     cout << "NO";
//    }
    

//     return 0;
// }

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