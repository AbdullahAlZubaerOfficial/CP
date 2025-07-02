#include<bits/stdc++.h>
using namespace std;

class Node
{

    public: 
        int val;
        Node* next;

};

int main(){
    
     Node a,b,c;       // memory te 3 ta node declare korbe.....every node e ekta value and ekta pointer thakbe

    a.val = 10;
    b.val = 20;
    c.val = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    // cout << a.val << " " << b.val << " " << c.val;          // 10 20 30

    cout << a.val << endl;    // 10
    cout << (*a.next).val << endl;    // 20

    cout << a.next->next->val << endl;  // 30


    return 0;
}