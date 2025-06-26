// code -> 1
#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int n;
     cin >> n;

     vector <int> divisors;

     for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
        //    cout << i << " ";
        divisors.push_back(i);
            if((n/i)!=i){
                // cout << n/i << " ";
                divisors.push_back(n/i);
            }
        }

     }

     sort(divisors.begin(),divisors.end());

      for(int d: divisors){
        cout << d << " ";
      }
    

    return 0;
}

// TC -> O(√n * log n)



/*
// Code: 2
#include <stdio.h>

int main() { 
   
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
   
    return 0;
}

// TC -> O(n)

*/


/*

Input: 36
Output: 1 2 3 4 6 9 12 18 36

*/