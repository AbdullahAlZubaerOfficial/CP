#include <bits/stdc++.h> 
using namespace std; 
 
// Node class create korlam
class Node 
{ 
public: 
    int val;         // node er value
    Node *next;      // next node er pointer
 
    Node(int val)    // constructor: value set + next NULL
    { 
        this->val = val; 
        this->next = NULL; 
    } 
}; 
 
// Tail e value insert korar function
void insert_at_tail(Node *&head, Node *&tail, int val) 
{ 
    Node *newnode = new Node(val);  // notun node create korlam
    if (head == NULL)               // jodi list empty hoy
    { 
        head = newnode;             // head and tail dui ta pointing new node
        tail = newnode; 
        return; 
    } 
    tail->next = newnode;           // tail er next e notun node link korlam
    tail = newnode;                 // tail ke update korlam
} 
 
// List print korar function (comment kora ache ekhane)
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
 
int main() 
{ 
    Node *head = NULL; 
    Node *tail = NULL; 
    int n; 
    cin >> n;                   // koyta value nibo seta input nicchi
 
    for (int i = 0; i < n; i++) 
    { 
        int val; 
        cin >> val;             // value input 
        insert_at_tail(head, tail, val);   // tail e insert korchi
    } 
 
    int tar_val; 
    cin >> tar_val;            // jeta khujte chai oita input nicchi
 
    int idx = 0;               // index count rakhar jonno
    bool flag = false;         // paile flag true korbo
 
    Node *tmp = head; 
    while (tmp != NULL) 
    { 
        if (tmp->val == tar_val)  // jodi match pai
        { 
            cout << idx << endl;  // index print
            flag = true; 
            break;                // break kore loop theke ber
        } 
        tmp = tmp->next;          // next node e jabo
        idx++;                    // index +1 korbo
    } 
 
    if (flag == false) 
    { 
        cout << -1 << endl;       // jodi match na pai
    } 
 
    return 0; 
}


/*

Input:
6
10 20 30 40 50 60
40


Output: 3

*/