#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int *a = new int[3];
    for(int i=0;i<3;i++){
        cin>>a[i];           // 10 20 30
    }
    int *b = new int[5];
    for(int i=0; i<3; i++){
       b[i] = a[i];   // 10 20 30 0 0
    }

    b[3] = 40;
    b[4] = 50;

    delete[] a;   // ekhane memory theke a array print hoye delete hoye jabe.... jar fole a array je memory jaiga nisilo oitar waste kome jabe.....

    for(int i=0; i<5; i++){
        cout<< b[i] << " ";     // 10 20 30 40 50
    }

    return 0;
}


/*
static way: 
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];           // 10 20 30
    }
    int b[5];
    for(int i=0; i<3; i++){
       b[i] = a[i];   // 10 20 30 0 0
    }

    b[3] = 40;
    b[4] = 50;

    for(int i=0; i<5; i++){
        cout<< b[i] << " ";     // 10 20 30 40 50
    }

    ekhane chaileo delete korte parbo na......but dynamic array te parbo

*/