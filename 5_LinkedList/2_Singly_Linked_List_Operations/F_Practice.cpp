/*

Module-6
Implement the following Operations for Singly Linked List

Create a Singly Linked List (Take input from user)
Count the Size of the list
Display List
Insertion at Head 
Insertion at Tail
Insertion at Specific Position


*/


#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};



// Create a Singly Linked List (Take input from user)
void create_list(Node* &head, int n) {
    if(n <= 0) return;
    
    int val;
    cin >> val;
    head = new Node(val);

    Node* temp = head;
    for(int i = 1; i < n; i++) {
        cin >> val;
        temp->next = new Node(val);
        temp = temp->next;
    }
}



// print linked list or Display List
void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}



// Count the Size of the list
int count_size(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}



// Insertion at Head 
void insert_at_head(Node* &head, int val){
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}



// Insertion at Tail
void insert_at_tail(Node* &head, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}



// Insertion at Specific Position
void insert_at_any_pos(Node* &head, int pos, int val){
    if(pos == 0){
        insert_at_head(head, val);
        return;
    }

    Node* temp = head;
    for(int i = 1; i < pos; i++){
        if(temp == NULL) return;
        temp = temp->next;
    }

    Node* newnode = new Node(val);
    newnode->next = temp->next;
    temp->next = newnode;
}



int main(){
    Node* head = NULL;
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values: ";
    create_list(head, n);
    insert_at_head(head,n);
    print_linked_list(head);


    return 0;
}

/*



*/