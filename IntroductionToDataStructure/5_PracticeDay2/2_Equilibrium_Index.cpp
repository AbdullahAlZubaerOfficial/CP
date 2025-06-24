#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> ar(n);
    for (int i = 0; i < n; i++) cin >> ar[i];

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += ar[i]; // manual sum
    }

    int leftSum = 0;

    for (int i = 0; i < n; i++) {
        int rightSum = total - leftSum - ar[i];
        if (leftSum == rightSum) {
            cout << i << endl;
            return 0;
        }
        leftSum += ar[i];
    }

    cout << -1 << endl;
    return 0;
}


/*

sheet: https://docs.google.com/document/d/1SInJU7vWMgmLO-lulcQ2aGAeLze-0632fS8Iz-14t_A/edit?tab=t.0

Problem 2: Equilibrium Index 
Description: Given an array of integers, find the equilibrium index. An equilibrium index is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.
Example:

Input:
7
-7 1 5 2 -4 3 0

Output: 3


Explanation: At index 3, the sum of elements before it is -1 and after it is also -1

-7
1
5
2
-4
3
0

 	0	   1		2		3		4		5		6
Sum of before index 3  = -7 + 1 + 5 = -1
Sum of after index    3	  = -4 + 3 + 0 = -1



*/