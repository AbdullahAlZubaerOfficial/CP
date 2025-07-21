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

class myQueue
{
    public:
    Node* head = NULL;
    Node* tail = NULL;

    int sz = 0;

    void push(int val){                      // O(1)
       sz++;
        Node* newnode = new Node(val);
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }

    void pop(){            // O(1)
       sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL){
            tail = NULL;
        }
    }

    int front(){           // O(1)
        return head->val;
    }

    int back(){             // O(1)
        return tail->val;
    }

    int size(){
        return sz;
    }

    int empty(){
        if(head==NULL){
            return true;
        }else{
            return false;
        }
    }

};

int main(){
    
    myQueue q;
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int val;
        cin >> val;
        q.push(val);
    }


// cout  << q.front() << " " << q.back() << " " << q.size() << " ";
// Input: 
// 5
// 10 20 30 40 50

// Output: 10 50 5



    while (!q.empty())
    {
       cout << q.front() << " ";
       q.pop();
    }
    
    /*
    Input: 
    5
    10 20 30 40 50
    Output: 10 20 30 40 50
    
    */


    return 0;
}


/*



*/