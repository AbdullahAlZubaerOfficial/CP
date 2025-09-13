#include <bits/stdc++.h>
using namespace std;

int par[1005];
int group_size[1005];
vector<vector<bool>> vis(1005, vector<bool>(1005, false));

int find(int node) {
    if (par[node] == -1)
        return node;

    return par[node] = find(par[node]); // path compression
}

void dsu(int node1, int node2) {
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (leader1 == leader2) return; // already same group

    if (group_size[leader1] > group_size[leader2]) {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    } else {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main() {
    memset(par, -1, sizeof(par));
    fill(group_size, group_size + 1005, 1); // fix here ✅

    int n, e;
    cin >> n >> e;
    int cycle = 0;

    while (e--) {
        int a, b;
        cin >> a >> b;

        if (!vis[a][b]) {
            vis[a][b] = true;
            vis[b][a] = true;

            int leader1 = find(a);
            int leader2 = find(b);

            if (leader1 == leader2) {
                cycle++; // edge creates a cycle
            } else {
                dsu(a, b);
            }
        }
    }

    cout << cycle << "\n";

    return 0;
}


/*

Sample Input 1: 
5 7
1 2
2 3
3 4
4 5
4 1
2 4
5 3


Sample Output 1: 3

Sample Input 2:
3 3
1 2
2 3
1 3


Sample Output 2: 1




*/