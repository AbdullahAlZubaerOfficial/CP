#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x); // push into stack
    }

    // Step 1: Reverse the stack into temp
    stack<int> temp;
    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
    }

    // Step 2: Now print in insertion order from temp
    while (!temp.empty()) {
        cout << temp.top() << " ";
        s.push(temp.top()); // optional: to restore original stack
        temp.pop();
    }

    return 0;
}



/*

Question: Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.


Input: 
5
10 20 30 40 50

Output: 10 20 30 40 50



*/