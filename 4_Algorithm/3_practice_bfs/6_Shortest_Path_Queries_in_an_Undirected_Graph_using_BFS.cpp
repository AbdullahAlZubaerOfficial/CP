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



int q;
cin >> q;

while(q--){
    
int src,dst;
cin >> src >> dst;

memset(vis,false,sizeof(vis));
memset(level,-1,sizeof(level));
memset(parent,-1,sizeof(parent));
bfs(src);

if(!vis[dst]){
    cout << "-1" << endl;
    continue;
}


int node = dst;
vector<int>path;

while(node!=-1){
    path.push_back(node);
    node = parent[node];
 
}

reverse(path.begin(),path.end());


cout << path.size()-1 << endl;

}
    

    return 0;
}

/*

Question: 
Question: You will be given an undirected graph as input. Then you will be given a 
query Q. For each query, you will be given source S and destination D. You need to
print the shortest distance between S and D. If there is no path from S to D,
print -1.

Sample Input 1:
6 7
0 1
0 2
1 2
0 3
4 2
3 5
4 3
6
0 5
1 5
2 5
2 3
1 4
0 0

Sample Output 1: 
2
3
3
2
2
0


Sample Input 2: 
7 5
0 1
0 2
4 5
4 6
5 7
3
0 4

Sample Output 2: 
-1
-1
-1


*/