/*

For Understanding Level Order Traversal go to : https://www.geeksforgeeks.org/dsa/level-order-tree-traversal/#how-does-level-order-traversal-work

Rules :
1. ber kore ante hobe
2. oi node nie kaj
3. children gulo ke queue te push korte hobe

*/

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public: 
        int val;
        Node* left;
        Node* right;
        
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrder(Node* root){

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        // 1. ber kore ante hobe
        Node* f = q.front();
        q.pop();

        // 2. oi node nie kaj
        cout << f->val << " ";

        // 3. children push korte hobe
        if(f->left != NULL){
             q.push(f->left);
        }
        if(f->right != NULL){
             q.push(f->right);
        }


    }
}


int main(){
    
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    levelOrder(root);   // 10 20 30 40 50 60 


    return 0;
}

