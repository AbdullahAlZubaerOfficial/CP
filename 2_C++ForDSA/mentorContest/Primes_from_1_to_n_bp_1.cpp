#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n;
   cin >> n;
   
   for(int i=2; i<=n; i++){
    bool isPrime = true;
    for(int j=2; j*j <=i; j++){
        if(i%j==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout << i << " ";
    }
   }

   cout << endl;
    

    return 0;
}

/*

Primes from 1 to n bp1

You are helping a mathematician named Priya prepare a list of prime numbers for her study. She gives you a number N and asks you to find all the prime numbers between 1 and N, inclusive.

Recall, a prime number is a number greater than 1 that has no divisors other than 1 and itself. Note that 1 is not a prime number.

Help Priya by printing all prime numbers in the range [1, N] separated by spaces.

Input Format

A single line containing an integer N (2 ≤ N ≤ 1000).

Constraints

2 ≤ N ≤ 1000
Time limit: 3 seconds
Memory limit: 256 megabytes
Output Format

Print all prime numbers between 1 and N (inclusive), separated by a space.

Sample Input 0

10
Sample Output 0

2 3 5 7
Sample Input 1

2
Sample Output 1

2

*/