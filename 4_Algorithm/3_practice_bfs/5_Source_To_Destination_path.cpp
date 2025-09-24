#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];
int level[1005];
int parent[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    parent[src] = -1;

    while (!q.empty())
    {
       int par = q.front();
       q.pop();
    //    cout << par << " ";

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
     memset(level,-1,sizeof(level));
     memset(parent,-1,sizeof(parent));

     int src,dst;
     cin >> src >> dst;

     bfs(src);

     for(int i=0; i<n; i++){
        cout << i << " parent -> " << parent[i] << endl;
     }


     int node = dst;

     cout << "Shortest Path: source to destination: ";

     vector<int> path;
     while(node != -1){

         path.push_back(node);
          
          node = parent[node];
     }

     reverse(path.begin(),path.end());
     for(int x: path){
        cout << x << " ";
     }
   
     cout << endl;

     cout << "Shortest Destination " << src << " to " << dst << " : " << level[dst];
     
    

    return 0;
}

/*
Input: 
7 7
0 1
1 3
3 2
1 4
3 5
2 5
5 6
0
6

Output: 
0 parent -> -1
1 parent -> 0
2 parent -> 3
3 parent -> 1
4 parent -> 1
5 parent -> 3
6 parent -> 5
Shortest Path: source to destination: 0 1 3 5 6 
Shortest Destination 0 to 6 : 4


visually bujte ei image dekho : https://i.ibb.co.com/8nksnpFZ/image.png
animated video: https://phitron.io/ph067/video/ph067-2-5_4-path-printing-using-bfs-animated

*/