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

// Reverse the doubly linked list
void reverse_list(Node*& head, Node*& tail) {
    Node* current = head;
    Node* temp = NULL;

    while (current != NULL) {
        // Swap prev and next
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        // Move to next (which is prev now)
        current = current->prev;
    }

    // After loop, temp is on the old tail, set it as new head
    if (temp != NULL)
        head = temp->prev;
}

// Print the list forward
void print_forward(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
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

    reverse_list(head, tail);
    print_forward(head);

    return 0;
}


/*

Question: Take a doubly linked list as input and reverse it. After that print the linked list.

Sample Input: 10 20 30 -1
Sample Output: 30 20 10


Sample Input: 10 20 30 40 -1
Sample Output: 40 30 20 10



*/