#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n;
   cin >> n;
   vector<int> v;
   
   for(int i=0; i<n; i++){
    int x;
    cin >> x;

    v.push_back(x);

   }

   for(int i=0; i<n; i++){
    cout << v[i] << " ";
   }
    

    return 0;
}

/*


Input: 
5
10 20 30 40 50

Output: 
10 20 30 40 50



*/