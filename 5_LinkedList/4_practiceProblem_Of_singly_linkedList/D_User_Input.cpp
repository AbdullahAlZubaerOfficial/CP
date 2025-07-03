#include <bits/stdc++.h> 
using namespace std; 
 
class Node 
{ 
public: 
    int data;       // kon type er data store korbe node e 
    Node *next;     // next node er address store korbe 
 
    Node(int data)  // constructor - notun node create korar jonno 
    { 
        this->data = data;  // data set korlam 
        this->next = NULL;  // next initially NULL set korlam 
    } 
}; 
 
void print_linked_list(Node *head) 
{ 
    Node *temp = head;  // initially head node theke start korbo 
 
    while (temp != NULL)  // jotokkhon porjonto node ache 
    { 
        cout << temp->data << endl;  // node er value print korlam 
        temp = temp->next;           // next node e jabo 
    } 
} 
 
void insert_at_head(Node *&head, int val) // O(1) time e head e insert 
{ 
    // 1. notun node create korbo 
    Node *new_node = new Node(val); 
 
    // 2. new node er next hobe current head 
    new_node->next = head; 
 
    // 3. head ke update korbo new node e 
    head = new_node; 
} 
 
void insert_at_tail(Node *&head, Node *&tail, int val) // O(1) time e tail e insert 
{ 
    // 1. notun node create korbo 
    Node *new_node = new Node(val); 
 
    // jodi list ta empty hoy (head NULL thake) 
    if (head == NULL) 
    { 
        head = new_node;  // prothom node hisebe head set korlam 
        tail = new_node;  // tail o set korlam 
        return; 
    } 
 
    // 2. current tail er next e new node add korlam 
    tail->next = new_node; 
 
    // 3. tail ke update korlam 
    tail = new_node; 
} 
 
int main() 
{ 
    Node *head = NULL;  // initially list empty 
    Node *tail = NULL; 
 
    int x; 
    while (true)  // input nite thakbo 
    { 
        cin >> x;         // input nicchi 
        if (x == -1)      // -1 dile loop theke ber hobo 
            break; 
        insert_at_tail(head, tail, x);  // value ta tail e insert korbo 
    } 
 
    print_linked_list(head);  // pura linked list print korbo 
}



/*

Input: 10 20 30 40 -1

Output: 
10
20
30
40

*/