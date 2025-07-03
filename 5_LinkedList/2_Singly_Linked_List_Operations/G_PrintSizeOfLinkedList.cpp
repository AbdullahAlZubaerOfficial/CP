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

int size_of_linked_list(Node* head)
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
    cout << size_of_linked_list(head) << endl;

    return 0;
}





/*

Question: Create a singly linked list and print the size of the linked list.

Input: 2 1 5 3 4 8 9
Output: 7

Input: 5 1 4 5
Output: 4



*/