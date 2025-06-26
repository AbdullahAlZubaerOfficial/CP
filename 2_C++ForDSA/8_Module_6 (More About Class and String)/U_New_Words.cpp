
#include<bits/stdc++.h>
using namespace std;

class EgyptCount
{

    public:

    
     string s;

     int countE = 0,countG=0,countY=0, countP=0,countT=0;

      // 👉 Constructor to initialize string
     EgyptCount(string str){
      s = str;
     }

     void Egypt(){ 
        for(int i=0; i<s.size(); i++){
              if(s[i]=='e' || s[i]=='E'){
    countE++;
  }
  else if(s[i]=='g' || s[i]== 'G'){
    countG++;
  }
  else if(s[i]=='y' || s[i] == 'Y'){
    countY++;
  }
  else if(s[i]=='p' || s[i]=='P'){
    countP++;
  }
  else if(s[i]=='t' || s[i] == 'T'){
    countT++;
  }
        }
     }


     int EgyptReturn(){
       int mn = min({countE , countG , countY , countP , countT});
       return mn;
     }


};

int main(){
    
     string s;
     cin >> s;

     EgyptCount ec(s);

    ec.Egypt();

    cout <<  ec.EgyptReturn() << endl;
    

    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    
//    string s;
//    cin >> s;
   
// //    cout << s;

// int countE = 0,countG=0,countY=0, countP=0,countT=0;

// for(int i=0; s[i] != '\0'; i++){
//   if(s[i]=='e' || s[i]=='E'){
//     countE++;
//   }
//   else if(s[i]=='g' || s[i]== 'G'){
//     countG++;
//   }
//   else if(s[i]=='y' || s[i] == 'Y'){
//     countY++;
//   }
//   else if(s[i]=='p' || s[i]=='P'){
//     countP++;
//   }
//   else if(s[i]=='t' || s[i] == 'T'){
//     countT++;
//   }
// }

// int mn = min({countE , countG , countY , countP , countT});

// cout << mn;

// // cout << count/5;
    

//     return 0;
// }



/*

U. New Words
time limit per test1 second
memory limit per test256 megabytes
Given a string S
. Print number of times that "EGYPT" word can be formed from S
's characters.

Note: Case of the letters doesn't matter. For example: "Egypt", "egypt" and "eGyPt" are the same.

Input
Only one line contains a string S(1≤|S|≤106)
 where |S| is the length of the string and it consists of lowercase and uppercase English letters.

Output
Print the answer required above.

Examples
InputCopy
EgYpTaz
OutputCopy
1
InputCopy
pemigdbeigyypetet
OutputCopy
2




*/