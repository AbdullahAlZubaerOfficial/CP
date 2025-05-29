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