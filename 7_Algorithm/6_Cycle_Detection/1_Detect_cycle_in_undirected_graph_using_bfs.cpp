#include <bits/stdc++.h>
using namespace std;

bool vis[105];
vector<int> adj_list[105];

int parent[105];
bool cycle;

void bfs(int src)
{

    queue<int> q;
    q.push(src);

    vis[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        // cout << par << endl;

        for (int child : adj_list[par])
        {

            if (vis[child] && parent[par] != child)
            {
                cycle = true;
            }

            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                parent[child] = par;
            }
        }
    }
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
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(false));
    memset(parent, -1, sizeof(parent));
    cycle = false;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            bfs(i);
        }
    }

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
6 5
0 1
1 2
2 3
0 3
4 5

Sample Output 1:
Cycle Detected

Image to understand that there is a cycle : https://i.ibb.co.com/B2GSfnCg/image.png



Sample Input 2:
6 4
0 1
1 2
2 3
4 5


Sample Output: 
No Cycle

Image to understand that there is no cycle : https://i.ibb.co.com/M5hZGfVh/image.png


*/