#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (n == 2) {
        // For n=2, the equations are:
        // x*1 + y*2 = a1
        // x*2 + y*1 = a2
        // Solving gives: x = (2*a1 - a2)/3, y = (2*a2 - a1)/3
        // Both x and y must be non-negative integers.
        long long a1 = a[0], a2 = a[1];
        if ((2 * a1 - a2) % 3 == 0 && (2 * a2 - a1) % 3 == 0) {
            long long x = (2 * a1 - a2) / 3;
            long long y = (2 * a2 - a1) / 3;
            if (x >= 0 && y >= 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
        return;
    }

    // For n >=3, we can pick any two equations to solve for x and y.
    // Let's use the first and last elements.
    long long a1 = a[0], an = a[n-1];
    long long i1 = 1, in = n;
    long long j1 = n - i1 + 1, jn = n - in + 1;

    // Equations:
    // x*i1 + y*j1 = a1
    // x*in + y*jn = an
    // Solving:
    // x = (a1*jn - an*j1) / (i1*jn - in*j1)
    // y = (a1*in - an*i1) / (j1*in - jn*i1)
    long long denominator_x = i1 * jn - in * j1;
    long long denominator_y = j1 * in - jn * i1;

    if (denominator_x == 0 || denominator_y == 0) {
        // The equations are dependent or inconsistent.
        // Check if all a_i can be expressed as k*(i + (n-i+1)) = k*(n+1)
        bool possible = true;
        long long k = a[0] / (1 + n);
        if (a[0] % (1 + n) != 0) {
            possible = false;
        } else {
            for (int i = 1; i < n; ++i) {
                if (a[i] != k * (i + 1 + (n - i))) {
                    possible = false;
                    break;
                }
            }
        }
        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        return;
    }

    if ((a1 * jn - an * j1) % denominator_x != 0 || (a1 * in - an * i1) % denominator_y != 0) {
        cout << "NO\n";
        return;
    }

    long long x = (a1 * jn - an * j1) / denominator_x;
    long long y = (a1 * in - an * i1) / denominator_y;

    if (x < 0 || y < 0) {
        cout << "NO\n";
        return;
    }

    // Verify all other elements
    for (int i = 1; i < n - 1; ++i) {
        long long total = x * (i + 1) + y * (n - i);
        if (total != a[i]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

/*
D. Retaliation
time limit per test2 seconds
memory limit per test256 megabytes
Yousef wants to explode an array a1,a2,…,an
. An array gets exploded when all of its elements become equal to zero.

In one operation, Yousef can do exactly one of the following:

For every index i
 in a
, decrease ai
 by i
.
For every index i
 in a
, decrease ai
 by n−i+1
.
Your task is to help Yousef determine if it is possible to explode the array using any number of operations.

Input
The first line of the input contains an integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains an integer n
 (2≤n≤2⋅105
) — the size of the array.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the elements of the array.

It is guaranteed that the sum of n
 over all test cases doesn't exceed 2⋅105
.

Output
For each test case, print "YES" if Yousef can explode the array, otherwise output "NO".

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

Example
InputCopy
6
4
3 6 6 3
5
21 18 15 12 9
10
2 6 10 2 5 5 1 2 4 10
7
10 2 16 12 8 20 4
2
52 101
2
10 2
OutputCopy
NO
YES
NO
NO
YES
NO
Note
In the second test case, we can do the following:

Perform 1
 operation of the first type. The array becomes [20,16,12,8,4]
.
Perform 4
 operations of the second type. The array becomes [0,0,0,0,0]
.
In the first, third, fourth, and sixth test cases, it can be proven that it is impossible to make all elements equal to zero using any number of operations.



*/