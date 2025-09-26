#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // pair<int,string> p;
    // pair<string,int> p;
    // pair<int,int> p;
    // pair<char,int> p;

    pair<int,int> p;
    p = make_pair(2,3);
    cout << p.first << endl;   // 2
    cout << p.second << endl;  // 3


    pair<string,int> q;
    q = make_pair("Hello",5);
    cout << q.first << endl;  // Hello
    cout << q.second << endl;  // 5
    

    pair<string,int> r;
    r = {"Hi",8};
    cout << r.first << endl;  // Hi
    cout << r.second << endl;  // 8
    

    // Vector pair Example :
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }
    /*
    Input:
    5
    2 5
    2 3
    4 5
    6 7
    8 9
    
    */

    for(int i=0; i<n; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    /*
    Output:
    2 5
    2 3
    4 5
    6 7
    8 9

    */
    
    return 0;
}