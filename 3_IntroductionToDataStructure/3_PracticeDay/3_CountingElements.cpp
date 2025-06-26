#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Array elements gulo ekta set e rekhe rakhi jate fast lookup korte pari
    unordered_set<int> s(a.begin(), a.end());
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s.count(a[i] + 1)) {
            count++;
        }
    }
    


    cout << count << endl;
    return 0;
}

/*
➡️ Total: O(n) average-case complexity 😍
(Worst-case e unordered_set er lookup O(n) hote pare, but generally it's O(1) 🧠)

SC -> O(n)

*/

/*


D. Counting Elements
time limit per test1 second
memory limit per test256 megabytes
You are given an array a
 of n
 integers, count the number of element ai
 in the array such that ai+1
 is also exists in the array a
 .

If there're duplicates in a
, count them separately.

Input
The first line contains an integer n(1≤n≤103)
 the number of elements in the array a

The second line contains n
 integers ai(0≤Xi≤103)
 the elements of the array a
.

Output
output the number of elements as descriped above.

Examples
InputCopy
3
4 4 5
OutputCopy
2
InputCopy
3
1 2 3
OutputCopy
2
InputCopy
8
1 1 3 3 5 5 7 7
OutputCopy
0
InputCopy
6
1 3 2 3 5 0
OutputCopy
3

  


*/