#include <bits/stdc++.h> 
using namespace std; 

// Node class define kora hocche
class Node 
{ 
public: 
    int val;          // node er moddhe data thakbe
    Node *next;       // next node er pointer

    Node(int val)     // constructor: new node create korar jonno
    { 
        this->val = val; 
        this->next = NULL; 
    } 
}; 

// Tail e insert korar function
void insert_at_tail(Node *&head, Node *&tail, int val) 
{ 
    Node *newnode = new Node(val);  // notun node create korlam
    if (head == NULL)               // jodi list empty hoy
    { 
        head = newnode;             // head & tail dui tai hobe ei notun node
        tail = newnode; 
        return; 
    } 
    tail->next = newnode;           // tail er next e notun node ke link korlam
    tail = newnode;                 // tail ke update korlam
} 

// List print korar function
void print_list(Node *head) 
{ 
    Node *tmp = head; 
    while (tmp != NULL)             // jotokkhon porjonto node ache
    { 
        cout << tmp->val << " ";    // value print
        tmp = tmp->next;           // next node e jabo
    } 
    cout << endl; 
} 

// List er total node count korar function
int count_linked_list(Node *head) 
{ 
    int cnt = 0; 
    Node *tmp = head; 
    while (tmp != NULL) 
    { 
        tmp = tmp->next; 
        cnt++;                     // prottek node er jonno count ++
    } 
    return cnt; 
} 

// Delete korar function specific position theke
void delete_at_any_pos(Node *head, int idx) 
{ 
    Node *tmp = head; 
    for (int i = 0; i < idx - 1; i++)  // delete node er ager node e jabo
    { 
        tmp = tmp->next; 
    } 
    Node *deleteNode = tmp->next;     // je node ta delete hobe
    tmp->next = tmp->next->next;      // bypass korlam
    delete deleteNode;                // memory free korlam
} 

// Maximum value khujar function
int max_find(Node *head) 
{ 
    int mx = INT_MIN;                // initial max value
    Node *tmp = head; 
    while (tmp != NULL) 
    { 
        mx = max(tmp->val, mx);      // max update korchi
        tmp = tmp->next; 
    } 
    return mx; 
} 

int main() 
{ 
    Node *head1 = NULL; 
    Node *tail1 = NULL; 

    int val; 
    while (cin >> val && val != -1)  // input nibo jotokkhon porjonto -1 na ashe
    { 
        insert_at_tail(head1, tail1, val);  // tail e insert korchi
    } 
    print_list(head1);                      // original list print

    // Bubble sort style diye ascending order e sort korchi
    for (Node *i = head1; i->next != NULL; i = i->next) 
    { 
        for (Node *j = i->next; j != NULL; j = j->next) 
        { 
            if (i->val > j->val) 
            { 
                swap(i->val, j->val);       // value swap korchi
            } 
        } 
    } 
    print_list(head1);                      // sorted list print

    // Duplicate node gula delete korchi (O(n^2) approach)
    Node *i = head1; 
    while (i != NULL) 
    { 
        Node *j = i; 
        while (j->next != NULL) 
        { 
            if (i->val == j->next->val)     // jodi duplicate pai
            { 
                Node *deleteNode = j->next; // duplicate node store
                j->next = j->next->next;    // bypass
                delete deleteNode;          // delete kore dilam
            } 
            else 
            { 
                j = j->next;                // next e jabo
            } 
        } 
        i = i->next; 
    } 
    print_list(head1);                      // duplicate remove korar por print

    return 0; 
}


/*

Input: 10 5 3 5 7 10 2 3 -1

🖨️ Output:
10 5 3 5 7 10 2 3 
2 3 3 5 5 7 10 10 
2 3 5 7 10 

Step by Step Explanation:

Initial linked list (insertion order):
10 → 5 → 3 → 5 → 7 → 10 → 2 → 3

Sorted linked list (ascending):
2 → 3 → 3 → 5 → 5 → 7 → 10 → 10

After removing duplicates:
2 → 3 → 5 → 7 → 10




*/