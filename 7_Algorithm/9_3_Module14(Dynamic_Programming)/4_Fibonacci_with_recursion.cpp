#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==0 || n==1){   // or n<2
        return n;
    }
    
    return fibo(n-1) + fibo(n-2);
}

int main(){
    
    cout << fibo(9);
    

    return 0;
}


/*

index -> 0 1 2 3 4 5 6 7  8  9
number-> 0 1 1 2 3 5 8 13 21 34

Time Complexity -> 2^n

*/