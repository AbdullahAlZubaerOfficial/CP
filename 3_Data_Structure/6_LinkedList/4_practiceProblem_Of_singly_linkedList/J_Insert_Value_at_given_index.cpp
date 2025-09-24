// ✅ Problem 4: Insert Values at Given Index with Queries
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

void insert_at_position(Node*& head, int pos, int val) {
    if (pos < 0) {
        cout << "Invalid\n";
        return;
    }
    Node* newnode = new Node(val);
    if (pos == 0) {
        newnode->next = head;
        head = newnode;
        return;
    }
    Node* tmp = head;
    for (int i = 1; i < pos; i++) {
        if (tmp == NULL) {
            cout << "Invalid\n";
            return;
        }
        tmp = tmp->next;
    }
    if (tmp == NULL) {
        cout << "Invalid\n";
        return;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}

void print_list(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << "\n";
}

int main() {
    Node* head = NULL; Node* tail = NULL;
    int val;
    while (cin >> val && val != -1) insert_at_tail(head, tail, val);
    int q; cin >> q;
    while (q--) {
        int idx, v;
        cin >> idx >> v;
        insert_at_position(head, idx, v);
        print_list(head);
    }
    return 0;
}


/*

Input: 
10 20 30 -1
7
1 40
5 50
4 50
0 100
7 40
1 110
7 40


Output: 
10 40 20 30
Invalid
10 40 20 30 50
100 10 40 20 30 50
Invalid
100 110 10 40 20 30 50
100 110 10 40 20 30 50 40


*/