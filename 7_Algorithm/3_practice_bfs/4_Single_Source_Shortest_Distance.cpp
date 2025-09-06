#include<bits/stdc++.h>
using namespace std;

vector<int>adj_list[1005];
bool vis[1005];

int level[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
       int par = q.front();
       q.pop();

       cout << par << " ";

       for(int child: adj_list[par]){
        if(vis[child]==false){
            q.push(child);
            vis[child]= true;
            level[child] = level[par] + 1;
        }
       }
    }
}

int main(){
    
   int n,e;
   cin >> n>> e;
   
   while (e--)
   {
    int a,b;
    cin >> a >> b;

    adj_list[a].push_back(b);
    adj_list[b].push_back(a);

   }
   
   memset(vis,false,sizeof(vis));
   memset(level,-1,sizeof(level));

 

   
   
   int src,dst;
   cin >> src >> dst;
     bfs(src);
     cout << endl;

   for(int i=0; i<n; i++){
    cout << i << " -> " << level[i] << endl;
   }

   cout << "Distance " << src << " to " << dst << " is " << level[dst];
    

    return 0;
}

/*

Input: 
7 8
0 1
1 3
3 2
1 4
3 5
2 5
5 6
4 6
0
4

Output: 
0 -> 0
1 -> 1
2 -> 3
3 -> 2
4 -> 2
5 -> 3
6 -> 3
Distance 0 to 4 : 2


// input er value gulo graph editor e submit kore aro valo buja jabe



*/