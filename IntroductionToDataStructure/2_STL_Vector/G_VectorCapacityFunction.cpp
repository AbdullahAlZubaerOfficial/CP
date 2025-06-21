#include<bits/stdc++.h>
using namespace std;

int main(){
    
     vector<int> v;

     cout << v.capacity() << endl;

     v.push_back(10);

     cout << v.capacity() << endl;
     v.push_back(10);
     cout << v.capacity() << endl;
     v.push_back(10);
     cout << v.capacity() << endl;
     v.push_back(10);
     cout << v.capacity() << endl;
     v.push_back(10);
     cout << v.capacity() << endl;
     v.push_back(10);

    

    return 0;
}

//VectorCapacityFunction.cpp

/*


Output: 
0
1
2
4
4
8

jokhon amra capacity ke cross kore feli tokhon tar capacity ke double kore fele........


*/