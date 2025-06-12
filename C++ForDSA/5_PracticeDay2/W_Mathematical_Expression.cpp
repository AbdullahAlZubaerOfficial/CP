#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n,m,k;
   char c,d;

   cin >> n >> c >> m >> d >> k;
   
   if(c=='+'){
    if(n+m == k){
        cout << "Yes";
    }else{
        cout << n+m;
    }
   }
   else if(c=='-'){
    if(n-m == k){
        cout << "Yes";
    }else{
        cout << n-m;
    }
   }
   else if(c=='*'){
    if(n*m == k){
        cout << "Yes";
    }else{
        cout << n*m;
    }
   } else if(c=='/'){
    if(n/m == k){
        cout << "Yes";
    }else{
        cout << n/m;
    }
   }

    return 0;
}

/*


Input: 5 + 10 = 15
Output: YES

Input 3 - 1 = 2
Output: YES

Input: 2*10 = 19
Output: 20


*/