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

// Print left to right
void print_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val;
        if (temp->next != NULL) cout << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Count number of nodes
int count_nodes(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Pure DLL based bubble sort (swapping values)
void sort_dll(Node* head) {
    if (!head) return;

    int n = count_nodes(head);
    for (int i = 0; i < n - 1; i++) {
        Node* temp = head;
        while (temp->next != NULL) {
            if (temp->val > temp->next->val) {
                swap(temp->val, temp->next->val);
            }
            temp = temp->next;
        }
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val && val != -1) {
        insert_at_tail(head, tail, val);
    }

    sort_dll(head);
    print_list(head);

    return 0;
}


/*

Question: Take a doubly linked list as input and sort it in ascending order. Then print the list.



Sample Input: 1 4 5 2 7 -1
Sample Output: 1 2 4 5 7

Sample Input: 20 40 30 10 50 60 -1
Sample Output: 10 20 30 40 50 60



*/