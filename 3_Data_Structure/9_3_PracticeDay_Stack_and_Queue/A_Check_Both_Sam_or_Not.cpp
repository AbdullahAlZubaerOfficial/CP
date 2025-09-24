#include <iostream>
using namespace std;

// Maximum size
const int MAX = 1000;

// Stack implementation without STL
class Stack {
public:
    int arr[MAX];
    int top;

    Stack() {
        top = -1;
    }

    void push(int val) {
        if (top < MAX - 1) {
            arr[++top] = val;
        }
    }

    int pop() {
        if (top >= 0) {
            return arr[top--];
        }
        return -1; // for safety
    }

    int peek() {
        if (top >= 0)
            return arr[top];
        return -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    int size() {
        return top + 1;
    }
};

// Function to check if two stacks are the same
bool areStacksSame(Stack& s1, Stack& s2) {
    if (s1.size() != s2.size())
        return false;

    while (!s1.isEmpty() && !s2.isEmpty()) {
        int a = s1.pop();
        int b = s2.pop();
        if (a != b)
            return false;
    }
    return true;
}

int main() {
    int n, m;
    Stack s1, s2;

    // Input for first stack
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        s1.push(val);
    }

    // Input for second stack
    cin >> m;
    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        s2.push(val);
    }

    if (areStacksSame(s1, s2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}



/*

Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL stack to solve this problem.

Sample Input:
5
10 20 30 40 50
5
10 20 30 40 50
Sample Output: YES

Sample Input:
5
10 20 30 40 50
4
10 20 30 40
Sample Output: NO

Sample Input:
5
10 20 30 40 50
5
50 40 30 20 10
Sample Output: NO





*/