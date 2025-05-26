#include<bits/stdc++.h>
using namespace std;

int* p;

void fun(){
    int x = 10;  // static variable
    p = &x;
    
    cout << "Fun -> " << *p << endl;  // Fun -> 10
    return ;
}

int main(){
    
    fun();

    cout << "Main -> " << *p << endl;  // Main -> 0

    return 0;
}


// ekhane static memory hoar karone main function theke p er man delete hoye gese......
// Note: ei code windows compiler orthath vs code e run korle kaj korbe na because windows e memory sathe sathe delete kore na onek somoy......online c compiler or Linux e korle kaj korbe......