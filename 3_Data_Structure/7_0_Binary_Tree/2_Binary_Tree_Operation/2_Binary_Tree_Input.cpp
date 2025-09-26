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

Node* input_tree(){
    int val;
    cin >> val;
    Node* root;
    
    if(val == -1){
        root = NULL;
    }
    else{
        root = new Node(val);
    }

    queue<Node*> q;

    if(root != NULL){
         q.push(root);
    }

    while(!q.empty()){
        // 1. ber kore ante hobe
        Node* p = q.front();
        q.pop();

        // 2. oi node nie kaj
        int l,r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        if(l == -1){
            myLeft = NULL;
        }
        else{
            myLeft = new Node(l);
        }

        if(r == -1){
            myRight = NULL;
        }
        else{
            myRight = new Node(r);
        }

        p->left = myLeft;
        p->right = myRight;

        // 3. children push korte hobe
        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }

    return root;

}


void levelOrder(Node* root){

    if(root == NULL){
        cout << "No Tree";
        return;
    }

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
    
    Node* root = input_tree();
    levelOrder(root);

    

    return 0;
}



/*

Input : 10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1

Output : 10 20 30 40 50 60 



*/