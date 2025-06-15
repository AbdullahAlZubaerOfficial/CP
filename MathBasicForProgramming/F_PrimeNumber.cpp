#include<bits/stdc++.h>
using namespace std;

int main(){
    
  long long int n;
   cin >> n;
   
   vector <int> divisors;

   for(int i=1; i<=sqrt(n); i++){
    if(n%i==0){
        // cout << i << " ";
        divisors.push_back(i);
        if((n/i)!=i){
            // cout << n/i << " ";
            divisors.push_back(n/i);
        }
    }
   }

   long long int count = 0;

   for(int d : divisors){
    // cout << d << " ";
     count++;
   }

   if(count == 2){
    cout << "YES";
    return 0;
   }else{
    cout << "NO";
   }
    

    return 0;
}

// TC -> O(√n) 

/*

Input: 2
Output: yes

Input: 5
Output: yes

Input: 10
Output: no

Input: 13
Output: yes

*/