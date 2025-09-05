#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int n,e;
     cin >> n >> e;

     int adj_mat[n][n];

     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            adj_mat[i][j] = 0;
        }
     }

     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                adj_mat[i][j] = 1;
            }
        }
     }
    
     while(e--){
        int a,b;
        cin >> a >>b;

        adj_mat[a][b] = 1;


     }

     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
     }

    return 0;
}


/*

Input: 
6 6
0 1
0 2
0 4
0 3
1 4
3 4

Output: 
1 1 1 1 1 0 
0 1 0 0 1 0 
0 0 1 0 0 0 
0 0 0 1 1 0 
0 0 0 0 1 0 
0 0 0 0 0 1 



Rules:
1.set all 0 at initial stage in adj_mat
2.diagonally set 1
3.set value 1 from input as the condition of directed graph.
4.show output.


*/