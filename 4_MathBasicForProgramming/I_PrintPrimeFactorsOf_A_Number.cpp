#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<int> list; // Unique prime factors

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            list.insert(i);
            while (n % i == 0) {
                n = n / i;
            }
        }
    }

    // Copy set to vector for sorting
    vector<int> sortedList(list.begin(), list.end());
    sort(sortedList.begin(), sortedList.end());

    // Output
    for (auto val : sortedList) {
        cout << val << " ";
    }

    return 0;
}
// ✅ Time Complexity: O(√n)