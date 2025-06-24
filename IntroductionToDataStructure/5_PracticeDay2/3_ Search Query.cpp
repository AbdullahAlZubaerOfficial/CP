#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n;
   cin >> n;
   
   vector<int>v(n);

   for(int i=0; i<n; i++){
    cin >> v[i] ;
   }

   int q;
   cin >> q;

   sort(v.begin(),v.end());


   while(q--){

    int x;
    cin >> x;

    int l =0, r = n-1;

    int flag = 0;

    while(l<=r){
        int mid = (l+r)/2;

        if(v[mid]==x){
            flag = 1;
            break;
        }
        else if(x > v[mid]){
            l = mid + 1;

        }
        else{
            r = mid -1;

        }

       
    }

     if(flag ==1 ){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }



   }

    

    return 0;
}


// sheet: https://docs.google.com/document/d/1SInJU7vWMgmLO-lulcQ2aGAeLze-0632fS8Iz-14t_A/edit?tab=t.0