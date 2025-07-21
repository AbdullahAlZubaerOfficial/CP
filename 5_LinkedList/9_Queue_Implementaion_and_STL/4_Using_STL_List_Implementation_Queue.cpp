#include<bits/stdc++.h>
using namespace std;


class myQueue
{
    public:
    list<int> l;

    int sz = 0;

    void push(int val){     // O(1)
      l.push_back(val);
    }

    void pop(){            // O(1)
     l.pop_front();
    }

    int front(){           // O(1)
        return l.front();
    }

    int back(){             // O(1)
        return l.back();
    }

    int size(){            // O(1)
        return l.size();
    }

    int empty(){              // O(1)
        return l.empty();
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