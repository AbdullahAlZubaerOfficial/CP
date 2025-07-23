#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> original;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        original.push(x);
    }

    stack<int> s;
    // Step 1: Push all elements from queue to stack (reverse)
    while (!original.empty()) {
        s.push(original.front());
        original.pop();
    }

    queue<int> reversedQueue;
    // Step 2: Pop from stack to queue (reversed order)
    while (!s.empty()) {
        reversedQueue.push(s.top());
        s.pop();
    }

    // Step 3: Print reversed queue
    while (!reversedQueue.empty()) {
        cout << reversedQueue.front() << " ";
        reversedQueue.pop();
    }

    return 0;
}



/*

Question: Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.

Input: 
5
10 20 30 40 50

Output: 50 40 30 20 10


*/