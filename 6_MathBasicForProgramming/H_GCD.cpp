#include <bits/stdc++.h>
using namespace std;
 
int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a = a % b;
        else b = b % a;
    }
 
    return (a == 0) ? b : a;
}
 
int main() {
    int a, b; cin >> a >> b;
    long long int lcm = (long long int)((long long int)a*(long long int)b) / (long long int)gcd(a, b);
 
    cout << gcd(a, b) << " " << lcm;

 return 0;

}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     long long A, B;
//     cin >> A >> B;

//     long long a = A, b = B;

//     // GCD বের করছি
//     while (b != 0) {
//         long long temp = b;
//         b = a % b;
//         a = temp;
//     }
//     long long gcd = a;

//     // LCM বের করছি
//     long long lcm = (A / gcd) * B;

//     cout << gcd << " " << lcm << "\n";

//     return 0;
// }



/*

H. GCD
time limit per test1 second
memory limit per test256 megabytes
Given two numbers A and B. Print the GCD and LCM of A and B.

Note:

GCD is the greatest common divisor of A and B.
LCM is the least common multiple of A and B.
Input
Only one line contains two numbers A and B (1 ≤ A, B ≤ 2 * 109).

Output
Print the GCD and the LCM of A and B separated by a space.

Example
InputCopy
12 18
OutputCopy
6 36

*/