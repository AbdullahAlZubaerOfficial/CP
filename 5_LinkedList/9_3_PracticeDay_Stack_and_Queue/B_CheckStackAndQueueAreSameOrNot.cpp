#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    
    stack<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x);
    }

    cin >> m;
    queue<int> q;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }

    bool same = true;
    while (!s.empty() && !q.empty()) {
        if (s.top() != q.front()) {
            same = false;
            break;
        }
        s.pop();
        q.pop();
    }

    if (same)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}


/*

Question: Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.


Input: 
5
10 20 30 40 50
5
10 20 30 40 50
Output: NO

Input: 
5
10 20 30 40 50
4
10 20 30 40
Output: NO

Input: 
5
10 20 30 40 50
5
50 40 30 20 10
Output: YES

*/