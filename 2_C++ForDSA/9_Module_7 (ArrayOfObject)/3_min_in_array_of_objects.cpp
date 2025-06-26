#include<bits/stdc++.h>
using namespace std;

class Student
{
    public: 
    string name;
    int roll;
    int marks;
};

int main(){
    
     int n;
     cin >> n;

     Student a[n];

     for(int i=0; i<n; i++){
        cin >> a[i].name >> a[i].roll >> a[i].marks;
     }

     int mn = INT_MAX;

     for(int i=0; i<n; i++){
       mn = min(a[i].marks,mn);
     }
    
     cout << mn << endl;

    return 0;
}


/*

Input: 
6
sakib 15 89
rakib 18 65
akib 28 75
sifat 24 92
rifat 23 95
ifat 17 86

Output: 65


here only marks print hoche.....
*/