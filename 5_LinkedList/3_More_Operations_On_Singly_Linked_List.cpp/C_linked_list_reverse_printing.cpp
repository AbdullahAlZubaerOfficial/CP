#include<bits/stdc++.h>
using namespace std;

class Node
{

    public: 
        int val;
        Node* next;

        Node(int val){
            this->val = val; 
            this->next = NULL;
        }
};

void insert_at_tail(Node* &head,Node* &tail, int val){    // ekhane &head dea hoyeche karon jate main function theke ei head er value pawa jai......

  Node *newnode = new Node(val);

  if(head == NULL){
    head = newnode;
    tail = newnode;
    return;
  }

  tail->next = newnode;
  tail = tail->next;
}

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}


void printReverse(Node* temp){


    // base case
    if(temp == NULL){
        return ;
    }
    printReverse(temp->next);
    cout << temp->val << endl;

}

int main(){
        
  Node* head = NULL;
  Node* tail = NULL;

  int val;
  while (1)
  {
    cin >> val;
    if(val == -1){
        break;
    }
    insert_at_tail(head,tail,val);
  }
  
  printReverse(head);

    return 0;
}


/*

Input: 10 20 30 40 -1

Output: 
40
30
20
10


*/