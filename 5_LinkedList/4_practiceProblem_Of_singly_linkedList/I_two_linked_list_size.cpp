#include <bits/stdc++.h> 
using namespace std; 
 
// Node class define kora hocche
class Node 
{ 
public: 
    int val;         // value thakbe
    Node *next;      // next node er address thakbe
 
    Node(int val)    // constructor
    { 
        this->val = val; 
        this->next = NULL; 
    } 
}; 
 
// tail e node insert korar function
void insert_at_tail(Node *&head, Node *&tail, int val) 
{ 
    Node *newnode = new Node(val);     // new node create
    if (head == NULL)                  // jodi list empty hoy
    { 
        head = newnode; 
        tail = newnode; 
        return; 
    } 
    tail->next = newnode;              // tail er next e link
    tail = newnode;                    // tail update
} 
 
// list print korar function
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
 
// list er size count korar function
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
    while (cin >> val && val != -1)         // first list input (-1 dile break)
    { 
        insert_at_tail(head1, tail1, val); 
    } 
 
    Node *head2 = NULL; 
    Node *tail2 = NULL; 
 
    while (cin >> val && val != -1)         // second list input (-1 dile break)
    { 
        insert_at_tail(head2, tail2, val); 
    } 
 
    // size compare korchi
    if (count_linked_list(head1) == count_linked_list(head2)) 
    { 
        cout << "Size Same" << endl; 
    } 
    else 
    { 
        cout << "Size Not Same" << endl; 
    } 
 
    return 0; 
}


/*

Input: 
10 20 30 -1  
5 15 25 -1

Output: Size Same


*/