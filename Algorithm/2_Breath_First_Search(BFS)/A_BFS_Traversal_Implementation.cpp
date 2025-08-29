#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];

void bfs(int src){

    queue<int>q;
    q.push(src);
    vis[src] = true;
    
    while (!q.empty())
    {
        // ber kore anbo
        int par = q.front();
        q.pop();

        // oi node ke niey kaj
        cout << par << " ";

        // children gulo push
        for(int child : adj_list[par]){

            if(vis[child]==false){
                q.push(child);
                vis[child]= true;
            }

        }
    }
    
}

int main(){
    
     int n,e;
     cin >> n >>e;

     while (e--)
     {
        int a,b;
        cin >> a >>b;
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


Output: 0 1 3 4 2 5 6 


*/