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

bool contains_duplicate(Node* head)
{
    bool freq[101] = {false};

    Node* temp = head;

    while (temp != NULL)
    {
        if (freq[temp->val]) return true;
        freq[temp->val] = true;
        temp = temp->next;
    }

    return false;
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

    if (contains_duplicate(head))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}





/*

Question: Create a singly linked list and check if the linked list contains any duplicate value. You can assume that the maximum value will be 100.


Input: 5 4 8 6 2 1
Output: NO

Input: 2 4 5 6 7 4
Output: YES

Time Complexity -> O(N)

*/