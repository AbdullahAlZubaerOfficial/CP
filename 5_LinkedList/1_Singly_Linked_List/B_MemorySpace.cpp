#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int a[5] = {1,2,3,4,5};   // or, vector<int> a = {1,2,3,4,5}
   cout<<  (int)&a[1] <<" " <<  (int)&a[2] << " " << (int)&a[3] <<" "<<  (int)&a[4] << " " <<  (int)&a[5];  

    return 0;
}

/*

Output: 6487792 6487796 6487800 6487804 6487808

*/