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
    
     Node a(10),b(20),c(30);       // memory te 3 ta node declare korbe.....every node e ekta value and ekta pointer thakbe

    a.next = &b;
    b.next = &c;


    // cout << a.val << " " << b.val << " " << c.val;          // 10 20 30

    cout << a.val << endl;    // 10
    cout << (*a.next).val << endl;    // 20

    cout << a.next->next->val << endl;  // 30

    return 0;
}