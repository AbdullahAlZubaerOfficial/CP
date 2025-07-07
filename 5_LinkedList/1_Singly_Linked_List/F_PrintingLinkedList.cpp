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

int main(){
    
    Node* head = new Node(10);     
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(400);

    Node* temp = head;    // ekhane temp er modhe head ta store kore rakhchi jate kore head er value gulo null e chole na jai.....
   
    head->next = a;
    a->next = b;
    b->next = c;

   

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
    

    return 0;
}


/*

Output: 
10
20
30 
400

*/