#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int ar[5] = {1,2,3,4,5};

     vector<int> v(ar,ar+5);

     for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
     }
    

    return 0;
}

/*


Output: 1 2 3 4 5   


*/