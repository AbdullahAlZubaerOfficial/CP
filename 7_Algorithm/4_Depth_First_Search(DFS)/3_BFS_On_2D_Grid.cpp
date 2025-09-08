#include <bits/stdc++.h>
using namespace std;

char grid[105][105];

bool vis[105][105];

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    else
    {
        return true;
    }
}


void bfs(int si,int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;

    while(!q.empty()){
        pair<int,int> par = q.front();
        q.pop();

        int par_i = par.first;
        int par_j = par.second;

        cout << par_i << " " << par_j << endl;

        for(int i=0; i<4; i++){
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
              if(valid(ci,cj) && vis[ci][cj]==false ){
           q.push({ci,cj});
           vis[ci][cj] = true;
        }

        }
    }
}



int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int si, sj;
    cin >> si >> sj;

    memset(vis, false, sizeof(vis));

    bfs(si, sj);

    return 0;
}

/*

Input:
3 4
....
....
....
1 2


Output:
1 2
0 2
2 2
1 1
1 3
0 1
0 3
2 1
2 3
1 0
0 0
2 0


class Link: https://phitron.io/ph067/video/ph067-3_8-dfs-on-2d-grid-animated

*/