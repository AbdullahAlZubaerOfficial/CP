#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[100005];
bool vis[100005];
int level[100005];
int parent[100005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    parent[src] = -1;


    while(!q.empty()){
        int par = q.front();
        q.pop();
        // cout << par << " ";

        for(int child: adj_list[par]){
            if(vis[child]==false){
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }

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
     memset(level, -1 ,sizeof(level));
     memset(parent,-1,sizeof(parent));

     bfs(1);

   
       if(!vis[n]){
            cout << "IMPOSSIBLE"<< endl;
           return 0;
        }
    

     int node = n;

     vector<int> track;

 



    while (node!=-1)
    {
      

       track.push_back(node);
       node = parent[node];
    }
    
    reverse(track.begin(),track.end());

   
    cout << track.size() << endl;

    for(int x: track){
        cout << x << " ";
    }
     

     
    

    return 0;
}


/*

Sample Input 1: 
5 5
1 2
1 3
1 4
2 3
5 4

Output: 
3
1 4 5


Sample Input 2: 
10 10
5 7
3 5
7 9
5 9
3 7
6 8
2 6
6 10
2 4
4 8

Output: IMPOSSIBLE


Questions: https://cses.fi/problemset/task/1667/



*/