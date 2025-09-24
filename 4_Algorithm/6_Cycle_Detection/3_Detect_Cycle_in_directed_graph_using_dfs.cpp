#include <bits/stdc++.h>
using namespace std;

bool vis[105];
vector<int> adj_list[105];

bool pathvis[105];
bool cycle;

void dfs(int src)
{
    vis[src] = true;
    pathvis[src] = true;

    for (int child : adj_list[src])
    {

        if (vis[child] && pathvis[child])
        {
            cycle = true;
        }

        if (!vis[child])
        {

            dfs(child);
        }
    }

    // return
    pathvis[src] = false;

}

int main()
{

    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }

    memset(vis, false, sizeof(vis));
    memset(pathvis, -1, sizeof(pathvis));
    
    cycle = false;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {

            dfs(i);
        }
    }

    // for(int i=0; i<n; i++){
    //     cout << i << " parent: " << parent[i] << endl;
    // }

    if (cycle)
    {
        cout << "Cycle Detected\n ";
    }
    else
    {
        cout << "No Cycle\n";
    }

    return 0;
}


/*

Sample Input 1: 
4 4
0 1
1 2
2 3
0 3

Sample Output 1:
No Cycle

Sample Input 2: 
4 4
0 1
1 2
2 3
3 0

Sample Output 2:
Cycle Detected


*/
