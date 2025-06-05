#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n;
    cin >> n;

    long long int count = 1;

    for(long long int i=1; i<=n; i++){
        count = count * i;
    }

    cout << count;

    return 0;
}