#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];


void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;

    vector<int>nodes;

    // int mn = INT_MAX;
    // int mx= INT_MIN;

    cout << "BFS Traversal: ";

    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        cout << par << " ";

        nodes.push_back(par);

        // mn = min(mn,par);
        // mx = max(mx,par);


        for(int child: adj_list[par]){
            if(vis[child]==false){
                q.push(child);
                vis[child] = true;
            }
        }

    }
    
    cout << endl;

    sort(nodes.begin(),nodes.end());

    cout << "Max Number: " << nodes.back() << endl;
    cout << "Min Number: " << nodes.front() << endl;

    // cout << "Min Number: " << mn;
    // cout << "Max Number: " << max;

   
    if(nodes.size()> 1){
       cout << "2nd minimum: " << nodes[1];
    }
    

}

int main(){
    
     int n,e;
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
Max Number: 6
Min Number: 0
2nd minimum: 1

*/