#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a,b;
    cin >> a >> b;

    // cout<< min({4,5,2,9,56}); // 2
    // cout<< max({4,5,2,9,56}); // 56


    cout << min(a,b) << endl;
    cout << max(a,b) << endl;
    

    swap(a,b);

    cout << a << " "  << b << endl;  // Input: 10 20   Output: 20 10
    

    return 0;
}