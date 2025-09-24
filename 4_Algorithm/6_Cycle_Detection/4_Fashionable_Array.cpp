#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int t;
     cin >> t;

     while(t--){
        int n;
        cin >> n;

        int ar[n];

        for(int i=0; i<n; i++){
            cin >> ar[i];
        }

        sort(ar,ar+n);

        int mn = ar[0];
        int mx = ar[n-1];

        if(mn%2== mx%2) cout << 0 << endl;
        else{
            int i=0, cnt1 = 0;
            while(ar[i]%2 != mx%2){
                i++;
                cnt1++;
            }


              int j=n-1, cnt2 = 0;
            while(ar[j]%2 != mn%2){
                j--;
                cnt2++;
            }

            cout << min(cnt1,cnt2) << endl;

        }

     }
    

    return 0;
}


/*

question: https://codeforces.com/problemset/problem/2110/A

*/