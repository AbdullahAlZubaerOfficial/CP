#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        // cout << par << " ";

        for(int child: adj_list[par]){
            if(vis[child]==false){
                q.push(child);
                vis[child] = true;
                
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
    

     int src,dst;
     cin >> src >> dst;  // src = source , dst = destination
     
      bfs(src);


     if(vis[dst]){
        cout << "YES";
     }
     else{
        cout << "NO";
     }
    

    return 0;
}

/*

Input: 
7 5
0 1
1 3
3 2
4 6
3 5
0
4


Output: NO

image graph:https://i.ibb.co.com/6RmRxn5z/image.png     ei graph e 4 and 6 shate 1st graph source er kono connection nai...... 

Component 1: 0–1–3–2–5
Component 2: 4–6

এখন তুমি src = 0, dst = 4 দিলে – যেহেতু 0 component 1 এ আর 4 component 2 তে, BFS naturally 4 কে visit করবে না 🚫
তাই output হবে → NO ✅


*/