#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Replace positive numbers with 1
    replace_if(a.begin(), a.end(), [](int x){ return x > 0; }, 1);



    // Replace negative numbers with 2
    replace_if(a.begin(), a.end(), [](int x){ return x < 0; }, 2);

    // Print result
    for (int x : a) {
        cout << x << " ";
    }

    return 0;
}

// TC -> O(n)
// SC -> O(n)

/*


C. Replacement
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Replace every positive number by 1.
Replace every negative number by 2.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the array after the replacement and it's values separated by space.

Example
InputCopy
5
1 -2 0 3 4
OutputCopy
1 2 0 1 1 




*/