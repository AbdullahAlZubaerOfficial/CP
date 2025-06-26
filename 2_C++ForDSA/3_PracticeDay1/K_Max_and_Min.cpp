#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int a,b,c;
   
   cin >> a >> b >> c;

   int max = a;
   if(b>max){
    max = b;
   }
   if(c>max){
    max = c;
   }


   int min = a;

   if(b<min){
    min = b;
   }

   if(c<min){
    min = c;
   }

   cout << min << " " << max;

    

    return 0;
}

/*
Input: 1 2 3
Output: 1 3

*/