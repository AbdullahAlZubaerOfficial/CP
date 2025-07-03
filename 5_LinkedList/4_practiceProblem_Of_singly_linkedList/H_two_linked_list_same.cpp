#include <bits/stdc++.h> 
using namespace std; 

// Node class define
class Node 
{ 
public: 
    int val;           // node er value
    Node *next;        // next node er pointer

    Node(int val)      // constructor
    { 
        this->val = val; 
        this->next = NULL; 
    } 
}; 

// Tail e insert korar function
void insert_at_tail(Node *&head, Node *&tail, int val) 
{ 
    Node *newnode = new Node(val); 
    if (head == NULL)           // jodi list empty hoy
    { 
        head = newnode; 
        tail = newnode; 
        return; 
    } 
    tail->next = newnode; 
    tail = newnode; 
} 

// List print korar function
void print_list(Node *head) 
{ 
    Node *tmp = head; 
    while (tmp != NULL) 
    { 
        cout << tmp->val << " "; 
        tmp = tmp->next; 
    } 
    cout << endl; 
} 

// Linked list er size ber korar function
int count_linked_list(Node *head) 
{ 
    int cnt = 0; 
    Node *tmp = head; 
    while (tmp != NULL) 
    { 
        tmp = tmp->next; 
        cnt++; 
    } 
    return cnt; 
} 

int main() 
{ 
    Node *head1 = NULL; 
    Node *tail1 = NULL; 

    int val; 
    while (cin >> val && val != -1)       // prothom list input -1 porjonto
    { 
        insert_at_tail(head1, tail1, val); 
    } 

    Node *head2 = NULL; 
    Node *tail2 = NULL; 

    while (cin >> val && val != -1)       // ditiyo list input -1 porjonto
    { 
        insert_at_tail(head2, tail2, val); 
    } 

    int sz1 = count_linked_list(head1);   // prothom list er size
    int sz2 = count_linked_list(head2);   // ditiyo list er size

    if (sz1 != sz2)                       // size same na hole not same
    { 
        cout << "Linked List Not Same" << endl; 
    } 
    else 
    { 
        Node *tmp1 = head1; 
        Node *tmp2 = head2; 
        int flag = 0; 

        // size same hole value compare korbo
        while (tmp1 != NULL && tmp2 != NULL) 
        { 
            if (tmp1->val != tmp2->val) 
            { 
                flag = 1; 
                break; 
            } 
            tmp1 = tmp1->next; 
            tmp2 = tmp2->next; 
        } 

        if (flag == 0) 
        { 
            cout << "Linked list same" << endl; 
        } 
        else 
        { 
            cout << "Linked List Not Same" << endl; 
        } 
    } 
    return 0; 
}



/*

Input: 
10 20 30 -1
10 20 30 -1

Output: Linked list same


*/