#include <bits/stdc++.h>
using namespace std;

class Replacer {
    string s;
public:
    Replacer(string str) {
        s = str;
    }

    string transform() {
        string result = "";
        for (int i = 0; i < s.size(); i++) {
            if (i + 4 < s.size() && s.substr(i, 5) == "EGYPT") {
                result += ' ';
                i += 4; // skip "EGYPT"
            } else {
                result += s[i];
            }
        }
        return result;
    }
};

int main() {
    string s;
    cin >> s;  // single string input, no spaces in between

    Replacer obj(s);
    cout << obj.transform() << endl;

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    
//    string s;
//    cin >> s;
   
//    int length = s.size();

//    for(int i=0; i<length; i++){
//     if(s.substr(i,5) == "EGYPT"){
//         cout << " ";
//         i = i+4;
//     }else{
//         cout << s[i];
//     }
//    }  

//     return 0;
// }


/*

V. Replace Word
time limit per test1 second
memory limit per test256 megabytes
Given a string S
. Print S
 after replacing every sub-string that is equal to "EGYPT" with space.

Input
Only one line contains a string S
 (1≤|S|≤103)
 where |S| is the length of the string and it consists of only uppercase English letters.

Output
Print the result as required above.

Examples
InputCopy
BRITISHEGYPTGHANA
OutputCopy
BRITISH GHANA
InputCopy
ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ
OutputCopy
ITALYKOREA  ALGERIA Z



*/