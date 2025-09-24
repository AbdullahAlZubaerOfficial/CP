#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node* &head, int val)
{
    Node* newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

int size_of_list(Node* head)
{
    int count = 0;
    Node* temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void print_middle(Node* head)
{
    int size = size_of_list(head);
    Node* temp = head;

    for (int i = 0; i < (size - 1) / 2; i++)
    {
        temp = temp->next;
    }

    if (size % 2 == 0)
    {
        cout << temp->val << " " << temp->next->val << endl;
    }
    else
    {
        cout << temp->val << endl;
    }
}

void print_linked_list(Node* head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node* head = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        insert_tail(head, val);
    }

    print_linked_list(head);
    print_middle(head);

    return 0;
}


/*

Question: Create a singly linked list and print the middle element. If there are multiple values in the middle print both.

Input:
1 2 3 4 5 6 -1

Output:
1 2 3 4 5 6 
3 4

Time Complexity -> O(N)

*/
