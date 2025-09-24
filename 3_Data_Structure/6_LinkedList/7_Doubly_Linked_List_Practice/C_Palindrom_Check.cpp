#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;

    Node(int val) {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Insert at tail
void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);

    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

// Check if the doubly linked list is a palindrome
bool is_palindrome(Node* head, Node* tail) {
    while (head != NULL && tail != NULL && head != tail && head->prev != tail) {
        if (head->val != tail->val) {
            return false;
        }
        head = head->next;
        tail = tail->prev;
    }
    return true;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }

    if (is_palindrome(head, tail)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}



/*

Question: Take a doubly linked list as input and check if it forms any palindrome or not.



Sample Input:
10 20 30 20 10 -1
Sample Output: YES

Sample Input:
10 20 30 30 20 10 -1
Sample Output: YES

Sample Input:
10 20 30 40 20 10 -1
Sample Output: NO

Sample Input:
10 20 30 20 40 -1
Sample Output: NO

Sample Input:
10 20 30 10 10 -1
Sample Output: NO

Sample Input:
10 20 20 20 10 -1
Sample Output: YES



*/