#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    while (q--) {
        string signn;
        cin >> signn;

        if (signn == "pop_back") {

            s.pop_back();
        } 
        else if (signn == "front") {

            cout << s[0] << endl;
        } 
        else if (signn == "back") {

            cout << s[s.size() - 1] << endl;
        } 
        else if (signn == "push_back") {

            char x;
            cin >> x;
            s.push_back(x);
        } 
        else if (signn == "print") {

            int pos;
            cin >> pos;
            cout << s[pos - 1] << endl;
        } 
        else if (signn == "substr") {

            int l, r;
            cin >> l >> r;
            cout << s.substr(l - 1, r - l + 1) << endl;

        } 
        else if (signn == "sort") {

            int l, r;
            cin >> l >> r;
            sort(s.begin() + l - 1, s.begin() + r);
        } 
 else if (signn == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(s.begin() + l - 1, s.begin() + r);
        }
    }

    return 0;
}
