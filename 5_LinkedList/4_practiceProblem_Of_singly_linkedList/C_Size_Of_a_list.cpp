#include <bits/stdc++.h>
using namespace std;

int sz = 0;

class Node
{
public:
    int data;   // kon type er data
    Node *next; // tar next node er address

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)
{

    Node *temp = head; // initially head store thakbe

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void insert_at_head(Node *&head, int val) // o(1)
{

    // 1.notun node create kora
    Node *new_node = new Node(val);

    // 2. connection

    new_node->next = head;

    // 3. head change korte hobe

    head = new_node;
    sz++;
}

void insert_at_tail(Node *&head, Node *&tail, int val) // o(1)
{

    // 1.notun node create kora
    Node *new_node = new Node(val);
    sz++;

    // jodi eita prothom node hoi

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    // 2. connection

    tail->next = new_node;

    // 3. tail change korte hobe

    tail = new_node;
}

int size_of_list(Node *head)
{

    return sz;
}

void insert_at_any_position(Node *&head, int pos, int val)
{

    Node *new_node = new Node(val);
    sz++;

    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insert_at_tail(head, tail, x);
    }

    insert_at_head(head, 100);
    cout << size_of_list(head) << endl;
    print_linked_list(head);
}


/*

 Ei code ta ekta singly linked list implement kore jeikhane:

insert_at_tail diye value gulo last-e insert kora hocche.

Tarpor 100 ke head-e insert kora hocche.

Finally list er size print kore, pura list print kore.

🔽 Sample Input:
5 10 15 20 -1

🔽 Output:
5
100
5
10
15
20

🔽 Execution Steps:

First 5, 10, 15, 20 insert hobe tail-e (O(1) time).

Then 100 insert hobe head-e.

Size count hobe 5 (4 from input + 1 from head insertion).

Print hobe list: 100 → 5 → 10 → 15 → 20

✅ Note:

sz global variable use kore size track kora hocche.

Input -1 dile loop break hobe.


*/