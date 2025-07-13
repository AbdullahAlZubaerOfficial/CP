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

bool is_Same(Node* head1, Node* head2) {
    while (head1 != NULL && head2 != NULL) {
        if (head1->val != head2->val) {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    // If one list is longer than the other
    return head1 == NULL && head2 == NULL;
}

int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;


    int val;
    // Input for first list
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head1, tail1, val);
    }

    Node* head2 = NULL;
    Node* tail2 = NULL;

    // Input for second list
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head2, tail2, val);
    }

    // Check and print result
    if (is_Same(head1, head2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}



/*

Question: Take two doubly linked lists as input and check if they are the same or not.

Sample Input:
10 20 30 40 50 -1
10 20 30 40 50 -1
Sample Output: YES

Sample Input:
10 20 30 40 50 -1
10 20 30 40 -1
Sample Output: NO

Sample Input:
10 20 30 40 -1
10 20 30 40 50 -1
Sample Output: NO

Sample Input:
10 20 30 40 -1
40 30 20 10 -1
Sample Output: NO

Sample Input:
1 2 3 4 5 -1
5 4 1 2 6 -1
Sample Output: NO



*/