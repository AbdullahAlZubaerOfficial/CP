#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;

    vector<int> even, odd;

     int cntEven = 0;
    int cntOdd =0;

    cout << "BFS Traversal: ";

    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        cout  << par << " ";

        if(par%2==0){
            even.push_back(par);
            cntEven++;
        }
        else{
            odd.push_back(par);
            cntOdd++;
        }

        for(int child: adj_list[par]){
            if(vis[child]==false){
                q.push(child);
                vis[child] = true;
            }
        }

    }

    cout << endl;

    for(int x: even) cout << "Even : " << x << endl;
    for(int x: odd) cout << "Odd : " << x << endl;
    
    
   
   cout << "Total Even Number: " << cntEven << endl;
   cout << "Total Odd Number: " << cntOdd << endl;

}
 

int main(){

   
    
     int n , e ;
     cin >> n >> e;


     while (e--)
     {
        int a,b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);


     }

     
     memset(vis,false,sizeof(vis));
     bfs(0);
     
    

    return 0;
}


/*

Input: 
7 7
0 1
1 3
1 4
3 2
4 6
3 5
4 5

Output: 
BFS Traversal: 0 1 3 4 2 5 6 
Even : 0
Even : 4
Even : 2
Even : 6
Odd : 1
Odd : 3
Odd : 5
Total Even Number: 4
Total Odd Number: 3


*/