

#include <bits/stdc++.h>
using namespace std;

int par[1005];
int group_size[1005];

int find(int node)
{

    // cout << node << endl;

    if (par[node] == -1)
    {
        return node;
    }

    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{

    memset(par, -1, sizeof(par));
    memset(group_size, 1, sizeof(group_size));

    int n, e;
    cin >> n >> e;

    bool cycle = false;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        int leaderA = find(a);
        int leaderB = find(b);

        if (leaderA == leaderB)
        {
            cycle = true;
        }
        else
        {
            dsu_union(a, b);
        }
    }

    if (cycle)
    {
        cout << "Cycle Detected.\n";
    }
    else
    {
        cout << "No Cycle.\n";
    }

    return 0;
}


/*

Sample Input 1: 
6 6
0 1
1 2
0 4
4 5
5 3
3 4

Sample Output 1: Cycle Detected.


Sample Input 2: 
6 5
0 1
1 2
0 4
4 5
3 4

Sample Output 2: No Cycle.


Sample Input 3: 
2 1
0 1

Sample Output 3: No Cycle.


Sample Input 4: 
3 3
0 1
0 2
1 2

Sample Output 4: Cycle Detected.


Feature: ekhane 2 ta node diye connect cycle bolbe nai......kono corner case handle korte hobe na

*/