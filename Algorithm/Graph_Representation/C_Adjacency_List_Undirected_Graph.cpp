#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int n,e;
     cin >> n >> e;

     vector<int> adj_list[n];

     while(e--){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
     }

     for(int i=0; i<n; i++){
        cout << i << " -> ";

        for(int x: adj_list[i]){
            cout << x << " ";
        }
        
        cout << endl;

     }
    

    return 0;
}


/*

Input: 
5 5
0 1
0 2
0 3
1 3
3 4

Output: 
0 -> 1 2 3 
1 -> 0 3 
2 -> 0 
3 -> 0 1 4 
4 -> 3 


*/