#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
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
        // cout << par << " ";

        for(int child: adj_list[par]){
          if(vis[child]==false){
              q.push(child);
             vis[child] = true;
             level[child] = level[par] + 1;
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

    bfs(0);

    int dst;
    cin >> dst;

    vector<int> desc;

    for(int i=0; i<n; i++){

       if(level[i]==dst){
        // cout << i << " ";
        desc.push_back(i);

       }

    }

sort(desc.begin(),desc.end(),greater<int>());

for(int x: desc){
    cout << x << " ";
}


    return 0;
}


/*

Questions: 
Question: You will be given an undirected graph which will be connected as input. Then you will be given a level L. 
You need to print the node values at level L in descending order. The source will be 0 always.

Sample Input 1: 
3 2
0 1
0 2
1
Output: 2 1

Sample Input 2:
6 7
0 1
0 2
1 2
0 3
4 2
3 5
4 3
1

Output: 3 2 1

Sample Input 3:
6 7
0 1
0 2
1 2
0 3
4 2
3 5
4 3
2

Output: 5 4


For easy to understand see this image: https://i.ibb.co.com/CsX5Djt8/image.png

*/