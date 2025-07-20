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
    
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << " ";    // 30
    st.pop(); 
    cout << st.top() << " ";    // 30 20
    st.pop();
    cout << st.top() << " ";   // 30 20 10
    
    st.pop();

    if(st.empty()==false){
         cout << st.top() << " ";   // 30 20 10 
    }

    // cout << st.top() << " ";  // 30 20 10 134232549 
    // ekhon last e gurbage value chole asche......eta online judge e error dibe...tai eta thik korte hobe......ejonno st.pop er niche



    return 0;
}