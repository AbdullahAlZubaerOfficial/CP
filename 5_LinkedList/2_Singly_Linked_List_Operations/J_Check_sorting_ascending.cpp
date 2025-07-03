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

bool is_sorted(Node* head)
{
    Node* temp = head;

    while (temp != NULL && temp->next != NULL)
    {
        if (temp->val > temp->next->val)
        {
            return false;
        }

        temp = temp->next;
    }

    return true;
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

    if (is_sorted(head))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}


/*

Question: Create a singly linked list and check if the linked list is sorted in ascending order.

Input: 1 5 6 8 9
Output: YES

Input: 2 4 6 5 8 4
Output: NO

Time Complexity -> O(N)

*/
