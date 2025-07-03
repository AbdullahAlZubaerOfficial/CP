#include<bits/stdc++.h>
using namespace std;


void fun(int* p){
    *p= 100;
    cout << "In fun: " << &p << endl;
}

int main(){
    
     int x = 10;
     int* p = &x;
     fun(p);

     // cout << "In Main: " << *p << endl;

     cout << "In Main: " << &p << endl;
    

    return 0;
}


/*




jodi fun function er vitor (int* p ) ei parameter use kori tahole main function theke call korar time e p er value fun function
theke pawa jabe na.........

Output: 

In fun: 0x62fef0
In Main: 0x62ff08


2 ta address alada alada asche so, bola jai je
fun function er vitor je p eta ar main function
er vitor je p duita alada........



ekhon jodi fun function er vitor (int* &p) ei parameter use kori tahole main function theke call korar time e p er value fun function
theke pawa jabe.........

Output: 
In fun: 0x62fef0
In Main: 0x62ff08

2 ta address same........


*/