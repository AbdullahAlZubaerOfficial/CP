#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x;
    char c;
    double d;

    cin>>x >> c >> d;
    cout<<x << " " << c << endl << d << endl;

    char e = 'A';
    int ascii = c;
    cout << ascii << endl;   // 97


    // Type casting

    char f = 'b';
    cout<< (int)f << endl;  // 98

    int y = 66;
    cout<< (char)y << endl;   // B

    return 0;
}


/*

Input: 5 a 5.6

Output: 
5 a
5.6
97
98
B

*/