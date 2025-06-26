#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int n;
     cin >> n;

     int ar[n];
     

     for(int i=0; i<n; i++){
        cin >> ar[i];
     }

     int flag = 0;

     for(int i=0; i<n/2; i++){
        if(ar[i]!=ar[n-1-i]){
            flag = 1;
            break;
        }
     }

     if(flag){
        cout << "no";
     }else{
        cout << "yes";
     }
    

    return 0;
}

/*


Input: 
5
1 3 2 3 1

Output: yes

Input: 
4
1 2 3 4

Output: no




*/