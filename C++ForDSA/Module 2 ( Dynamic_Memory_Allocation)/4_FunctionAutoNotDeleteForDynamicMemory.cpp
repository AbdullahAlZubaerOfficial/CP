#include<bits/stdc++.h>
using namespace std;

int* p;

void fun(){

    
    int *x = new int;  // dynamic variable declare

    *x = 10;
    
    p = x;

    cout << "Fun -> " << *p << endl;  // 10
    return;

}

int main(){
    
    fun();

    cout << "Main -> " << *p << endl;  // 10

    return 0;
}

// ekhane heap memory te dynamic vabe variable declare korar karone function theke p er man delete hobe na.....jar fole main function er vitor o p er man show korbe.....