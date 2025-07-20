#include<bits/stdc++.h>
using namespace std;

class myStack{

    public: 
        vector<int> v;  // stack implement

        void push(int val){
            v.push_back(val);      // O(1)
        }

        void pop(){
           v.pop_back();    // O(1)
        }

        int top(){
            return v.back();    // O(1)
        }

        int size(){
            return v.size();    // O(1)
        }

        bool empty(){
           return v.empty();     // O(1)
        }


};

int main(){
    
    myStack st;
    
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    while(st.empty()==false){
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}


/*

Input: 
5
10 20 30 40 50

Output: 50 40 30 20 10 


*/