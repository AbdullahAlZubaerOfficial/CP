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

void sort_linked_list(Node* head){

    for(Node* i = head; i->next != NULL; i = i->next ){
         for(Node* j = i->next; j != NULL; j = j->next ){

            if(i->val > j->val){
                swap(i->val, j->val);
            }


       }
    }

    // for(int i=0; i<n-1; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(a[i]>a[j]){
    //             swap(a[i],a[j]);
    //         }
    //     }
    // }
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

  sort_linked_list(head);
  
  print_linked_list(head);

    return 0;
}

/*

Input: 20 30 10 50 40 -1

Output: 
10
20
30
40
50


Time Complexity -> O(N*N)

*/
