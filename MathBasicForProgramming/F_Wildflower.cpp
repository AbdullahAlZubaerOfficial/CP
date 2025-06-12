#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int max_match = 0;
    // dp[i] = number of matches if we remove index i
    for (int remove = -1; remove < n; ++remove) {
        vector<int> a2, b2;
        for (int i = 0; i < n; ++i) {
            if (i == remove) continue;
            a2.push_back(a[i]);
            b2.push_back(b[i]);
        }
        int m = a2.size();
        vector<int> a3 = a2, b3 = b2;

        // Greedy fix pass
        for (int i = 0; i < m - 1; ++i) {
            if (a3[i] != b3[i]) {
                if (a3[i+1] == b3[i]) a3[i] = a3[i+1];
                if (b3[i+1] == a3[i]) b3[i] = b3[i+1];
            }
        }

        int match = 0;
        for (int i = 0; i < m; ++i)
            if (a3[i] == b3[i]) ++match;
        max_match = max(max_match, match);
    }
    return max_match;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int& x : a) cin >> x;
        for (int& x : b) cin >> x;
        cout << solve(a, b) << '\n';
    }
    return 0;
}


/*
F. Wildflower
time limit per test2 seconds
memory limit per test256 megabytes
Yousef has a rooted tree∗
 consisting of exactly n
 vertices, which is rooted at vertex 1
. You would like to give Yousef an array a
 of length n
, where each ai
 (1≤i≤n)
 can either be 1
 or 2
.

Let su
 denote the sum of av
 where vertex v
 is in the subtree†
 of vertex u
. Yousef considers the tree special if all the values in s
 are pairwise distinct (i.e., all subtree sums are unique).

Your task is to help Yousef count the number of different arrays a
 that result in the tree being special. Two arrays b
 and c
 are different if there exists an index i
 such that bi≠ci
.

As the result can be very large, you should print it modulo 109+7
.

∗
A tree is a connected undirected graph with n−1
 edges.

†
The subtree of a vertex v
 is the set of all vertices that pass through v
 on a simple path to the root. Note that vertex v
 is also included in the set.

Input
The first line contains an integer t
 (1≤t≤104)
 — the number of test cases.

Each test case consists of several lines. The first line of the test case contains an integer n
 (2≤n≤2⋅105)
 — the number of vertices in the tree.

Then n−1
 lines follow, each of them contains two integers u
 and v
 (1≤u,v≤n,u≠v)
 which describe a pair of vertices connected by an edge. It is guaranteed that the given graph is a tree and has no loops or multiple edges.

It is guaranteed that the sum of n
 over all test cases doesn't exceed 2⋅105
.

Output
For each test case, print one integer x
 — the number of different arrays a
 that result in the tree being special, modulo 109+7
.

Example
InputCopy
7
2
1 2
8
1 2
2 3
3 8
2 4
4 5
5 6
6 7
10
1 2
2 3
3 4
4 5
5 6
4 7
7 8
4 9
9 10
7
1 4
4 2
3 2
3 5
2 6
6 7
7
1 2
2 3
3 4
3 5
4 6
6 7
7
5 7
4 6
1 6
1 3
2 6
6 7
5
3 4
1 2
1 3
2 5
OutputCopy
4
24
0
16
48
0
4
Note
The tree given in the fifth test case:
*/