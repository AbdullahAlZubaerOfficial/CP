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



    return 0;
}



/*

for visual understand go to : https://i.ibb.co.com/6RFtKJhP/image.png
/*
        10
       /  \
      20   30
     /    /  \
    40   50   60

*/