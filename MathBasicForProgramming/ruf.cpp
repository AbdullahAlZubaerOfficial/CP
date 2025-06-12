#include<bits/stdc++.h>
using namespace std;

void swapIs(int a,int b){
    int temp = a;
    a = b;
    b = temp;
     printf("%d %d",a,b);
}

int main(){
    
   int a,b;
   cin >> a >> b;
   
   swapIs(a,b);
    
  

    return 0;
}