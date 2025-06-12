#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n,m;
   char c;
   cin >> n >> c >> m;
   
 
   if(c=='>'){
    if(n>m){
        cout << "Right";
    }else{
        cout << "Wrong";
    }
   }
   else if(c=='<'){
    if(n<m){
        cout << "Right";
    }else{
        cout << "Wrong";
    }
   }else if(c=='='){
    if(n==m){
        cout << "Right";
    }else{
        cout << "Wrong";
    }
   }


    

    return 0;
}

/*


Input: 5 > 4
Output: Right

Input: 9 < 1
Output: Wrong

Input: 4 = 4
Output: Right


*/