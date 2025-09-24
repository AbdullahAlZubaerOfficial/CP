// ✅ Problem 5: Sort Linked List in Descending Order
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

void sort_descending(Node* head) {
    for (Node* i = head; i != NULL; i = i->next) {
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (i->val < j->val) swap(i->val, j->val);
        }
    }
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
    sort_descending(head);
    print_list(head);
    return 0;
}



/*

Input: 1 4 5 2 7 -1

Output: 7 5 4 2 1


*/