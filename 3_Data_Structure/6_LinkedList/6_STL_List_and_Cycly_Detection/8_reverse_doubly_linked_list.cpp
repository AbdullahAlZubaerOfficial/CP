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

void insert_at_tail(Node* &head, Node* &tail,int val){
  Node* newnode = new Node(val);

  if(head == NULL){
    head = newnode;
    tail = newnode;
    return;
  }

  tail->next = newnode;
  newnode->prev = tail;
  tail = newnode;
}

void reverse_doubly(Node* head, Node* tail){

    for(Node *i = head, *j = tail; i!=j && i->prev != j ; i = i->next , j = j->prev){
        swap(i->val,j->val);
    }

    // for(int i=0, j=n-1; i<j; i++,j--){
    //     swap(i,j);
    // }

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

    Node* head = NULL;

    Node* tail = NULL;


     int val;
     while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
     }

  
     reverse_doubly(head,tail);
     print_forward(head);


    return 0;
}


/*

Input: 10 20 30 40 -1
Output: 40 30 20 10

*/