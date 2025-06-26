#include <bits/stdc++.h>
using namespace std;

void SwapValues(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int x, y;
    cin >> x >> y;

    SwapValues(x, y);

    cout << x << " " << y;
    return 0;
}
