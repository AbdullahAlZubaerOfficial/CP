#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,q;
    cin >> n >> q;

    int ar[n];

    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        int flag = 0;
        for(int i=0; i<n; i++){
            if(ar[i]==x){
                flag = 1;
            }
        }
        if(flag == 1){
            cout << "found";
        }else{
            cout << "not found";
        }
    }
     
    

    return 0;
}


/*

Input: 
5 3
1 5 4 3 2
5 
3 
6

Output: 
found 
found
not found

*/