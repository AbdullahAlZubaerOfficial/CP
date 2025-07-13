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

// Count the size of the list
int get_size(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

// Insert at a given index
bool insert_at_index(Node*& head, Node*& tail, int index, int val) {
    int size = get_size(head);
    if (index < 0 || index > size) {
        return false;
    }

    Node* newnode = new Node(val);

    // Insert at head
    if (index == 0) {
        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
        return true;
    }

    // Insert at tail
    if (index == size) {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
        return true;
    }

    // Insert in middle
    Node* temp = head;
    for (int i = 0; i < index - 1; i++) {
        temp = temp->next;
    }

    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next->prev = newnode;
    temp->next = newnode;

    return true;
}

// Print from left to right
void print_left_to_right(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val;
        if (temp->next != NULL) cout << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Print from right to left
void print_right_to_left(Node* tail) {
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->val;
        if (temp->prev != NULL) cout << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int Q;
    cin >> Q;

    while (Q--) {
        int X, V;
        cin >> X >> V;

        bool ok = insert_at_index(head, tail, X, V);

        if (!ok) {
            cout << "Invalid" << endl;
        } else {
            print_left_to_right(head);
            print_right_to_left(tail);
        }
    }

    return 0;
}


/*

Question: You have a doubly linked list which is empty initially. You need to take a value Q which refers to queries. For each query you will be given X and V. You will insert the value V to the Xth index of the doubly linked list and print the list in both left to right and right to left. If the index is invalid then print “Invalid”.


Sample Input: 
6
0 10
1 20
4 30
0 30
1 40
5 50

Sample Output:
10
10
10 20
20 10
Invalid
30 10 20
20 10 30
30 40 10 20
20 10 40 30
Invalid



*/