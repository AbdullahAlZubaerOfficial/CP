#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int t;
   cin >> t;
   
   while(t--){
    int n, s;
        cin >> n >> s;

        int a[100];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n); 

        bool found = false;



       
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;



            while (left < right) {
                int sum = a[i] + a[left] + a[right];

                if (sum == s) {
                    found = true;
                    break;
                }
                else if (sum < s) {
                    left++;
                }
                else {
                    right--;
                }
            }



            if (found) break;
        }
    


        
        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

     return 0;

   }
    

   
