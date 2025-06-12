#include <bits/stdc++.h>
using namespace std;

int get_max_match(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int res = 0;

    // Step 1: Count direct matches
    for (int i = 0; i < n; ++i) {
        if (a[i] == b[i]) res++;
    }

    // Step 2: Check max matches after removing one index
    int max_gain = 0;

    for (int i = 0; i < n; ++i) {
        int temp_res = 0;
        // Try removing a[i] and b[i]
        for (int j = 0; j < n; ++j) {
            if (j == i) continue;
            if (j < i && a[j] == b[j]) temp_res++;
            else if (j > i && a[j] == b[j]) temp_res++;
        }

        max_gain = max(max_gain, temp_res);
    }

    // Step 3: Try swap operations
    for (int i = 0; i + 1 < n; ++i) {
        vector<int> ta = a, tb = b;
        ta[i] = b[i + 1];
        tb[i] = a[i + 1];
        int match = 0;
        for (int j = 0; j < n; ++j) {
            if (ta[j] == tb[j]) match++;
        }
        max_gain = max(max_gain, match);
    }

    return max(res, max_gain);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        int ans = 0;

        // Use prefix dynamic programming to calculate current match
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; ++i)
            prefix[i + 1] = prefix[i] + (a[i] == b[i]);

        // Case 1: Without removal
        ans = prefix[n];

        // Case 2: With one removal
        for (int i = 0; i < n; ++i)
            ans = max(ans, prefix[i] + (prefix[n] - prefix[i + 1]));

        cout << ans << "\n";
    }

    return 0;
}



/*
*/