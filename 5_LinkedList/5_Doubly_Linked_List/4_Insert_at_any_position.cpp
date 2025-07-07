#include<bits/stdc++.h>
using namespace std;

class Node{

    public: 
    int val;
    Node* prev;
    Node* next;

       Node(int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
       }
};

void insert_at_any_pos(Node* head,int idx,int val){
    Node* newnode = new Node(val);
    Node* temp = head;

    for(int i=1; i<idx; i++){
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next->prev = newnode; 
    temp->next = newnode;
    newnode->prev = temp;

}

void print_forward(Node* head){
   Node* temp = head;
   while (temp != NULL)
   {
    cout << temp->val << " ";
    temp = temp->next;
   }
   cout << endl;
   
}

int main(){
    
     Node* head = new Node(10);
     Node* a = new Node(20);

     Node* tail = new Node(30);

     head->next =  a;
     a->prev = head;

     a->next = tail;
     tail->prev = a;

     insert_at_any_pos(head,2,100);
     print_forward(head);


    return 0;
}


/*

Output: 10 20 100 30

*/

