#include <bits/stdc++.h> // All standard C++ library include
using namespace std;

int main() {
    int n;
    cin >> n; // Input n

    // Loop from 2 to sqrt(n) to find prime factors
    for (int i = 2; i * i <= n; i++) {
        // jotokkhon n i diye divide hoy
        while (n % i == 0) {
            cout << i << " "; // print i (prime factor)
            n = n / i;         // divide n by i
        }
    }

    // jokhon n ekta prime hoy and boro prime factor thake
    if (n > 1) {
        cout << n << " "; // Last prime factor
    }

    cout << endl;
    return 0;
}


/*

F. Prime factorization
time limit per test2 seconds
memory limit per test64 megabytes
You are given an integer n. Output its prime factorization.

If n = a1b1a2b2 ... akbk, where ak are prime numbers, the output of your program should look as follows: a1 a1 ... a1 a2 a2 ... a2 ... ak ak ... ak, where factors are ordered in non-decreasing order, and each factor ai is printed bi times.

Input
The only line of input contains an integer n (2 ≤ n ≤ 250).

Output
Output the prime factorization of n, as described above.

Examples
InputCopy
245
OutputCopy
5 7 7 
InputCopy
13
OutputCopy
13 


*/